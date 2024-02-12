/***************************************************************************
 *   Author Alan Crispin                                                   *
 *   crispinalan@gmail.com                                                 *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation.                                         *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program.  If not, see <http://www.gnu.org/licenses/>. *
 ***************************************************************************/

#include <gtk/gtk.h>
#include "dictionary.h"
#include "diphone.h"

static void callbk_quit(GSimpleAction* action,G_GNUC_UNUSED GVariant *parameter, gpointer user_data);
static void callbk_about(GSimpleAction* action, GVariant *parameter, gpointer user_data);
static GMenu *create_menu(const GtkApplication *app);

static int m_talk_rate=7500;

//--------------------------------------------------------------------
// Removers (unwanted characters}
//--------------------------------------------------------------------

static char *remove_commas(const char *text)
{
	GString *str;
	const char *p;
	str = g_string_new("");
	p = text;
	while (*p)
	{
		gunichar cp = g_utf8_get_char(p);
		if (cp != ',')
		{ 
			g_string_append_unichar(str, *p);
		} // if
		++p;
	}
	return g_string_free(str, FALSE);
}

static char *remove_fullstop(const char *text)
{
	GString *str;
	const char *p;
	str = g_string_new("");
	p = text;
	while (*p)
	{
		gunichar cp = g_utf8_get_char(p);
		if (cp != '.')
		{ 
			g_string_append_unichar(str, *p);
		} // if
		++p;
	}
	return g_string_free(str, FALSE);
}
static char* remove_semicolons (const char *text)
{
	GString *str;
	const char *p;
	str = g_string_new ("");
	p = text;
	while (*p)
	{
	gunichar cp = g_utf8_get_char(p);
	if ( cp != ';' ){ 
	g_string_append_unichar (str, *p);
	}//if
	++p;
	}
	return g_string_free (str, FALSE);
}

static char* remove_question_marks (const char *text)
{
	GString *str;
	const char *p;
	str = g_string_new ("");
	p = text;
	while (*p)
	{
	gunichar cp = g_utf8_get_char(p);
	if ( cp != '?' ){ 
	g_string_append_unichar (str, *p);
	}//if
	++p;
	}
	return g_string_free (str, FALSE);
}

static char* remove_explanation_marks (const char *text)
{
	GString *str;
	const char *p;
	str = g_string_new ("");
	p = text;
	while (*p)
	{
	gunichar cp = g_utf8_get_char(p);
	if ( cp != '!' ){ 
	g_string_append_unichar (str, *p);
	}//if
	++p;
	}
	return g_string_free (str, FALSE);
}

static char* remove_punctuations(const char *text)
{
	GString *str;
	const char *p;
	str = g_string_new ("");
	p = text;
	while (*p)
	{
	gunichar cp = g_utf8_get_char(p);
	if ( cp != '\'' ){ //remove all apostrophes
	g_string_append_unichar (str, *p);
	}//if
	++p;
	}
	return g_string_free (str, FALSE);
}

static char* replace_hypens(const char *text)
{
	GString *str;
	const char *p;
	str = g_string_new ("");
	p = text;
	gint i=0;
	while (*p)
	{
	gunichar cp = g_utf8_get_char(p);
	if ( cp != '-' ){ //append
	g_string_append_unichar (str, *p);
	}//if
	if ( cp == '-' ){ //replace			
	g_string_insert_unichar (str,i,' ');
	}//if	
	++p;
	++i;
	}
	return g_string_free (str, FALSE);
}

//--------------------------------------------------------------------
//play
//--------------------------------------------------------------------
void  playraw(gpointer user_data)
{   
    gchar *raw_file =user_data;       
    gchar *m_sample_rate_str = g_strdup_printf("%i", m_talk_rate); 
    gchar *sample_rate_str ="-r ";    
    sample_rate_str= g_strconcat(sample_rate_str,m_sample_rate_str, NULL);     
    //gchar * command_str ="aplay -c 1 -f S16_LE";
    gchar * command_str ="aplay -c 1 -f U8";
    command_str =g_strconcat(command_str," ",sample_rate_str, " ", raw_file, NULL); 
    system(command_str); 
}

//--------------------------------------------------------------------
//concatenate
//--------------------------------------------------------------------

unsigned char *rawcat(unsigned char *arrys[], unsigned int arry_size[], int arry_count) {
		
	
	if (arry_count<2) return NULL;	
	
	unsigned int  total_samples=0;
	for (int c = 0; c < arry_count; c++) 
	{  
    unsigned int count =arry_size[c]; 
    total_samples=total_samples+count;	
    }        
	unsigned char *data = (unsigned char*)malloc(total_samples * sizeof(unsigned char));
	
	unsigned int offset=0;
	for(int k=0; k<arry_count; k++)
	{
		//loop through each arry	
		for(int i = 0; i < arry_size[k]; i++) 
		{		
		data[i+offset]=arrys[k][i];
		}		
		offset =offset+arry_size[k];
	}//k kount
	return data;
}

unsigned int get_merge_size(unsigned int sizes_arry[], int arry_size){
	
	unsigned int total_samples=0;
	for (int i = 0; i < arry_size; i++) 
	{  
    unsigned int count =sizes_arry[i]; 
    total_samples=total_samples+count;	
    }
	return total_samples;
}

//--------------------------------------------------------------------
// speak button
//--------------------------------------------------------------------
static void button_speak_clicked (GtkButton *button, gpointer   user_data)
{
	GtkEntryBuffer *buffer_text; 
	GtkWidget *entry_text = g_object_get_data(G_OBJECT(button), "button-entry-key");
	buffer_text = gtk_entry_get_buffer (GTK_ENTRY(entry_text));	
	const char* input_text= gtk_entry_buffer_get_text (buffer_text);
	const char *text =g_ascii_strdown(input_text, -1);	//lower	
	
	//very simple input text processing
	text = remove_semicolons(text);
	text = remove_commas(text);
	text = remove_fullstop(text);
	text = remove_question_marks(text);	
	text= remove_explanation_marks(text);
	text =remove_punctuations(text);
	text = replace_hypens(text); //replace hypens with space
	
	//g_print("processed text = %s\n", text);
	
	gchar** words;	
	GList *diphone_list = NULL;			
	words = g_strsplit (text, " ", 0); //split on space	
	int j=0; //count			   
	while(words[j] != NULL)
	{	
	//g_print("word =%s\n",words[j]);
	diphone_list =g_list_concat(diphone_list,word_to_diphones(words[j]));
	//diphone_list =g_list_concat(diphone_list, word_to_diphones("pau"));
	j++;
	} //while loop words
		
	gpointer diphone_list_pointer;
	gchar* diphone_str;		
	gint diphone_number  =g_list_length(diphone_list);
	//g_print("diphone_number = %i\n", diphone_number);
	//create diphone array using list length
	unsigned char *diphone_arrays[diphone_number]; 
	unsigned int diphone_arrays_sizes[diphone_number];
		
	//load diphone arrays
	for(int i=0; i < diphone_number; i++)
	{
		diphone_list_pointer=g_list_nth_data(diphone_list,i);
		diphone_str=(gchar *)diphone_list_pointer;					
		//g_print("diphone = %s\n",diphone_str);		
		diphone_arrays[i] = load_diphone_arry(diphone_str);
		diphone_arrays_sizes[i]=load_diphone_len(diphone_str);		
	}	
	
	//concatenate using raw cat
	unsigned char *data = rawcat(diphone_arrays, diphone_arrays_sizes, diphone_number);	
	unsigned int data_len = get_merge_size(diphone_arrays_sizes,diphone_number);	
    
    gchar* raw_file ="/tmp/talkout.raw";
	FILE* f = fopen(raw_file, "w");
    fwrite(data, data_len, 1, f);
    fclose(f);  
    playraw(raw_file);
	free(data);	//prevent memory leak
	
}

//--------------------------------------------------------------------
// callbk actions
//--------------------------------------------------------------------

static void callbk_quit(GSimpleAction * action,	G_GNUC_UNUSED GVariant *parameter, gpointer user_data)
{
	g_application_quit(G_APPLICATION(user_data));		
}

static void callbk_about(GSimpleAction* action, GVariant *parameter, gpointer user_data)
{
	GtkWidget *window = user_data;
	const gchar *authors[] = {"Alan Crispin", NULL};
	GtkWidget *about_dialog;
	about_dialog = gtk_about_dialog_new();
	gtk_window_set_transient_for(GTK_WINDOW(about_dialog),GTK_WINDOW(window));
	gtk_widget_set_size_request(about_dialog, 200,200);
    gtk_window_set_modal(GTK_WINDOW(about_dialog),TRUE);
	gtk_about_dialog_set_program_name(GTK_ABOUT_DIALOG(about_dialog), "Talker");
	gtk_about_dialog_set_version (GTK_ABOUT_DIALOG(about_dialog), "0.1.4");
	gtk_about_dialog_set_copyright(GTK_ABOUT_DIALOG(about_dialog),"Copyright © 2024");
	gtk_about_dialog_set_comments(GTK_ABOUT_DIALOG(about_dialog),"Diphone Speech Synthesizer");
	gtk_about_dialog_set_license_type (GTK_ABOUT_DIALOG(about_dialog), GTK_LICENSE_LGPL_2_1);
	gtk_about_dialog_set_website(GTK_ABOUT_DIALOG(about_dialog),"https://github.com/crispinprojects/");
	gtk_about_dialog_set_website_label(GTK_ABOUT_DIALOG(about_dialog),"Project Website");
	gtk_about_dialog_set_authors(GTK_ABOUT_DIALOG(about_dialog), authors);
	gtk_about_dialog_set_logo_icon_name(GTK_ABOUT_DIALOG(about_dialog), "x-office-calendar");
	gtk_widget_set_visible (about_dialog, TRUE);	
}

//--------------------------------------------------------------------
// menu
//--------------------------------------------------------------------

static GMenu *create_menu(const GtkApplication *app) {
	
		
	GMenu *menu;
    GMenu *file_menu; 
    GMenu *help_menu;
    GMenuItem *item;

	menu =g_menu_new();
	file_menu =g_menu_new();
	help_menu =g_menu_new();
	
	//File item	
	item =g_menu_item_new("Quit", "app.quit"); //quit action
	g_menu_append_item(file_menu,item);
	g_object_unref(item);
			
	//Help item	
	item =g_menu_item_new("About", "app.about"); //about action
	g_menu_append_item(help_menu,item);
	g_object_unref(item);
	
	g_menu_append_submenu(menu, "File", G_MENU_MODEL(file_menu));
    g_object_unref(file_menu);  
   
    g_menu_append_submenu(menu, "Help", G_MENU_MODEL(help_menu));
    g_object_unref(help_menu);
    
    return menu;
}


//--------------------------------------------------------------------
// activate
//--------------------------------------------------------------------

static void activate (GtkApplication* app, gpointer user_data)
{
	GtkWidget *window;			
	GtkWidget *vbox;  
	GtkWidget *label_text;  
	GtkEntryBuffer *buffer; 
	GtkWidget *entry_text;
	GtkWidget *button_speak;
	GMenu *menu;	
		
	//setup window
	window = gtk_application_window_new (app);
	gtk_window_set_title (GTK_WINDOW (window), "Text To Speech");
	gtk_window_set_default_size (GTK_WINDOW (window),400,100);
	//setup layout box
	vbox =gtk_box_new(GTK_ORIENTATION_VERTICAL,1);  
	gtk_window_set_child (GTK_WINDOW (window), vbox);
	//actions
	GSimpleAction *quit_action;	
	quit_action=g_simple_action_new("quit",NULL); //app.quit
	g_action_map_add_action(G_ACTION_MAP(app), G_ACTION(quit_action)); //make visible	
	g_signal_connect(quit_action, "activate",  G_CALLBACK(callbk_quit), app);
	
	GSimpleAction *about_action;
	about_action=g_simple_action_new("about",NULL); //app.about
	g_action_map_add_action(G_ACTION_MAP(app), G_ACTION(about_action)); //make visible
	g_signal_connect(about_action, "activate",  G_CALLBACK(callbk_about), window);
	
	//menu
	menu=create_menu(app);	
	gtk_application_set_menubar (app,G_MENU_MODEL(menu));
    gtk_application_window_set_show_menubar(GTK_APPLICATION_WINDOW(window), TRUE);
	
	
	//create label
	label_text =gtk_label_new("Enter text ");
	    
	entry_text =gtk_entry_new(); 	
	gtk_widget_set_hexpand (GTK_WIDGET (entry_text), true);
		
	button_speak = gtk_button_new_with_label ("Speak");
	g_signal_connect (GTK_BUTTON (button_speak),"clicked", G_CALLBACK (button_speak_clicked), G_OBJECT (window));
	
	g_object_set_data(G_OBJECT(button_speak), "button-entry-key",entry_text);
	
	gtk_box_append(GTK_BOX(vbox), label_text); 
    gtk_box_append(GTK_BOX(vbox), entry_text);
	gtk_box_append(GTK_BOX(vbox), button_speak);
	
	gtk_window_present(GTK_WINDOW (window));    //use present not show with gtk4	
}

//--------------------------------------------------------------------
// main
//--------------------------------------------------------------------

int main (int argc, char **argv)
{
  GtkApplication *app;
  int status;

  app = gtk_application_new ("org.gtk.diphonetalker", G_APPLICATION_DEFAULT_FLAGS);
  g_signal_connect (app, "activate", G_CALLBACK (activate), NULL);
  status = g_application_run (G_APPLICATION (app), argc, argv);
  g_object_unref (app);

  return status;
}
