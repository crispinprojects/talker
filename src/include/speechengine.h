/***************************************************************************
 *   Author Alan Crispin                 *
 *   crispinalan@gmail.com                                                    *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation.                                  *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program.  If not, see <http://www.gnu.org/licenses/>. *
 ***************************************************************************/

#ifndef SPEECHENGINE_H
#define SPEECENGINE_H

#include <iostream>
#include <cstdlib>
#include <fstream>
#include <vector>
#include <sstream>
#include <filesystem>
#include <bits/stdc++.h> 

#include "wavcat.h"   	// wavcat
#include "wavamp.h" 	//wavamp
#include "dictionary.h"   // dictionary

class SpeechEngine
{
public:
	SpeechEngine();
	void speak(std::string str);	
 

private:
  
    std::string get_diphone_path(std::string dipStr);    
    std::vector<std::string> get_diphone_list(std::string text);
    
    std::string lowercase(std::string str); 
    std::string process_text(std::string str);
   
    bool fileExists(std::string path);
    void play(const char *filename);
};


#endif //SPEECHENGINE_H
