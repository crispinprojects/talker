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
#include "speechengine.h"

SpeechEngine::SpeechEngine()
{
	//std::cout<<"speech engine constructor"<<std::endl;
}

std::string SpeechEngine::get_diphone_path(std::string dipStr)
{

   std::string app_path= std::filesystem::current_path();
  
   //aa diphones   
   if (dipStr=="aa-aa") return app_path+"/diphone/aa-aa.wav";  
   else if (dipStr=="aa-ae") return app_path+"/diphone/aa-ae.wav";
   else if (dipStr=="aa-ah") return app_path+"/diphone/aa-ah.wav";
   else if (dipStr=="aa-ao") return app_path+"/diphone/aa-ao.wav"; 
   else if (dipStr=="aa-aw") return app_path+"/diphone/aa-aw.wav"; 
   else if (dipStr=="aa-ax") return app_path+"/diphone/aa-ax.wav"; 
   else if (dipStr=="aa-ay") return app_path+"/diphone/aa-ay.wav";
   else if (dipStr=="aa-b") return app_path+"/diphone/aa-b.wav"; 
   else if (dipStr=="aa_ch") return app_path+"/diphone/aa-ch.wav"; 
   else if (dipStr=="aa-d") return app_path+"/diphone/aa-d.wav";
   else if(dipStr =="aa-dh") return app_path+"/diphone/aa-dh.wav";
   else if(dipStr =="aa-eh") return app_path+"/diphone/aa-eh.wav";
   else if(dipStr =="aa-er") return app_path+"/diphone/aa-er.wav";
   else if(dipStr =="aa-ey") return app_path+"/diphone/aa-ey.wav";
   else if(dipStr =="aa-f") return app_path+"/diphone/aa-f.wav"; 
   else if(dipStr =="aa-g") return app_path+"/diphone/aa-g.wav";
   else if(dipStr =="aa-hh") return app_path+"/diphone/aa-hh.wav";
   else if(dipStr =="aa-ih") return app_path+"/diphone/aa-ih.wav";
   else if(dipStr =="aa-iy") return app_path+"/diphone/aa-iy.wav";
   else if(dipStr =="aa-jh") return app_path+"/diphone/aa-jh.wav";
   else if(dipStr =="aa-k") return app_path+"/diphone/aa-k.wav";
   else if(dipStr =="aa-l") return app_path+"/diphone/aa-l.wav";
   else if(dipStr =="aa-m") return app_path+"/diphone/aa-m.wav";
   else if(dipStr =="aa-n") return app_path+"/diphone/aa-n.wav";
   else if(dipStr =="aa-ng") return app_path+"/diphone/aa-ng.wav";
   else if(dipStr =="aa-ow") return app_path+"/diphone/aa-ow.wav";
   else if(dipStr =="aa-oy") return app_path+"/diphone/aa-oy.wav";
   else if(dipStr =="aa-p") return app_path+"/diphone/aa-p.wav";
   else if(dipStr =="aa-pau") return app_path+"/diphone/aa-pau.wav";
   else if(dipStr =="aa-r") return app_path+"/diphone/aa-r.wav";
   else if(dipStr =="aa-s") return app_path+"/diphone/aa-s.wav";
   else if(dipStr =="aa-sh") return app_path+"/diphone/aa-sh.wav";
   else if(dipStr =="aa-t") return app_path+"/diphone/aa-t.wav";
   else if(dipStr =="aa-th") return app_path+"/diphone/aa-th.wav";
   else if(dipStr =="aa-uh") return app_path+"/diphone/aa-uh.wav";
   else if(dipStr =="aa-uw") return app_path+"/diphone/aa-uw.wav";
   else if(dipStr =="aa-v") return app_path+"/diphone/aa-v.wav";
   else if(dipStr =="aa-w") return app_path+"/diphone/aa-w.wav";
   else if(dipStr =="aa-y") return app_path+"/diphone/aa-y.wav";
   else if(dipStr =="aa-z") return app_path+"/diphone/aa-z.wav";
   else if(dipStr =="aa-zh") return app_path+"/diphone/aa-zh.wav"; 
    
   // ae diphones
	else if(dipStr=="ae-aa") return app_path+"/diphone/ae-aa.wav";  
	else if(dipStr=="ae-ae") return app_path+"/diphone/ae-ae.wav";
	else if(dipStr=="ae-ah") return app_path+"/diphone/ae-ah.wav";
	else if(dipStr=="ae-ao") return app_path+"/diphone/ae-ao.wav"; 
	else if(dipStr=="ae-aw") return app_path+"/diphone/ae-aw.wav"; 
	else if(dipStr=="aeax") return app_path+"/diphone/ae-ax.wav"; 
	else if(dipStr=="ae-ay") return app_path+"/diphone/ae-ay.wav";
	else if(dipStr=="ae-b") return app_path+"/diphone/ae-b.wav";  
	else if(dipStr=="ae-ch") return app_path+"/diphone/ae-ch.wav"; 
	else if(dipStr=="ae-d") return app_path+"/diphone/ae-d.wav";
	else if(dipStr=="ae-dh") return app_path+"/diphone/ae-dh.wav";
	else if(dipStr=="ae-eh") return app_path+"/diphone/ae-eh.wav";
	else if(dipStr=="ae-er") return app_path+"/diphone/ae-er.wav";
	else if(dipStr=="ae-ey") return app_path+"/diphone/ae-ey.wav";
	else if(dipStr=="ae-f") return app_path+"/diphone/ae-f.wav"; 
	else if(dipStr=="ae-g") return app_path+"/diphone/ae-g.wav";
	else if(dipStr=="ae-hh") return app_path+"/diphone/ae-hh.wav";
	else if(dipStr=="ae-ih") return app_path+"/diphone/ae-ih.wav";
	else if(dipStr=="ae-iy") return app_path+"/diphone/ae-iy.wav";
	else if(dipStr=="ae-jh") return app_path+"/diphone/ae-jh.wav";
	else if(dipStr=="ae-k") return app_path+"/diphone/ae-k.wav";
	else if(dipStr=="ae-l") return app_path+"/diphone/ae-l.wav";
	else if(dipStr=="ae-m") return app_path+"/diphone/ae-m.wav";
	else if(dipStr=="ae-n") return app_path+"/diphone/ae-n.wav";
	else if(dipStr=="ae-ng") return app_path+"/diphone/ae-ng.wav";
	else if(dipStr=="ae-ow") return app_path+"/diphone/ae-ow.wav";
	else if(dipStr=="ae-oy") return app_path+"/diphone/ae-oy.wav";
	else if(dipStr=="ae-p") return app_path+"/diphone/ae-p.wav";
	else if(dipStr=="ae-pau") return app_path+"/diphone/ae-pau.wav";
	else if(dipStr=="ae-r") return app_path+"/diphone/ae-r.wav";
	else if(dipStr=="ae-s") return app_path+"/diphone/ae-s.wav";
	else if(dipStr=="ae-sh") return app_path+"/diphone/ae-sh.wav";
	else if(dipStr=="ae-t") return app_path+"/diphone/ae-t.wav";
	else if(dipStr=="ae-th") return app_path+"/diphone/ae-th.wav";
	else if(dipStr=="ae-uh") return app_path+"/diphone/ae-uh.wav";
	else if(dipStr=="ae-uw") return app_path+"/diphone/ae-uw.wav";
	else if(dipStr=="ae-v") return app_path+"/diphone/ae-v.wav";
	else if(dipStr=="ae-w") return app_path+"/diphone/ae-w.wav";
	else if(dipStr=="ae-y") return app_path+"/diphone/ae-y.wav";
	else if(dipStr=="ae-z") return app_path+"/diphone/ae-z.wav";
	else if(dipStr=="ae-zh") return app_path+"/diphone/ae-zh.wav";       
	 
    // ah diphones
	 else if(dipStr == "ah-aa") return app_path+"/diphone/ah-aa.wav";  
	 else if(dipStr == "ah-ae") return app_path+"/diphone/ah-ae.wav"; 
	 else if(dipStr == "ah-ah") return app_path+"/diphone/ah-ah.wav"; 
	 else if(dipStr == "ah-ao") return app_path+"/diphone/ah-ao.wav";  
	 else if(dipStr == "ah-aw") return app_path+"/diphone/ah-aw.wav";  
	 else if(dipStr == "ah-ax") return app_path+"/diphone/ah-ax.wav";  
	 else if(dipStr == "ah-ay") return app_path+"/diphone/ah-ay.wav"; 
	 else if(dipStr == "ah-b") return app_path+"/diphone/ah-b.wav";   
	 else if(dipStr == "ah-ch") return app_path+"/diphone/ah-ch.wav"; 
	 else if(dipStr == "ah-d") return app_path+"/diphone/ah-d.wav"; 
	 else if(dipStr == "ah-dh") return app_path+"/diphone/ah-dh.wav"; 
	 else if(dipStr == "ah-eh") return app_path+"/diphone/ah-eh.wav"; 
	 else if(dipStr == "ah-er") return app_path+"/diphone/ah-er.wav"; 
	 else if(dipStr == "ah-ey") return app_path+"/diphone/ah-ey.wav"; 
	 else if(dipStr == "ah-f") return app_path+"/diphone/ah-f.wav";  
	 else if(dipStr == "ah-g") return app_path+"/diphone/ah-g.wav"; 
	 else if(dipStr == "ah-hh") return app_path+"/diphone/ah-hh.wav"; 
	 else if(dipStr == "ah-ih") return app_path+"/diphone/ah-ih.wav"; 
	 else if(dipStr == "ah-iy") return app_path+"/diphone/ah-iy.wav"; 
	 else if(dipStr == "ah-jh") return app_path+"/diphone/ah-jh.wav"; 
	 else if(dipStr == "ah-k") return app_path+"/diphone/ah-k.wav"; 
	 else if(dipStr == "ah-l") return app_path+"/diphone/ah-l.wav"; 
	 else if(dipStr == "ah-m") return app_path+"/diphone/ah-m.wav"; 
	 else if(dipStr == "ah-n") return app_path+"/diphone/ah-n.wav"; 
	 else if(dipStr == "ah-ng") return app_path+"/diphone/ah-ng.wav"; 
	 else if(dipStr == "ah-ow") return app_path+"/diphone/ah-aow.wav"; 
	 else if(dipStr == "ah-oy") return app_path+"/diphone/ah-oy.wav"; 
	 else if(dipStr == "ah-p") return app_path+"/diphone/ah-p.wav"; 
	 else if(dipStr == "ah-pau") return app_path+"/diphone/ah-pau.wav"; 
	 else if(dipStr == "ah-r") return app_path+"/diphone/ah-r.wav"; 
	 else if(dipStr == "ah-s") return app_path+"/diphone/ah-s.wav"; 
	 else if(dipStr == "ah-sh") return app_path+"/diphone/ah-sh.wav"; 
	 else if(dipStr == "ah-t") return app_path+"/diphone/ah-t.wav"; 
	 else if(dipStr == "ah-th") return app_path+"/diphone/ah-th.wav"; 
	 else if(dipStr == "ah-uh") return app_path+"/diphone/ah-uh.wav"; 
	 else if(dipStr == "ah-uw") return app_path+"/diphone/ah-uw.wav"; 
	 else if(dipStr == "ah-v") return app_path+"/diphone/ah-v.wav"; 
	 else if(dipStr == "ah-w") return app_path+"/diphone/ah-w.wav"; 
	 else if(dipStr == "ah-y") return app_path+"/diphone/ah-y.wav"; 
	 else if(dipStr == "ah-z") return app_path+"/diphone/ah-z.wav"; 
	 else if(dipStr == "ah-zh") return app_path+"/diphone/ah-zh.wav";       
 
 // ao diphones
	 else if(dipStr == "ao-aa") return app_path+"/diphone/ao-aa.wav";   
	 else if(dipStr == "ao-ae") return app_path+"/diphone/ao-ae.wav"; 
	 else if(dipStr == "ao-ah") return app_path+"/diphone/ao-ah.wav"; 
	 else if(dipStr == "ao-ao") return app_path+"/diphone/ao-ao.wav";  
	 else if(dipStr == "ao-aw") return app_path+"/diphone/ao-aw.wav";  
	 else if(dipStr == "ao-ax") return app_path+"/diphone/ao-ax.wav";  
	 else if(dipStr == "ao-ay") return app_path+"/diphone/ao-ay.wav"; 
	 else if(dipStr == "ao-b") return app_path+"/diphone/ao-b.wav";   
	 else if(dipStr == "ao-ch") return app_path+"/diphone/ao-ch.wav"; 
	 else if(dipStr == "ao-d") return app_path+"/diphone/ao-d.wav"; 
	 else if(dipStr == "ao-dh") return app_path+"/diphone/ao-dh.wav"; 
	 else if(dipStr == "ao-eh") return app_path+"/diphone/ao-eh.wav"; 
	 else if(dipStr == "ao-er") return app_path+"/diphone/ao-er.wav"; 
	 else if(dipStr == "ao-ey") return app_path+"/diphone/ao-ey.wav"; 
	 else if(dipStr == "ao-f") return app_path+"/diphone/ao-f.wav";  
	 else if(dipStr == "ao-g") return app_path+"/diphone/ao-g.wav"; 
	 else if(dipStr == "ao-hh") return app_path+"/diphone/ao-hh.wav"; 
	 else if(dipStr == "ao-ih") return app_path+"/diphone/ao-ih.wav"; 
	 else if(dipStr == "ao-iy") return app_path+"/diphone/ao-iy.wav"; 
	 else if(dipStr == "ao-jh") return app_path+"/diphone/ao-jh.wav"; 
	 else if(dipStr == "ao-k") return app_path+"/diphone/ao-k.wav"; 
	 else if(dipStr == "ao-l") return app_path+"/diphone/ao-l.wav"; 
	 else if(dipStr == "ao-m") return app_path+"/diphone/ao-m.wav"; 
	 else if(dipStr == "ao-n") return app_path+"/diphone/ao-n.wav"; 
	 else if(dipStr == "ao-ng") return app_path+"/diphone/ao-ng.wav"; 
	 else if(dipStr == "ao-ow") return app_path+"/diphone/ao-ow.wav"; 
	 else if(dipStr == "ao-oy") return app_path+"/diphone/ao-oy.wav"; 
	 else if(dipStr == "ao-p") return app_path+"/diphone/ao-p.wav"; 
	 else if(dipStr == "ao-pau") return app_path+"/diphone/ao-pau.wav"; 
	 else if(dipStr == "ao-r") return app_path+"/diphone/ao-r.wav"; 
	 else if(dipStr == "ao-s") return app_path+"/diphone/ao-s.wav"; 
	 else if(dipStr == "ao-sh") return app_path+"/diphone/ao-sh.wav"; 
	 else if(dipStr == "ao-t") return app_path+"/diphone/ao-t.wav"; 
	 else if(dipStr == "ao-th") return app_path+"/diphone/ao-th.wav"; 
	 else if(dipStr == "ao-uh") return app_path+"/diphone/ao-uh.wav"; 
	 else if(dipStr == "ao-uw") return app_path+"/diphone/ao-uw.wav"; 
	 else if(dipStr == "ao-v") return app_path+"/diphone/ao-v.wav"; 
	 else if(dipStr == "ao-w") return app_path+"/diphone/ao-w.wav"; 
	 else if(dipStr == "ao-y") return app_path+"/diphone/ao-y.wav"; 
	 else if(dipStr == "ao-z") return app_path+"/diphone/ao-z.wav"; 
	 else if(dipStr == "ao-zh") return app_path+"/diphone/ao-zh.wav";  
	 
// aw diphones
	else if (dipStr == "aw-aa") return app_path+"/diphone/aw-aa.wav";  
	else if (dipStr == "aw-ae") return app_path+"/diphone/aw-ae.wav"; 
	else if (dipStr == "aw-ah") return app_path+"/diphone/aw-ah.wav";
	else if (dipStr == "aw-ao") return app_path+"/diphone/aw-ao.wav"; 
	else if (dipStr == "aw-aw") return app_path+"/diphone/aw-aw.wav"; 
	else if (dipStr == "aw-ax") return app_path+"/diphone/aw-ax.wav"; 
	else if (dipStr == "aw-ay") return app_path+"/diphone/aw-ay.wav";
	else if (dipStr == "aw-b") return app_path+"/diphone/aw-b.wav";  
	else if (dipStr == "aw-ch") return app_path+"/diphone/aw-ch.wav"; 
	else if (dipStr == "aw-d") return app_path+"/diphone/aw-d.wav";
	else if (dipStr == "aw-dh") return app_path+"/diphone/aw-dh.wav";
	else if (dipStr == "aw-eh") return app_path+"/diphone/aw-eh.wav";
	else if (dipStr == "aw-er") return app_path+"/diphone/aw-er.wav";
	else if (dipStr == "aw-ey") return app_path+"/diphone/aw-ey.wav";
	else if (dipStr == "aw-f") return app_path+"/diphone/aw-f.wav"; 
	else if (dipStr == "aw-g") return app_path+"/diphone/aw-g.wav";
	else if (dipStr == "aw-hh") return app_path+"/diphone/aw-hh.wav";
	else if (dipStr == "aw-ih") return app_path+"/diphone/aw-ih.wav";
	else if (dipStr == "aw-iy") return app_path+"/diphone/aw-iy.wav";
	else if (dipStr == "aw-jh") return app_path+"/diphone/aw-jh.wav";
	else if (dipStr == "aw-k") return app_path+"/diphone/aw-k.wav";
	else if (dipStr == "aw-l") return app_path+"/diphone/aw-l.wav";
	else if (dipStr == "aw-m") return app_path+"/diphone/aw-m.wav";
	else if (dipStr == "aw-n") return app_path+"/diphone/aw-n.wav";
	else if (dipStr == "aw-ng") return app_path+"/diphone/aw-ng.wav";
	else if (dipStr == "aw-ow") return app_path+"/diphone/aw-ow.wav";
	else if (dipStr == "aw-oy") return app_path+"/diphone/aw-oy.wav";
	else if (dipStr == "aw-p") return app_path+"/diphone/aw-p.wav";
	else if (dipStr == "aw-pau") return app_path+"/diphone/aw-pau.wav";
	else if (dipStr == "aw-r") return app_path+"/diphone/aw-r.wav";
	else if (dipStr == "aw-s") return app_path+"/diphone/aw-s.wav";
	else if (dipStr == "aw-sh") return app_path+"/diphone/aw-sh.wav";
	else if (dipStr == "aw-t") return app_path+"/diphone/aw-t.wav";
	else if (dipStr == "aw-th") return app_path+"/diphone/aw-th.wav";
	else if (dipStr == "aw-uh") return app_path+"/diphone/aw-uh.wav";
	else if (dipStr == "aw-uw") return app_path+"/diphone/aw-uw.wav";
	else if (dipStr == "aw-v") return app_path+"/diphone/aw-v.wav";
	else if (dipStr == "aw-w") return app_path+"/diphone/aw-w.wav";
	else if (dipStr == "aw-y") return app_path+"/diphone/aw-y.wav";
	else if (dipStr == "aw-z") return app_path+"/diphone/aw-z.wav";
	else if (dipStr == "aw-zh") return app_path+"/diphone/aw-zh.wav";         

// ax diphones
	else if(dipStr == "ax-aa") return app_path+"/diphone/ax-aa.wav";  
	else if(dipStr == "ax-ae") return app_path+"/diphone/ax-ae.wav"; 
	else if(dipStr == "ax-ah") return app_path+"/diphone/ax-ah.wav"; 
	else if(dipStr == "ax-ao") return app_path+"/diphone/ax-ao.wav";  
	else if(dipStr == "ax-aw") return app_path+"/diphone/ax-aw.wav";  
	else if(dipStr == "ax-ax") return app_path+"/diphone/ax-ax.wav"; 
	else if(dipStr == "ax-ay") return app_path+"/diphone/ax-ay.wav"; 
	else if(dipStr == "ax-b") return app_path+"/diphone/ax-b.wav";  
	else if(dipStr == "ax-ch") return app_path+"/diphone/ax-ch.wav";  
	else if(dipStr == "ax-d") return app_path+"/diphone/ax-d.wav"; 
	else if(dipStr == "ax-dh") return app_path+"/diphone/ax-dh.wav"; 
	else if(dipStr == "ax-eh") return app_path+"/diphone/ax-eh.wav"; 
	else if(dipStr == "ax-er") return app_path+"/diphone/ax-er.wav"; 
	else if(dipStr == "ax-ey") return app_path+"/diphone/ax-ey.wav"; 
	else if(dipStr == "ax-f") return app_path+"/diphone/ax-f.wav"; 
	else if(dipStr == "ax-g") return app_path+"/diphone/ax-g.wav"; 
	else if(dipStr == "ax-hh") return app_path+"/diphone/ax-hh.wav"; 
	else if(dipStr == "ax-ih") return app_path+"/diphone/ax-ih.wav"; 
	else if(dipStr == "ax-iy") return app_path+"/diphone/ax-iy.wav"; 
	else if(dipStr == "ax-jh") return app_path+"/diphone/ax-jh.wav"; 
	else if(dipStr == "ax-k") return app_path+"/diphone/ax-k.wav"; 
	else if(dipStr == "ax-l") return app_path+"/diphone/ax-l.wav"; 
	else if(dipStr == "ax-m") return app_path+"/diphone/ax-m.wav"; 
	else if(dipStr == "ax-n") return app_path+"/diphone/ax-n.wav"; 
	else if(dipStr == "ax-ng") return app_path+"/diphone/ax-ng.wav"; 
	else if(dipStr == "ax-ow") return app_path+"/diphone/ax-ow.wav"; 
	else if(dipStr == "ax-oy") return app_path+"/diphone/ax-oy.wav"; 
	else if(dipStr == "ax-p") return app_path+"/diphone/ax-p.wav"; 
	else if(dipStr == "ax-pau") return app_path+"/diphone/ax-pau.wav"; 
	else if(dipStr == "ax-r") return app_path+"/diphone/ax-r.wav"; 
	else if(dipStr == "ax-s") return app_path+"/diphone/ax-s.wav"; 
	else if(dipStr == "ax-sh") return app_path+"/diphone/ax-sh.wav"; 
	else if(dipStr == "ax-t") return app_path+"/diphone/ax-t.wav"; 
	else if(dipStr == "ax-th") return app_path+"/diphone/ax-th.wav"; 
	else if(dipStr == "ax-uh") return app_path+"/diphone/ax-uh.wav"; 
	else if(dipStr == "ax-uw") return app_path+"/diphone/ax-uw.wav"; 
	else if(dipStr == "ax-v") return app_path+"/diphone/ax-v.wav"; 
	else if(dipStr == "ax-w") return app_path+"/diphone/ax-w.wav"; 
	else if(dipStr == "ax-y") return app_path+"/diphone/ax-y.wav"; 
	else if(dipStr == "ax-z") return app_path+"/diphone/ax-z.wav"; 
	else if(dipStr == "ax-zh") return app_path+"/diphone/ax-zh.wav";    
	
// ay diphones
	else if(dipStr == "ay-aa") return app_path+"/diphone/ay-aa.wav";  
	else if(dipStr == "ay-ae") return app_path+"/diphone/ay-ae.wav";
	else if(dipStr == "ay-ah") return app_path+"/diphone/ay-ah.wav";
	else if(dipStr == "ay-ao") return app_path+"/diphone/ay-ao.wav"; 
	else if(dipStr == "ay-aw") return app_path+"/diphone/ay-aw.wav"; 
	else if(dipStr == "ay-ax") return app_path+"/diphone/ay-ax.wav"; 
	else if(dipStr == "ay-ay") return app_path+"/diphone/ay-ay.wav";
	else if(dipStr == "ay-b") return app_path+"/diphone/ay-b.wav";
	else if(dipStr == "ay-ch") return app_path+"/diphone/ay-ch.wav"; 
	else if(dipStr == "ay-d") return app_path+"/diphone/ay-d.wav";
	else if(dipStr == "ay-dh") return app_path+"/diphone/ay-dh.wav";
	else if(dipStr == "ay-eh") return app_path+"/diphone/ay-eh.wav";
	else if(dipStr == "ay-er") return app_path+"/diphone/ay-er.wav";
	else if(dipStr == "ay-ey") return app_path+"/diphone/ay-ey.wav";
	else if(dipStr == "ay-f") return app_path+"/diphone/ay-f.wav"; 
	else if(dipStr == "ay-g") return app_path+"/diphone/ay-g.wav";
	else if(dipStr == "ay-hh") return app_path+"/diphone/ay-hh.wav";
	else if(dipStr == "ay-ih") return app_path+"/diphone/ay-ih.wav";
	else if(dipStr == "ay-iy") return app_path+"/diphone/ay-iy.wav";
	else if(dipStr == "ay-jh") return app_path+"/diphone/ay-jh.wav";
	else if(dipStr == "ay-k") return app_path+"/diphone/ay-k.wav";
	else if(dipStr == "ay-l") return app_path+"/diphone/ay-l.wav";
	else if(dipStr == "ay-m") return app_path+"/diphone/ay-m.wav";
	else if(dipStr == "ay-n") return app_path+"/diphone/ay-n.wav";
	else if(dipStr == "ay-ng") return app_path+"/diphone/ay-ng.wav";
	else if(dipStr == "ay-ow") return app_path+"/diphone/ay-ow.wav";
	else if(dipStr == "ay-oy") return app_path+"/diphone/ay-oy.wav";
	else if(dipStr == "ay-p") return app_path+"/diphone/ay-p.wav";
	else if(dipStr == "ay-pau") return app_path+"/diphone/ay-pau.wav";
	else if(dipStr == "ay-r") return app_path+"/diphone/ay-r.wav";
	else if(dipStr == "ay-s") return app_path+"/diphone/ay-s.wav";
	else if(dipStr == "ay-sh") return app_path+"/diphone/ay-sh.wav";
	else if(dipStr == "ay-t") return app_path+"/diphone/ay-t.wav";
	else if(dipStr == "ay-th") return app_path+"/diphone/ay-th.wav";
	else if(dipStr == "ay-uh") return app_path+"/diphone/ay-uh.wav";
	else if(dipStr == "ay-uw") return app_path+"/diphone/ay-uw.wav";
	else if(dipStr == "ay-v") return app_path+"/diphone/ay-v.wav";
	else if(dipStr == "ay-w") return app_path+"/diphone/ay-w.wav";
	else if(dipStr == "ay-y") return app_path+"/diphone/ay-y.wav";
	else if(dipStr == "ay-z") return app_path+"/diphone/ay-z.wav";
	else if(dipStr == "ay-zh") return app_path+"/diphone/ay-zh.wav";   
	
// b diphones
	else if(dipStr == "b-aa") return app_path+"/diphone/b-aa.wav";   
	else if(dipStr == "b-ae") return app_path+"/diphone/b-aae.wav";
	else if(dipStr == "b-ah") return app_path+"/diphone/b-ah.wav";
	else if(dipStr == "b-ao") return app_path+"/diphone/b-ao.wav"; 
	else if(dipStr == "b-aw") return app_path+"/diphone/b-aw.wav"; 
	else if(dipStr == "b-ax") return app_path+"/diphone/b-ax.wav"; 
	else if(dipStr == "b-ay") return app_path+"/diphone/b-ay.wav";
	else if(dipStr == "b-b") return app_path+"/diphone/b-b.wav";  
	else if(dipStr == "b-ch") return app_path+"/diphone/b-ch.wav"; 
	else if(dipStr == "b-d") return app_path+"/diphone/b-d.wav";
	else if(dipStr == "b-dh") return app_path+"/diphone/b-dh.wav";
	else if(dipStr == "b-eh") return app_path+"/diphone/b-eh.wav";
	else if(dipStr == "b-er") return app_path+"/diphone/b-er.wav";
	else if(dipStr == "b-ey") return app_path+"/diphone/b-ay.wav";
	else if(dipStr == "b-f") return app_path+"/diphone/b-f.wav";
	else if(dipStr == "b-g") return app_path+"/diphone/b-g.wav";
	else if(dipStr == "b-hh") return app_path+"/diphone/b-hh.wav";
	else if(dipStr == "b-ih") return app_path+"/diphone/b-ih.wav";
	else if(dipStr == "b-iy") return app_path+"/diphone/b-iy.wav";
	else if(dipStr == "b-jh") return app_path+"/diphone/b-jh.wav";
	else if(dipStr == "b-k") return app_path+"/diphone/b-k.wav";
	else if(dipStr == "b-l") return app_path+"/diphone/b-l.wav";
	else if(dipStr == "b-m") return app_path+"/diphone/b-m.wav";
	else if(dipStr == "b-n") return app_path+"/diphone/b-n.wav";
	else if(dipStr == "b-ow") return app_path+"/diphone/b-ow.wav";
	else if(dipStr == "b-oy") return app_path+"/diphone/b-oy.wav";
	else if(dipStr == "b-p") return app_path+"/diphone/b-p.wav";
	else if(dipStr == "b-pau") return app_path+"/diphone/b-pau.wav";
	else if(dipStr == "b-r") return app_path+"/diphone/b-r.wav";
	else if(dipStr == "b-s") return app_path+"/diphone/b-s.wav";
	else if(dipStr == "b-sh") return app_path+"/diphone/b-sh.wav";
	else if(dipStr == "b-t") return app_path+"/diphone/b-t.wav";
	else if(dipStr == "b-th") return app_path+"/diphone/b-th.wav";
	else if(dipStr == "b-uh") return app_path+"/diphone/b-uh.wav";
	else if(dipStr == "b-uw") return app_path+"/diphone/b-uw.wav";
	else if(dipStr == "b-v") return app_path+"/diphone/b-v.wav";
	else if(dipStr == "b-w") return app_path+"/diphone/b-w.wav";
	else if(dipStr == "b-y") return app_path+"/diphone/b-y.wav";
	else if(dipStr == "b-z") return app_path+"/diphone/b-z.wav";
	else if(dipStr == "b-zh") return app_path+"/diphone/b-zh.wav";  
	
// ch diphones
	else if(dipStr == "ch-aa") return app_path+"/diphone/ch-aa.wav";  
	else if(dipStr == "ch-ae") return app_path+"/diphone/ch-ae.wav";
	else if(dipStr == "ch-ah") return app_path+"/diphone/ch-ah.wav";
	else if(dipStr == "ch-ao") return app_path+"/diphone/ch-ao.wav"; 
	else if(dipStr == "ch-aw") return app_path+"/diphone/ch-aw.wav";
	else if(dipStr == "ch-ax") return app_path+"/diphone/ch-ax.wav"; 
	else if(dipStr == "ch-ay") return app_path+"/diphone/ch-ay.wav";
	else if(dipStr == "ch-b") return app_path+"/diphone/ch-b.wav";  
	else if(dipStr == "ch-ch") return app_path+"/diphone/ch-ch.wav"; 
	else if(dipStr == "ch-d") return app_path+"/diphone/ch-d.wav";
	else if(dipStr == "ch-dh") return app_path+"/diphone/ch-dh.wav";
	else if(dipStr == "ch-eh") return app_path+"/diphone/ch-eh.wav";
	else if(dipStr == "ch-er") return app_path+"/diphone/ch-er.wav";
	else if(dipStr == "ch-ey") return app_path+"/diphone/ch-ey.wav";
	else if(dipStr == "ch-f") return app_path+"/diphone/ch-f.wav"; 
	else if(dipStr == "ch-g") return app_path+"/diphone/ch-g.wav";
	else if(dipStr == "ch-hh") return app_path+"/diphone/ch-hh.wav";
	else if(dipStr == "ch-ih") return app_path+"/diphone/ch-ih.wav";
	else if(dipStr == "ch-iy") return app_path+"/diphone/ch-iy.wav";
	else if(dipStr == "ch-jh") return app_path+"/diphone/ch-jh.wav";
	else if(dipStr == "ch-k") return app_path+"/diphone/ch-k.wav";
	else if(dipStr == "ch-l") return app_path+"/diphone/ch-l.wav";
	else if(dipStr == "ch-m") return app_path+"/diphone/ch-m.wav";
	else if(dipStr == "ch-n") return app_path+"/diphone/ch-aa.wav";
	else if(dipStr == "ch-ow") return app_path+"/diphone/ch-ow.wav";
	else if(dipStr == "ch-oy") return app_path+"/diphone/ch-oy.wav";
	else if(dipStr == "ch-p") return app_path+"/diphone/ch-p.wav";
	else if(dipStr == "ch-pau") return app_path+"/diphone/ch-pau.wav";
	else if(dipStr == "ch-r") return app_path+"/diphone/ch-r.wav";
	else if(dipStr == "ch-s") return app_path+"/diphone/ch-s.wav";
	else if(dipStr == "ch-sh") return app_path+"/diphone/ch-sh.wav";
	else if(dipStr == "ch-t") return app_path+"/diphone/ch-t.wav";
	else if(dipStr == "ch-th") return app_path+"/diphone/ch-th.wav";
	else if(dipStr == "ch-uh") return app_path+"/diphone/ch-uh.wav";
	else if(dipStr == "ch-uw") return app_path+"/diphone/ch-uw.wav";
	else if(dipStr == "ch-v") return app_path+"/diphone/ch-v.wav";
	else if(dipStr == "ch-w") return app_path+"/diphone/ch-w.wav";
	else if(dipStr == "ch-y") return app_path+"/diphone/ch-y.wav";
	else if(dipStr == "ch-z") return app_path+"/diphone/ch-z.wav";
	else if(dipStr == "ch-zh") return app_path+"/diphone/ch-zh.wav";   
	
// d diphones
	else if(dipStr == "d-aa") return app_path+"/diphone/d-aa.wav"; 
	else if(dipStr == "d-ae") return app_path+"/diphone/d-ae.wav"; 
	else if(dipStr == "d-ah") return app_path+"/diphone/d-ah.wav"; 
	else if(dipStr == "d-ao") return app_path+"/diphone/d-ao.wav";  
	else if(dipStr == "d-aw") return app_path+"/diphone/d-aw.wav";  
	else if(dipStr == "d-ax") return app_path+"/diphone/d-ax.wav";  
	else if(dipStr == "d-ay") return app_path+"/diphone/d-ay.wav"; 
	else if(dipStr == "d-b") return app_path+"/diphone/d-b.wav";   
	else if(dipStr == "d-ch") return app_path+"/diphone/d-ch.wav";  
	else if(dipStr == "d-d") return app_path+"/diphone/d-d.wav"; 
	else if(dipStr == "d-dh") return app_path+"/diphone/d-dh.wav"; 
	else if(dipStr == "d-eh") return app_path+"/diphone/d-eh.wav"; 
	else if(dipStr == "d-er") return app_path+"/diphone/d-er.wav"; 
	else if(dipStr == "d-ey") return app_path+"/diphone/d-ey.wav"; 
	else if(dipStr == "d-f") return app_path+"/diphone/d-f.wav"; 
	else if(dipStr == "d-g") return app_path+"/diphone/d-g.wav"; 
	else if(dipStr == "d-hh") return app_path+"/diphone/d-hh.wav"; 
	else if(dipStr == "d-ih") return app_path+"/diphone/d-ih.wav"; 
	else if(dipStr == "d-iy") return app_path+"/diphone/d-iy.wav"; 
	else if(dipStr == "d-jh") return app_path+"/diphone/d-jh.wav"; 
	else if(dipStr == "d-k") return app_path+"/diphone/d-k.wav"; 
	else if(dipStr == "d-l") return app_path+"/diphone/d-l.wav"; 
	else if(dipStr == "d-m") return app_path+"/diphone/d-m.wav"; 
	else if(dipStr == "d-n") return app_path+"/diphone/d-n.wav"; 
	else if(dipStr == "d-ow") return app_path+"/diphone/d-ow.wav"; 
	else if(dipStr == "d-oy") return app_path+"/diphone/d-oy.wav"; 
	else if(dipStr == "d-p") return app_path+"/diphone/d-p.wav"; 
	else if(dipStr == "d-pau") return app_path+"/diphone/d-pau.wav"; 
	else if(dipStr == "d-r") return app_path+"/diphone/d-r.wav"; 
	else if(dipStr == "d-s") return app_path+"/diphone/d-s.wav"; 
	else if(dipStr == "d-sh") return app_path+"/diphone/d-sh.wav"; 
	else if(dipStr == "d-t") return app_path+"/diphone/d-t.wav"; 
	else if(dipStr == "d-th") return app_path+"/diphone/d-th.wav"; 
	else if(dipStr == "d-uh") return app_path+"/diphone/d-uh.wav"; 
	else if(dipStr == "d-uw") return app_path+"/diphone/d-uw.wav"; 
	else if(dipStr == "d-v") return app_path+"/diphone/d-v.wav"; 
	else if(dipStr == "d-w") return app_path+"/diphone/d-w.wav"; 
	else if(dipStr == "d-y") return app_path+"/diphone/d-y.wav"; 
	else if(dipStr == "d-z") return app_path+"/diphone/d-z.wav"; 
	else if(dipStr == "d-zh") return app_path+"/diphone/d-zh.wav";   	
	
// dh diphones
	else if(dipStr == "dh-aa") return app_path+"/diphone/dh-aa.wav";   
	else if(dipStr == "dh-ae") return app_path+"/diphone/dh-ae.wav"; 
	else if(dipStr == "dh-ah") return app_path+"/diphone/dh-ah.wav";
	else if(dipStr == "dh-ao") return app_path+"/diphone/dh-ao.wav"; 
	else if(dipStr == "dh-aw") return app_path+"/diphone/dh-aw.wav"; 
	else if(dipStr == "dh-ax") return app_path+"/diphone/dh-ax.wav"; 
	else if(dipStr == "dh-ay") return app_path+"/diphone/dh-ay.wav";
	else if(dipStr == "dh-b") return app_path+"/diphone/dh-b.wav";  
	else if(dipStr == "dh-ch") return app_path+"/diphone/dh-ch.wav";
	else if(dipStr == "dh-d") return app_path+"/diphone/dh-d.wav";
	else if(dipStr == "dh-dh") return app_path+"/diphone/dh-dh.wav";
	else if(dipStr == "dh-eh") return app_path+"/diphone/dh-eh.wav";
	else if(dipStr == "dh-er") return app_path+"/diphone/dh-er.wav";
	else if(dipStr == "dh-ey") return app_path+"/diphone/dh-ey.wav";
	else if(dipStr == "dh-f") return app_path+"/diphone/dh-f.wav"; 
	else if(dipStr == "dh-g") return app_path+"/diphone/dh-g.wav";
	else if(dipStr == "dh-hh") return app_path+"/diphone/dh-hh.wav";
	else if(dipStr == "dh-ih") return app_path+"/diphone/dh-ih.wav";
	else if(dipStr == "dh-iy") return app_path+"/diphone/dh-iy.wav";
	else if(dipStr == "dh-jh") return app_path+"/diphone/dh-jh.wav";
	else if(dipStr == "dh-k") return app_path+"/diphone/dh-k.wav";
	else if(dipStr == "dh-l") return app_path+"/diphone/dh-l.wav";
	else if(dipStr == "dh-m") return app_path+"/diphone/dh-m.wav";
	else if(dipStr == "dh-n") return app_path+"/diphone/dh-n.wav";
	else if(dipStr == "dh-ow") return app_path+"/diphone/dh-ow.wav";
	else if(dipStr == "dh-oy") return app_path+"/diphone/dh-oy.wav";
	else if(dipStr == "dh-p") return app_path+"/diphone/dh-p.wav";
	else if(dipStr == "dh-pau") return app_path+"/diphone/dh-pau.wav";
	else if(dipStr == "dh-r") return app_path+"/diphone/dh-r.wav";
	else if(dipStr == "dh-s") return app_path+"/diphone/dh-s.wav";
	else if(dipStr == "dh-sh") return app_path+"/diphone/dh-sh.wav";
	else if(dipStr == "dh-t") return app_path+"/diphone/dh-t.wav";
	else if(dipStr == "dh-th") return app_path+"/diphone/dh-th.wav";
	else if(dipStr == "dh-uh") return app_path+"/diphone/dh-uh.wav";
	else if(dipStr == "dh-uw") return app_path+"/diphone/dh-uw.wav";
	else if(dipStr == "dh-v") return app_path+"/diphone/dh-v.wav";
	else if(dipStr == "dh-w") return app_path+"/diphone/dh-w.wav";
	else if(dipStr == "dh-y") return app_path+"/diphone/dh-y.wav";
	else if(dipStr == "dh-z") return app_path+"/diphone/dh-z.wav";
	else if(dipStr == "dh-zh") return app_path+"/diphone/dh-zh.wav";   

// eh diphones
	else if(dipStr == "eh-aa") return app_path+"/diphone/eh-aa.wav";   
	else if(dipStr == "eh-ae") return app_path+"/diphone/eh-ae.wav"; 
	else if(dipStr == "eh-ah") return app_path+"/diphone/eh-ah.wav"; 
	else if(dipStr == "eh-ao") return app_path+"/diphone/eh-ao.wav"; 
	else if(dipStr == "eh-aw") return app_path+"/diphone/eh-aw.wav"; 
	else if(dipStr == "eh-ax") return app_path+"/diphone/eh-ax.wav";  
	else if(dipStr == "eh-ay") return app_path+"/diphone/eh-ay.wav"; 
	else if(dipStr == "eh-b") return app_path+"/diphone/eh-b.wav";   
	else if(dipStr == "eh-ch") return app_path+"/diphone/eh-ch.wav";  
	else if(dipStr == "eh-d") return app_path+"/diphone/eh-d.wav"; 
	else if(dipStr == "eh-dh") return app_path+"/diphone/eh-dh.wav"; 
	else if(dipStr == "eh-eh") return app_path+"/diphone/eh-eh.wav"; 
	else if(dipStr == "eh-er") return app_path+"/diphone/eh-er.wav"; 
	else if(dipStr == "eh-ey") return app_path+"/diphone/eh-ey.wav"; 
	else if(dipStr == "eh-f") return app_path+"/diphone/eh-f.wav";  
	else if(dipStr == "eh-g") return app_path+"/diphone/eh-g.wav"; 
	else if(dipStr == "eh-hh") return app_path+"/diphone/eh-hh.wav"; 
	else if(dipStr == "eh-ih") return app_path+"/diphone/eh-ih.wav"; 
	else if(dipStr == "eh-iy") return app_path+"/diphone/eh-iy.wav"; 
	else if(dipStr == "eh-jh") return app_path+"/diphone/eh-jh.wav"; 
	else if(dipStr == "eh-k") return app_path+"/diphone/eh-k.wav"; 
	else if(dipStr == "eh-l") return app_path+"/diphone/eh-l.wav"; 
	else if(dipStr == "eh-m") return app_path+"/diphone/eh-m.wav"; 
	else if(dipStr == "eh-n") return app_path+"/diphone/eh-n.wav"; 
	else if(dipStr == "eh-ng") return app_path+"/diphone/eh-ng.wav"; 
	else if(dipStr == "eh-ow") return app_path+"/diphone/eh-ow.wav"; 
	else if(dipStr == "eh-oy") return app_path+"/diphone/eh-oy.wav"; 
	else if(dipStr == "eh-p") return app_path+"/diphone/eh-p.wav"; 
	else if(dipStr == "eh-pau") return app_path+"/diphone/eh-pau.wav"; 
	else if(dipStr == "eh-r") return app_path+"/diphone/eh-r.wav"; 
	else if(dipStr == "eh-s") return app_path+"/diphone/eh-s.wav"; 
	else if(dipStr == "eh-sh") return app_path+"/diphone/eh-sh.wav"; 
	else if(dipStr == "eh-t") return app_path+"/diphone/eh-t.wav"; 
	else if(dipStr == "eh-th") return app_path+"/diphone/eh-th.wav"; 
	else if(dipStr == "eh-uh") return app_path+"/diphone/eh-uh.wav"; 
	else if(dipStr == "eh-uw") return app_path+"/diphone/eh-uw.wav"; 
	else if(dipStr == "eh-v") return app_path+"/diphone/eh-v.wav"; 
	else if(dipStr == "eh-w") return app_path+"/diphone/eh-w.wav"; 
	else if(dipStr == "eh-y") return app_path+"/diphone/eh-y.wav"; 
	else if(dipStr == "eh-z") return app_path+"/diphone/eh-z.wav"; 
	else if(dipStr == "eh-zh") return app_path+"/diphone/eh-zh.wav"; 
	
// er diphones
	else if(dipStr == "er-aa") return app_path+"/diphone/er-aa.wav";  
	else if(dipStr == "er-ae") return app_path+"/diphone/er-ae.wav";
	else if(dipStr == "er-ah") return app_path+"/diphone/er-ah.wav";
	else if(dipStr == "er-ao") return app_path+"/diphone/er-ao.wav"; 
	else if(dipStr == "er-aw") return app_path+"/diphone/er-aw.wav"; 
	else if(dipStr == "er-ax") return app_path+"/diphone/er-ax.wav"; 
	else if(dipStr == "er-ay") return app_path+"/diphone/er-ay.wav";
	else if(dipStr == "er-b") return app_path+"/diphone/er-b.wav";  
	else if(dipStr == "er-ch") return app_path+"/diphone/er-ch.wav";
	else if(dipStr == "er-d") return app_path+"/diphone/er-d.wav";
	else if(dipStr == "er-dh") return app_path+"/diphone/er-dh.wav";
	else if(dipStr == "er-eh") return app_path+"/diphone/er-eh.wav";
	else if(dipStr == "er-er") return app_path+"/diphone/er-er.wav";
	else if(dipStr == "er-ey") return app_path+"/diphone/er-ey.wav";
	else if(dipStr == "er-f") return app_path+"/diphone/er-f.wav"; 
	else if(dipStr == "er-g") return app_path+"/diphone/er-g.wav";
	else if(dipStr == "er-hh") return app_path+"/diphone/er-hh.wav";
	else if(dipStr == "er-ih") return app_path+"/diphone/er-ih.wav";
	else if(dipStr == "er-iy") return app_path+"/diphone/er-iy.wav";
	else if(dipStr == "er-jh") return app_path+"/diphone/er-jh.wav";
	else if(dipStr == "er-k") return app_path+"/diphone/er-k.wav";
	else if(dipStr == "er-l") return app_path+"/diphone/er-l.wav";
	else if(dipStr == "er-m") return app_path+"/diphone/er-m.wav";
	else if(dipStr == "er-n") return app_path+"/diphone/er-n.wav";
	else if(dipStr == "er-ow") return app_path+"/diphone/er-ow.wav";
	else if(dipStr == "er-oy") return app_path+"/diphone/er-oy.wav";
	else if(dipStr == "er-p") return app_path+"/diphone/er-p.wav";
	else if(dipStr == "er-pau") return app_path+"/diphone/er-pau.wav";
	else if(dipStr == "er-r") return app_path+"/diphone/er-r.wav";
	else if(dipStr == "er-s") return app_path+"/diphone/er-s.wav";
	else if(dipStr == "er-sh") return app_path+"/diphone/er-sh.wav";
	else if(dipStr == "er-t") return app_path+"/diphone/er-t.wav";
	else if(dipStr == "er-th") return app_path+"/diphone/er-th.wav";
	else if(dipStr == "er-uh") return app_path+"/diphone/er-uh.wav";
	else if(dipStr == "er-uw") return app_path+"/diphone/er-uw.wav";
	else if(dipStr == "er-v") return app_path+"/diphone/er-v.wav";
	else if(dipStr == "er-w") return app_path+"/diphone/er-w.wav";
	else if(dipStr == "er-y") return app_path+"/diphone/er-y.wav";
	else if(dipStr == "er-z") return app_path+"/diphone/er-z.wav";
	else if(dipStr == "er-zh") return app_path+"/diphone/er-zh.wav";   	

// ey diphones
	else if(dipStr == "ey-aa") return app_path+"/diphone/ey-aa.wav";   
	else if(dipStr == "ey-ae") return app_path+"/diphone/ey-ae.wav"; 
	else if(dipStr == "ey-ah") return app_path+"/diphone/ey-ah.wav"; 
	else if(dipStr == "ey-ao") return app_path+"/diphone/ey-ao.wav"; 
	else if(dipStr == "ey-aw") return app_path+"/diphone/ey-aw.wav";  
	else if(dipStr == "ey-ax") return app_path+"/diphone/ey-ax.wav";  
	else if(dipStr == "ey-ay") return app_path+"/diphone/ey-ay.wav"; 
	else if(dipStr == "ey-b") return app_path+"/diphone/ey-b.wav";   
	else if(dipStr == "ey-ch") return app_path+"/diphone/ey-ch.wav";  
	else if(dipStr == "ey-d") return app_path+"/diphone/ey-d.wav"; 
	else if(dipStr == "ey-dh") return app_path+"/diphone/ey-dh.wav"; 
	else if(dipStr == "ey-eh") return app_path+"/diphone/ey-eh.wav"; 
	else if(dipStr == "ey-er") return app_path+"/diphone/ey-er.wav"; 
	else if(dipStr == "ey-ey") return app_path+"/diphone/ey-ey.wav"; 
	else if(dipStr == "ey-f") return app_path+"/diphone/ey-f.wav"; 
	else if(dipStr == "ey-g") return app_path+"/diphone/ey-g.wav"; 
	else if(dipStr == "ey-hh") return app_path+"/diphone/ey-hh.wav"; 
	else if(dipStr == "ey-ih") return app_path+"/diphone/ey-ih.wav"; 
	else if(dipStr == "ey-iy") return app_path+"/diphone/ey-iy.wav"; 
	else if(dipStr == "ey-jh") return app_path+"/diphone/ey-jh.wav"; 
	else if(dipStr == "ey-k") return app_path+"/diphone/ey-k.wav"; 
	else if(dipStr == "ey-l") return app_path+"/diphone/ey-l.wav"; 
	else if(dipStr == "ey-m") return app_path+"/diphone/ey-m.wav"; 
	else if(dipStr == "ey-n") return app_path+"/diphone/ey-n.wav"; 
	else if(dipStr == "ey-ng") return app_path+"/diphone/ey-ng.wav"; 
	else if(dipStr == "ey-ow") return app_path+"/diphone/ey-ow.wav"; 
	else if(dipStr == "ey-oy") return app_path+"/diphone/ey-oy.wav"; 
	else if(dipStr == "ey-p") return app_path+"/diphone/ey-p.wav"; 
	else if(dipStr == "ey-pau") return app_path+"/diphone/ey-pau.wav"; 
	else if(dipStr == "ey-r") return app_path+"/diphone/ey-r.wav"; 
	else if(dipStr == "ey-s") return app_path+"/diphone/ey-s.wav"; 
	else if(dipStr == "ey-sh") return app_path+"/diphone/ey-sh.wav"; 
	else if(dipStr == "ey-t") return app_path+"/diphone/ey-t.wav"; 
	else if(dipStr == "ey-th") return app_path+"/diphone/ey-th.wav"; 
	else if(dipStr == "ey-uh") return app_path+"/diphone/ey-uh.wav"; 
	else if(dipStr == "ey-uw") return app_path+"/diphone/ey-uw.wav"; 
	else if(dipStr == "ey-v") return app_path+"/diphone/ey-v.wav"; 
	else if(dipStr == "ey-w") return app_path+"/diphone/ey-w.wav"; 
	else if(dipStr == "ey-y") return app_path+"/diphone/ey-y.wav"; 
	else if(dipStr == "ey-z") return app_path+"/diphone/ey-z.wav"; 
	else if(dipStr == "ey-zh") return app_path+"/diphone/ey-zh.wav";    	
	
	// f diphones
	else if(dipStr == "f-aa") return app_path+"/diphone/f-aa.wav"; 
	else if(dipStr == "f-ae") return app_path+"/diphone/f-ae.wav"; 
	else if(dipStr == "f-ah") return app_path+"/diphone/f-ah.wav"; 
	else if(dipStr == "f-ao") return app_path+"/diphone/f-ao.wav";  
	else if(dipStr == "f-aw") return app_path+"/diphone/f-aw.wav";  
	else if(dipStr == "f-ax") return app_path+"/diphone/f-ax.wav";  
	else if(dipStr == "f-ay") return app_path+"/diphone/f-ay.wav"; 
	else if(dipStr == "f-b") return app_path+"/diphone/f-b.wav";   
	else if(dipStr == "f-ch") return app_path+"/diphone/f-ch.wav";  
	else if(dipStr == "f-d") return app_path+"/diphone/f-d.wav"; 
	else if(dipStr == "f-dh") return app_path+"/diphone/f-dh.wav"; 
	else if(dipStr == "f-eh") return app_path+"/diphone/f-eh.wav"; 
	else if(dipStr == "f-er") return app_path+"/diphone/f-er.wav"; 
	else if(dipStr == "f-ey") return app_path+"/diphone/f-ey.wav"; 
	else if(dipStr == "f-f") return app_path+"/diphone/f-f.wav";  
	else if(dipStr == "f-g") return app_path+"/diphone/f-g.wav"; 
	else if(dipStr == "f-hh") return app_path+"/diphone/f-hh.wav"; 
	else if(dipStr == "f-ih") return app_path+"/diphone/f-ih.wav"; 
	else if(dipStr == "f-iy") return app_path+"/diphone/f-iy.wav"; 
	else if(dipStr == "f-jh") return app_path+"/diphone/f-jh.wav"; 
	else if(dipStr == "f-k") return app_path+"/diphone/f-k.wav"; 
	else if(dipStr == "f-l") return app_path+"/diphone/f-l.wav"; 
	else if(dipStr == "f-m") return app_path+"/diphone/f-m.wav"; 
	else if(dipStr == "f-n") return app_path+"/diphone/f-n.wav"; 
	else if(dipStr == "f-ow") return app_path+"/diphone/f-ow.wav"; 
	else if(dipStr == "f-oy") return app_path+"/diphone/f-oy.wav"; 
	else if(dipStr == "f-p") return app_path+"/diphone/f-p.wav"; 
	else if(dipStr == "f-pau") return app_path+"/diphone/f-pau.wav"; 
	else if(dipStr == "f-r") return app_path+"/diphone/f-r.wav"; 
	else if(dipStr == "f-s") return app_path+"/diphone/f-s.wav"; 
	else if(dipStr == "f-sh") return app_path+"/diphone/f-sh.wav"; 
	else if(dipStr == "f-t") return app_path+"/diphone/f-t.wav"; 
	else if(dipStr == "f-th") return app_path+"/diphone/f-th.wav"; 
	else if(dipStr == "f-uh") return app_path+"/diphone/f-uh.wav"; 
	else if(dipStr == "f-uw") return app_path+"/diphone/f-uw.wav"; 
	else if(dipStr == "f-v") return app_path+"/diphone/f-v.wav"; 
	else if(dipStr == "f-w") return app_path+"/diphone/f-w.wav"; 
	else if(dipStr == "f-y") return app_path+"/diphone/f-y.wav"; 
	else if(dipStr == "f-z") return app_path+"/diphone/f-z.wav"; 
	else if(dipStr == "f-zh") return app_path+"/diphone/f-zh.wav";    	
	
// g diphones
	else if(dipStr == "g-aa") return app_path+"/diphone/g-aa.wav";   
	else if(dipStr == "g-ae") return app_path+"/diphone/g-ae.wav";
	else if(dipStr == "g-ah") return app_path+"/diphone/g-ah.wav";
	else if(dipStr == "g-ao") return app_path+"/diphone/g-ao.wav"; 
	else if(dipStr == "g-aw") return app_path+"/diphone/g-aw.wav";
	else if(dipStr == "g-ax") return app_path+"/diphone/g-ax.wav";
	else if(dipStr == "g-ay") return app_path+"/diphone/g-ay.wav";
	else if(dipStr == "g-b") return app_path+"/diphone/g-b.wav";  
	else if(dipStr == "g-ch") return app_path+"/diphone/g-ch.wav";
	else if(dipStr == "g-d") return app_path+"/diphone/g-d.wav";
	else if(dipStr == "g-dh") return app_path+"/diphone/g-dh.wav";
	else if(dipStr == "g-eh") return app_path+"/diphone/g-eh.wav";
	else if(dipStr == "g-er") return app_path+"/diphone/g-er.wav";
	else if(dipStr == "g-ey") return app_path+"/diphone/g-ey.wav";
	else if(dipStr == "g-f") return app_path+"/diphone/g-f.wav"; 
	else if(dipStr == "g-g") return app_path+"/diphone/g-g.wav";
	else if(dipStr == "g-hh") return app_path+"/diphone/g-hh.wav";
	else if(dipStr == "g-ih") return app_path+"/diphone/g-ih.wav";
	else if(dipStr == "g-iy") return app_path+"/diphone/g-iy.wav";
	else if(dipStr == "g-jh") return app_path+"/diphone/g-jh.wav";
	else if(dipStr == "g-k") return app_path+"/diphone/g-k.wav";
	else if(dipStr == "g-l") return app_path+"/diphone/g-l.wav";
	else if(dipStr == "g-m") return app_path+"/diphone/g-m.wav";
	else if(dipStr == "g-n") return app_path+"/diphone/g-n.wav";
	else if(dipStr == "g-ow") return app_path+"/diphone/g-ow.wav";
	else if(dipStr == "g-oy") return app_path+"/diphone/g-oy.wav";
	else if(dipStr == "g-p") return app_path+"/diphone/g-p.wav";
	else if(dipStr == "g-pau") return app_path+"/diphone/g-pau.wav";
	else if(dipStr == "g-r") return app_path+"/diphone/g-r.wav";
	else if(dipStr == "g-s") return app_path+"/diphone/g-s.wav";
	else if(dipStr == "g-sh") return app_path+"/diphone/g-sh.wav";
	else if(dipStr == "g-t") return app_path+"/diphone/g-t.wav";
	else if(dipStr == "g-th") return app_path+"/diphone/g-th.wav";
	else if(dipStr == "g-uh") return app_path+"/diphone/g-uh.wav";
	else if(dipStr == "g-uw") return app_path+"/diphone/g-uw.wav";
	else if(dipStr == "g-v") return app_path+"/diphone/g-v.wav";
	else if(dipStr == "g-w") return app_path+"/diphone/g-w.wav";
	else if(dipStr == "g-y") return app_path+"/diphone/g-y.wav";
	else if(dipStr == "g-z") return app_path+"/diphone/g-z.wav";
	else if(dipStr == "g-zh") return app_path+"/diphone/g-zh.wav";   

// h diphones
	else if(dipStr == "hh-aa") return app_path+"/diphone/hh-aa.wav";  
	else if(dipStr == "hh-ae") return app_path+"/diphone/hh-ae.wav"; 
	else if(dipStr == "hh-ah") return app_path+"/diphone/hh-ah.wav"; 
	else if(dipStr == "hh-ao") return app_path+"/diphone/hh-ao.wav";  
	else if(dipStr == "hh-aw") return app_path+"/diphone/hh-aw.wav";  
	else if(dipStr == "hh-ax") return app_path+"/diphone/hh-ax.wav";  
	else if(dipStr == "hh-ay") return app_path+"/diphone/hh-ay.wav"; 
	else if(dipStr == "hh-eh") return app_path+"/diphone/hh-eh.wav"; 
	else if(dipStr == "hh-ih") return app_path+"/diphone/hh-ih.wav"; 
	else if(dipStr == "hh-iy") return app_path+"/diphone/hh-iy.wav"; 
	else if(dipStr == "hh-ow") return app_path+"/diphone/hh-ow.wav"; 
	else if(dipStr == "hh-oy") return app_path+"/diphone/hh-oy.wav"; 
	else if(dipStr == "hh-uh") return app_path+"/diphone/hh-uh.wav"; 
	else if(dipStr == "hh-uw") return app_path+"/diphone/hh-uw.wav"; 
 
 // ih diphones
	 else if(dipStr == "ih-aa") return app_path+"/diphone/ih-aa.wav";   
	 else if(dipStr == "ih-ae") return app_path+"/diphone/ih-ae.wav"; 
	 else if(dipStr == "ih-ah") return app_path+"/diphone/ih-ah.wav"; 
	 else if(dipStr == "ih-ao") return app_path+"/diphone/ih-ao.wav";  
	 else if(dipStr == "ih-aw") return app_path+"/diphone/ih-aw.wav";  
	 else if(dipStr == "ih-ax") return app_path+"/diphone/ih-ax.wav";  
	 else if(dipStr == "ih-ay") return app_path+"/diphone/ih-ay.wav"; 
	 else if(dipStr == "ih-b") return app_path+"/diphone/ih-b.wav";   
	 else if(dipStr == "ih-ch") return app_path+"/diphone/ih-ch.wav";  
	 else if(dipStr == "ih-d") return app_path+"/diphone/ih-d.wav"; 
	 else if(dipStr == "ih-dh") return app_path+"/diphone/ih-dh.wav"; 
	 else if(dipStr == "ih-eh") return app_path+"/diphone/ih-eh.wav"; 
	 else if(dipStr == "ih-er") return app_path+"/diphone/ih-er.wav"; 
	 else if(dipStr == "ih-ey") return app_path+"/diphone/ih-ey.wav"; 
	 else if(dipStr == "ih-f") return app_path+"/diphone/ih-f.wav";  
	 else if(dipStr == "ih-g") return app_path+"/diphone/ih-g.wav"; 
	 else if(dipStr == "ih-hh") return app_path+"/diphone/ih-hh.wav"; 
	 else if(dipStr == "ih-ih") return app_path+"/diphone/ih-ih.wav"; 
	 else if(dipStr == "ih-iy") return app_path+"/diphone/ih-iy.wav"; 
	 else if(dipStr == "ih-jh") return app_path+"/diphone/ih-jh.wav"; 
	 else if(dipStr == "ih-k") return app_path+"/diphone/ih-k.wav"; 
	 else if(dipStr == "ih-l") return app_path+"/diphone/ih-l.wav"; 
	 else if(dipStr == "ih-m") return app_path+"/diphone/ih-m.wav"; 
	 else if(dipStr == "ih-n") return app_path+"/diphone/ih-n.wav"; 
	 else if(dipStr == "ih-ng") return app_path+"/diphone/ih-ng.wav"; 
	 else if(dipStr == "ih-ow") return app_path+"/diphone/ih-ow.wav"; 
	 else if(dipStr == "ih-oy") return app_path+"/diphone/ih-oy.wav"; 
	 else if(dipStr == "ih-p") return app_path+"/diphone/ih-p.wav"; 
	 else if(dipStr == "ih-pau") return app_path+"/diphone/ih-pau.wav"; 
	 else if(dipStr == "ih-r") return app_path+"/diphone/ih-r.wav"; 
	 else if(dipStr == "ih-s") return app_path+"/diphone/ih-s.wav"; 
	 else if(dipStr == "ih-sh") return app_path+"/diphone/ih-sh.wav"; 
	 else if(dipStr == "ih-t") return app_path+"/diphone/ih-t.wav"; 
	 else if(dipStr == "ih-th") return app_path+"/diphone/ih-th.wav"; 
	 else if(dipStr == "ih-uh") return app_path+"/diphone/ih-uh.wav"; 
	 else if(dipStr == "ih-uw") return app_path+"/diphone/ih-uw.wav"; 
	 else if(dipStr == "ih-v") return app_path+"/diphone/ih-v.wav"; 
	 else if(dipStr == "ih-w") return app_path+"/diphone/ih-w.wav"; 
	 else if(dipStr == "ih-y") return app_path+"/diphone/ih-y.wav"; 
	 else if(dipStr == "ih-z") return app_path+"/diphone/ih-z.wav"; 
	 else if(dipStr == "ih-zh") return app_path+"/diphone/ih-z.wav";    
	 
// iy diphones
	else if(dipStr =="iy-aa") return app_path+"/diphone/iy-aa.wav";   
	else if(dipStr =="iy-ae") return app_path+"/diphone/iy-ae.wav";
	else if(dipStr =="iy-ah") return app_path+"/diphone/iy-ah.wav";
	else if(dipStr =="iy-ao") return app_path+"/diphone/iy-ao.wav"; 
	else if(dipStr =="iy-aw") return app_path+"/diphone/iy-aw.wav"; 
	else if(dipStr =="iy-ax") return app_path+"/diphone/iy-ax.wav"; 
	else if(dipStr =="iy-ay") return app_path+"/diphone/iy-ay.wav";
	else if(dipStr =="iy-b") return app_path+"/diphone/iy-b.wav";  
	else if(dipStr =="iy-ch") return app_path+"/diphone/iy-ch.wav"; 
	else if(dipStr =="iy-d") return app_path+"/diphone/iy-d.wav";
	else if(dipStr =="iy-dh") return app_path+"/diphone/iy-dh.wav";
	else if(dipStr =="iy-eh") return app_path+"/diphone/iy-eh.wav";
	else if(dipStr =="iy-er") return app_path+"/diphone/iy-er.wav";
	else if(dipStr =="iy-ey") return app_path+"/diphone/iy-ey.wav";
	else if(dipStr =="iy-f") return app_path+"/diphone/iy-f.wav";
	else if(dipStr =="iy-g") return app_path+"/diphone/iy-g.wav";
	else if(dipStr =="iy-hh") return app_path+"/diphone/iy-hh.wav";
	else if(dipStr =="iy-ih") return app_path+"/diphone/iy-ih.wav";
	else if(dipStr =="iy-iy") return app_path+"/diphone/iy-iy.wav";
	else if(dipStr =="iy-jh") return app_path+"/diphone/iy-jh.wav";
	else if(dipStr =="iy-k") return app_path+"/diphone/iy-k.wav";
	else if(dipStr =="iy-l") return app_path+"/diphone/iy-l.wav";
	else if(dipStr =="iy-m") return app_path+"/diphone/iy-m.wav";
	else if(dipStr =="iy-n") return app_path+"/diphone/iy-n.wav";
	else if(dipStr =="iy-ng") return app_path+"/diphone/iy-ng.wav";
	else if(dipStr =="iy-ow") return app_path+"/diphone/iy-ow.wav";
	else if(dipStr =="iy-oy") return app_path+"/diphone/iy-oy.wav";
	else if(dipStr =="iy-p") return app_path+"/diphone/iy-p.wav";
	else if(dipStr =="iy-pau") return app_path+"/diphone/iy-pau.wav";
	else if(dipStr =="iy-r") return app_path+"/diphone/iy-r.wav";
	else if(dipStr =="iy-s") return app_path+"/diphone/iy-s.wav";
	else if(dipStr =="iy-sh") return app_path+"/diphone/iy-sh.wav";
	else if(dipStr =="iy-t") return app_path+"/diphone/iy-t.wav";
	else if(dipStr =="iy-th") return app_path+"/diphone/iy-th.wav";
	else if(dipStr =="iy-uh") return app_path+"/diphone/iy-uh.wav";
	else if(dipStr =="iy-uw") return app_path+"/diphone/iy-uw.wav";
	else if(dipStr =="iy-v") return app_path+"/diphone/iy-v.wav";
	else if(dipStr =="iy-w") return app_path+"/diphone/iy-w.wav";
	else if(dipStr =="iy-y") return app_path+"/diphone/iy-y.wav";
	else if(dipStr =="iy-z") return app_path+"/diphone/iy-z.wav";
	else if(dipStr =="iy-zh") return app_path+"/diphone/iy-zh.wav";  
 
 // jh diphones
	 else if(dipStr == "jh-aa") return app_path+"/diphone/jh-aa.wav";  
	 else if(dipStr == "jh-ae") return app_path+"/diphone/jh-ae.wav";
	 else if(dipStr == "jh-ah") return app_path+"/diphone/jh-ah.wav";
	 else if(dipStr == "jh-ao") return app_path+"/diphone/jh-ao.wav"; 
	 else if(dipStr == "jh-aw") return app_path+"/diphone/jh-aw.wav"; 
	 else if(dipStr == "jh-ax") return app_path+"/diphone/jh-ax.wav"; 
	 else if(dipStr == "jh-ay") return app_path+"/diphone/jh-ay.wav";
	 else if(dipStr == "jh-b") return app_path+"/diphone/jh-b.wav";  
	 else if(dipStr == "jh-ch") return app_path+"/diphone/jh-ch.wav"; 
	 else if(dipStr == "jh-d") return app_path+"/diphone/jh-d.wav";
	 else if(dipStr == "jh-dh") return app_path+"/diphone/jh-dh.wav";
	 else if(dipStr == "jh-eh") return app_path+"/diphone/jh-eh.wav";
	 else if(dipStr == "jh-er") return app_path+"/diphone/jh-er.wav";
	 else if(dipStr == "jh-ey") return app_path+"/diphone/jh-ey.wav";
	 else if(dipStr == "jh-f") return app_path+"/diphone/jh-f.wav"; 
	 else if(dipStr == "jh-g") return app_path+"/diphone/jh-g.wav";
	 else if(dipStr == "jh-hh") return app_path+"/diphone/jh-hh.wav";
	 else if(dipStr == "jh-ih") return app_path+"/diphone/jh-ih.wav";
	 else if(dipStr == "jh-iy") return app_path+"/diphone/jh-iy.wav";
	 else if(dipStr == "jh-jh") return app_path+"/diphone/jh-jh.wav";
	 else if(dipStr == "jh-k") return app_path+"/diphone/jh-k.wav";
	 else if(dipStr == "jh-l") return app_path+"/diphone/jh-l.wav";
	 else if(dipStr == "jh-m") return app_path+"/diphone/jh-m.wav";
	 else if(dipStr == "jh-n") return app_path+"/diphone/jh-n.wav";
	 else if(dipStr == "jh-ow") return app_path+"/diphone/jh-ow.wav";
	 else if(dipStr == "jh-oy") return app_path+"/diphone/jh-oy.wav";
	 else if(dipStr == "jh-p") return app_path+"/diphone/jh-p.wav";
	 else if(dipStr == "jh-pau") return app_path+"/diphone/jh-pau.wav";
	 else if(dipStr == "jh-r") return app_path+"/diphone/jh-r.wav";
	 else if(dipStr == "jh-s") return app_path+"/diphone/jh-s.wav";
	 else if(dipStr == "jh-sh") return app_path+"/diphone/jh-sh.wav";
	 else if(dipStr == "jh-t") return app_path+"/diphone/jh-t.wav";
	 else if(dipStr == "jh-th") return app_path+"/diphone/jh-th.wav";
	 else if(dipStr == "jh-uh") return app_path+"/diphone/jh-uh.wav";
	 else if(dipStr == "jh-uw") return app_path+"/diphone/jh-uw.wav";
	 else if(dipStr == "jh-v") return app_path+"/diphone/jh-v.wav";
	 else if(dipStr == "jh-w") return app_path+"/diphone/jh-w.wav";
	 else if(dipStr == "jh-y") return app_path+"/diphone/jh-y.wav";
	 else if(dipStr == "jh-z") return app_path+"/diphone/jh-z.wav";
	 else if(dipStr == "jh-zh") return app_path+"/diphone/jh-zh.wav";  
 
// k diphones
	else if(dipStr == "k-aa") return app_path+"/diphone/k-aa.wav"; 
	else if(dipStr == "k-ae") return app_path+"/diphone/k-ae.wav"; 
	else if(dipStr == "k-ah") return app_path+"/diphone/k-ah.wav"; 
	else if(dipStr == "k-ao") return app_path+"/diphone/k-ao.wav";  
	else if(dipStr == "k-aw") return app_path+"/diphone/k-aw.wav";  
	else if(dipStr == "k-ax") return app_path+"/diphone/k-ax.wav";  
	else if(dipStr == "k-ay") return app_path+"/diphone/k-ay.wav"; 
	else if(dipStr == "k-b") return app_path+"/diphone/k-b.wav";   
	else if(dipStr == "k-ch") return app_path+"/diphone/k-ch.wav";  
	else if(dipStr == "k-d") return app_path+"/diphone/k-d.wav"; 
	else if(dipStr == "k-dh") return app_path+"/diphone/k-dh.wav"; 
	else if(dipStr == "k-eh") return app_path+"/diphone/k-eh.wav"; 
	else if(dipStr == "k-er") return app_path+"/diphone/k-er.wav"; 
	else if(dipStr == "k-ey") return app_path+"/diphone/k-ey.wav"; 
	else if(dipStr == "k-f") return app_path+"/diphone/k-f.wav";  
	else if(dipStr == "k-g") return app_path+"/diphone/k-g.wav"; 
	else if(dipStr == "k-hh") return app_path+"/diphone/k-hh.wav"; 
	else if(dipStr == "k-ih") return app_path+"/diphone/k-ih.wav"; 
	else if(dipStr == "k-iy") return app_path+"/diphone/k-iy.wav"; 
	else if(dipStr == "k-jh") return app_path+"/diphone/k-jh.wav"; 
	else if(dipStr == "k-k") return app_path+"/diphone/k-k.wav"; 
	else if(dipStr == "k-l") return app_path+"/diphone/k-l.wav"; 
	else if(dipStr == "k-m") return app_path+"/diphone/k-m.wav"; 
	else if(dipStr == "k-n") return app_path+"/diphone/k-n.wav"; 
	else if(dipStr == "k-ow") return app_path+"/diphone/k-ow.wav"; 
	else if(dipStr == "k-oy") return app_path+"/diphone/k-oy.wav"; 
	else if(dipStr == "k-p") return app_path+"/diphone/k-p.wav"; 
	else if(dipStr == "k-pau") return app_path+"/diphone/k-pau.wav"; 
	else if(dipStr == "k-r") return app_path+"/diphone/k-r.wav"; 
	else if(dipStr == "k-s") return app_path+"/diphone/k-s.wav"; 
	else if(dipStr == "k-sh") return app_path+"/diphone/k-sh.wav"; 
	else if(dipStr == "k-t") return app_path+"/diphone/k-t.wav"; 
	else if(dipStr == "k-th") return app_path+"/diphone/k-th.wav"; 
	else if(dipStr == "k-uh") return app_path+"/diphone/k-uh.wav"; 
	else if(dipStr == "k-uw") return app_path+"/diphone/k-uw.wav"; 
	else if(dipStr == "k-v") return app_path+"/diphone/k-v.wav"; 
	else if(dipStr == "k-w") return app_path+"/diphone/k-w.wav"; 
	else if(dipStr == "k-y") return app_path+"/diphone/k-y.wav"; 
	else if(dipStr == "k-z") return app_path+"/diphone/k-z.wav"; 
	else if(dipStr == "k-zh") return app_path+"/diphone/k-zh.wav";   
 
 //l diphones
	 else if(dipStr == "l-aa") return app_path+"/diphone/l-aa.wav";   
	 else if(dipStr == "l-ae") return app_path+"/diphone/l-ae.wav"; 
	 else if(dipStr == "l-ah") return app_path+"/diphone/l-ah.wav"; 
	 else if(dipStr == "l-ao") return app_path+"/diphone/l-ao.wav";  
	 else if(dipStr == "l-aw") return app_path+"/diphone/l-aw.wav"; 
	 else if(dipStr == "l-ax") return app_path+"/diphone/l-ax.wav";  
	 else if(dipStr == "l-ay") return app_path+"/diphone/l-ay.wav"; 
	 else if(dipStr == "l-b") return app_path+"/diphone/l-b.wav";  
	 else if(dipStr == "l-ch") return app_path+"/diphone/l-ch.wav";  
	 else if(dipStr == "l-d") return app_path+"/diphone/l-d.wav"; 
	 else if(dipStr == "l-dh") return app_path+"/diphone/l-dh.wav"; 
	 else if(dipStr == "l-eh") return app_path+"/diphone/l-eh.wav"; 
	 else if(dipStr == "l-er") return app_path+"/diphone/l-er.wav"; 
	 else if(dipStr == "l-ey") return app_path+"/diphone/l-ey.wav"; 
	 else if(dipStr == "l-f") return app_path+"/diphone/l-f.wav";  
	 else if(dipStr == "l-g") return app_path+"/diphone/l-g.wav"; 
	 else if(dipStr == "l-hh") return app_path+"/diphone/l-hh.wav"; 
	 else if(dipStr == "l-ih") return app_path+"/diphone/l-ih.wav"; 
	 else if(dipStr == "l-iy") return app_path+"/diphone/l-iy.wav"; 
	 else if(dipStr == "l-jh") return app_path+"/diphone/l-jh.wav"; 
	 else if(dipStr == "l-k") return app_path+"/diphone/l-k.wav"; 
	 else if(dipStr == "l-l") return app_path+"/diphone/l-l.wav"; 
	 else if(dipStr == "l-m") return app_path+"/diphone/l-m.wav"; 
	 else if(dipStr == "l-n") return app_path+"/diphone/l-n.wav"; 
	 else if(dipStr == "l-ow") return app_path+"/diphone/l-ow.wav"; 
	 else if(dipStr == "l-oy") return app_path+"/diphone/l-oy.wav"; 
	 else if(dipStr == "l-p") return app_path+"/diphone/l-p.wav"; 
	 else if(dipStr == "l-pau") return app_path+"/diphone/l-pau.wav"; 
	 else if(dipStr == "l-r") return app_path+"/diphone/l-r.wav"; 
	 else if(dipStr == "l-s") return app_path+"/diphone/l-s.wav"; 
	 else if(dipStr == "l-sh") return app_path+"/diphone/l-sh.wav"; 
	 else if(dipStr == "l-t") return app_path+"/diphone/l-t.wav"; 
	 else if(dipStr == "l-th") return app_path+"/diphone/l-th.wav"; 
	 else if(dipStr == "l-uh") return app_path+"/diphone/l-uh.wav"; 
	 else if(dipStr == "l-uw") return app_path+"/diphone/l-uw.wav"; 
	 else if(dipStr == "l-v") return app_path+"/diphone/l-v.wav"; 
	 else if(dipStr == "l-w") return app_path+"/diphone/l-w.wav"; 
	 else if(dipStr == "l-y") return app_path+"/diphone/l-y.wav"; 
	 else if(dipStr == "l-z") return app_path+"/diphone/l-z.wav"; 
	 else if(dipStr == "l-zh") return app_path+"/diphone/l-zh.wav";    
	 
 //m diphones
	 else if(dipStr == "m-aa") return app_path+"/diphone/m-aa.wav";   
	 else if(dipStr == "m-ae") return app_path+"/diphone/m-ae.wav"; 
	 else if(dipStr == "m-ah") return app_path+"/diphone/m-ah.wav"; 
	 else if(dipStr == "m-ao") return app_path+"/diphone/m-ao.wav";  
	 else if(dipStr == "m-aw") return app_path+"/diphone/m-aw.wav";  
	 else if(dipStr == "m-ax") return app_path+"/diphone/m-ax.wav";  
	 else if(dipStr == "m-ay") return app_path+"/diphone/m-ay.wav"; 
	 else if(dipStr == "m-b") return app_path+"/diphone/m-b.wav";   
	 else if(dipStr == "m-ch") return app_path+"/diphone/m-ch.wav";  
	 else if(dipStr == "m-d") return app_path+"/diphone/m-d.wav"; 
	 else if(dipStr == "m-dh") return app_path+"/diphone/m-dh.wav"; 
	 else if(dipStr == "m-eh") return app_path+"/diphone/m-eh.wav"; 
	 else if(dipStr == "m-er") return app_path+"/diphone/m-er.wav"; 
	 else if(dipStr == "m-ey") return app_path+"/diphone/m-ey.wav"; 
	 else if(dipStr == "m-f") return app_path+"/diphone/m-f.wav";  
	 else if(dipStr == "m-g") return app_path+"/diphone/m-g.wav"; 
	 else if(dipStr == "m-hh") return app_path+"/diphone/m-hh.wav"; 
	 else if(dipStr == "m-ih") return app_path+"/diphone/m-ih.wav"; 
	 else if(dipStr == "m-iy") return app_path+"/diphone/m-iy.wav"; 
	 else if(dipStr == "m-jh") return app_path+"/diphone/m-jh.wav"; 
	 else if(dipStr == "m-k") return app_path+"/diphone/m-k.wav"; 
	 else if(dipStr == "m-l") return app_path+"/diphone/m-l.wav"; 
	 else if(dipStr == "m-m") return app_path+"/diphone/m-m.wav"; 
	 else if(dipStr == "m-n") return app_path+"/diphone/m-n.wav"; 
	 else if(dipStr == "m-ow") return app_path+"/diphone/m-ow.wav"; 
	 else if(dipStr == "m-oy") return app_path+"/diphone/m-oy.wav"; 
	 else if(dipStr == "m-p") return app_path+"/diphone/m-p.wav"; 
	 else if(dipStr == "m-pau") return app_path+"/diphone/m-pau.wav"; 
	 else if(dipStr == "m-r") return app_path+"/diphone/m-r.wav"; 
	 else if(dipStr == "m-s") return app_path+"/diphone/m-s.wav"; 
	 else if(dipStr == "m-sh") return app_path+"/diphone/m-sh.wav"; 
	 else if(dipStr == "m-t") return app_path+"/diphone/m-t.wav"; 
	 else if(dipStr == "m-th") return app_path+"/diphone/m-th.wav"; 
	 else if(dipStr == "m-uh") return app_path+"/diphone/m-uh.wav"; 
	 else if(dipStr == "m-uw") return app_path+"/diphone/m-uw.wav"; 
	 else if(dipStr == "m-v") return app_path+"/diphone/m-v.wav"; 
	 else if(dipStr == "m-w") return app_path+"/diphone/m-w.wav"; 
	 else if(dipStr == "m-y") return app_path+"/diphone/m-y.wav"; 
	 else if(dipStr == "m-z") return app_path+"/diphone/m-z.wav"; 
	 else if(dipStr == "m-zh") return app_path+"/diphone/m-zh.wav";    
 
//n diphones
	else if(dipStr =="n-aa") return app_path+"/diphone/n-aa.wav";  
	else if(dipStr =="n-ae") return app_path+"/diphone/n-ae.wav"; 
	else if(dipStr =="n-ah") return app_path+"/diphone/n-ah.wav"; 
	else if(dipStr =="n-ao") return app_path+"/diphone/n-ao.wav";  
	else if(dipStr =="n-aw") return app_path+"/diphone/n-aw.wav";  
	else if(dipStr =="n-ax") return app_path+"/diphone/n-ax.wav";  
	else if(dipStr =="n-ay") return app_path+"/diphone/n-ay.wav"; 
	else if(dipStr =="n-b") return app_path+"/diphone/n-b.wav";   
	else if(dipStr =="n-ch") return app_path+"/diphone/n-ch.wav";  
	else if(dipStr =="n-d") return app_path+"/diphone/n-d.wav"; 
	else if(dipStr =="n-dh") return app_path+"/diphone/n-dh.wav"; 
	else if(dipStr =="n-eh") return app_path+"/diphone/n-eh.wav"; 
	else if(dipStr =="n-er") return app_path+"/diphone/n-er.wav"; 
	else if(dipStr =="n-ey") return app_path+"/diphone/n-ey.wav"; 
	else if(dipStr =="n-f") return app_path+"/diphone/n-f.wav";  
	else if(dipStr =="n-g") return app_path+"/diphone/n-g.wav"; 
	else if(dipStr =="n-hh") return app_path+"/diphone/n-hh.wav"; 
	else if(dipStr =="n-ih") return app_path+"/diphone/n-ih.wav"; 
	else if(dipStr =="n-iy") return app_path+"/diphone/n-iy.wav"; 
	else if(dipStr =="n-jh") return app_path+"/diphone/n-jh.wav"; 
	else if(dipStr =="n-k") return app_path+"/diphone/n-k.wav"; 
	else if(dipStr =="n-l") return app_path+"/diphone/n-l.wav"; 
	else if(dipStr =="n-m") return app_path+"/diphone/n-m.wav"; 
	else if(dipStr =="n-n") return app_path+"/diphone/n-n.wav"; 
	else if(dipStr =="n-ow") return app_path+"/diphone/n-ow.wav"; 
	else if(dipStr =="n-oy") return app_path+"/diphone/n-oy.wav"; 
	else if(dipStr =="n-p") return app_path+"/diphone/n-p.wav"; 
	else if(dipStr =="n-pau") return app_path+"/diphone/n-pau.wav"; 
	else if(dipStr =="n-r") return app_path+"/diphone/n-r.wav"; 
	else if(dipStr =="n-s") return app_path+"/diphone/n-s.wav"; 
	else if(dipStr =="n-sh") return app_path+"/diphone/n-sh.wav"; 
	else if(dipStr =="n-t") return app_path+"/diphone/n-t.wav"; 
	else if(dipStr =="n-th") return app_path+"/diphone/n-th.wav"; 
	else if(dipStr =="n-uh") return app_path+"/diphone/n-uh.wav"; 
	else if(dipStr =="n-uw") return app_path+"/diphone/n-uw.wav"; 
	else if(dipStr =="n-v") return app_path+"/diphone/n-v.wav"; 
	else if(dipStr =="n-w") return app_path+"/diphone/n-w.wav"; 
	else if(dipStr =="n-y") return app_path+"/diphone/n-y.wav"; 
	else if(dipStr =="n-z") return app_path+"/diphone/n-z.wav"; 
	else if(dipStr =="n-zh") return app_path+"/diphone/n-zh.wav";    
 
 //ng diphones
	 else if(dipStr == "ng-aa") return app_path+"/diphone/ng-aa.wav";   
	 else if(dipStr == "ng-ae") return app_path+"/diphone/ng-ae.wav";
	 else if(dipStr == "ng-ah") return app_path+"/diphone/ng-ah.wav";
	 else if(dipStr == "ng-ao") return app_path+"/diphone/ng-ao.wav"; 
	 else if(dipStr == "ng-aw") return app_path+"/diphone/ng-aw.wav"; 
	 else if(dipStr == "ng-ax") return app_path+"/diphone/ng-ax.wav"; 
	 else if(dipStr == "ng-ay") return app_path+"/diphone/ng-ay.wav";
	 else if(dipStr == "ng-b") return app_path+"/diphone/ng-b.wav";  
	 else if(dipStr == "ng-ch") return app_path+"/diphone/ng-ch.wav"; 
	 else if(dipStr == "ng-d") return app_path+"/diphone/ng-d.wav";
	 else if(dipStr == "ng-dh") return app_path+"/diphone/ng-dh.wav";
	 else if(dipStr == "ng-eh") return app_path+"/diphone/ng-eh.wav";
	 else if(dipStr == "ng-er") return app_path+"/diphone/ng-er.wav";
	 else if(dipStr == "ng-ey") return app_path+"/diphone/ng-ey.wav";
	 else if(dipStr == "ng-f") return app_path+"/diphone/ng-f.wav";
	 else if(dipStr == "ng-g") return app_path+"/diphone/ng-g.wav";
	 else if(dipStr == "ng-hh") return app_path+"/diphone/ng-hh.wav";
	 else if(dipStr == "ng-ih") return app_path+"/diphone/ng-ih.wav";
	 else if(dipStr == "ng-iy") return app_path+"/diphone/ng-iy.wav";
	 else if(dipStr == "ng-jh") return app_path+"/diphone/ng-jh.wav";
	 else if(dipStr == "ng-k") return app_path+"/diphone/ng-k.wav";
	 else if(dipStr == "ng-l") return app_path+"/diphone/ng-l.wav";
	 else if(dipStr == "ng-m") return app_path+"/diphone/ng-m.wav";
	 else if(dipStr == "ng-n") return app_path+"/diphone/ng-n.wav";
	 else if(dipStr == "ng-ow") return app_path+"/diphone/ng-ow.wav";
	 else if(dipStr == "ng-oy") return app_path+"/diphone/ng-oy.wav";
	 else if(dipStr == "ng-p") return app_path+"/diphone/ng-p.wav";
	 else if(dipStr == "ng-pau") return app_path+"/diphone/ng-pau.wav";
	 else if(dipStr == "ng-r") return app_path+"/diphone/ng-r.wav";
	 else if(dipStr == "ng-s") return app_path+"/diphone/ng-s.wav";
	 else if(dipStr == "ng-sh") return app_path+"/diphone/ng-sh.wav";
	 else if(dipStr == "ng-t") return app_path+"/diphone/ng-t.wav";
	 else if(dipStr == "ng-th") return app_path+"/diphone/ng-th.wav";
	 else if(dipStr == "ng-uh") return app_path+"/diphone/ng-uh.wav";
	 else if(dipStr == "ng-uw") return app_path+"/diphone/ng-uw.wav";
	 else if(dipStr == "ng-v") return app_path+"/diphone/ng-v.wav";
	 else if(dipStr == "ng-w") return app_path+"/diphone/ng-w.wav";
	 else if(dipStr == "ng-y") return app_path+"/diphone/ng-y.wav";
	 else if(dipStr == "ng-z") return app_path+"/diphone/ng-z.wav";
	 else if(dipStr == "ng-zh") return app_path+"/diphone/ng-zh.wav";   
	 
 //ow diphones
	 else if(dipStr == "ow-aa") return app_path+"/diphone/ow-aa.wav"; 
	 else if(dipStr == "ow-ae") return app_path+"/diphone/ow-ae.wav"; 
	 else if(dipStr == "ow-ah") return app_path+"/diphone/ow-ah.wav"; 
	 else if(dipStr == "ow-ao") return app_path+"/diphone/ow-ao.wav";  
	 else if(dipStr == "ow-aw") return app_path+"/diphone/ow-aw.wav";  
	 else if(dipStr == "ow-ax") return app_path+"/diphone/ow-ax.wav";  
	 else if(dipStr == "ow-ay") return app_path+"/diphone/ow-ay.wav"; 
	 else if(dipStr == "ow-b") return app_path+"/diphone/ow-b.wav";   
	 else if(dipStr == "ow-ch") return app_path+"/diphone/ow-ch.wav";  
	 else if(dipStr == "ow-d") return app_path+"/diphone/ow-d.wav"; 
	 else if(dipStr == "ow-dh") return app_path+"/diphone/ow-dh.wav"; 
	 else if(dipStr == "ow-eh") return app_path+"/diphone/ow-eh.wav"; 
	 else if(dipStr == "ow-er") return app_path+"/diphone/ow-er.wav"; 
	 else if(dipStr == "ow-ey") return app_path+"/diphone/ow-ey.wav"; 
	 else if(dipStr == "ow-f") return app_path+"/diphone/ow-f.wav"; 
	 else if(dipStr == "ow-g") return app_path+"/diphone/ow-g.wav"; 
	 else if(dipStr == "ow-hh") return app_path+"/diphone/ow-hh.wav"; 
	 else if(dipStr == "ow-ih") return app_path+"/diphone/ow-ih.wav"; 
	 else if(dipStr == "ow-iy") return app_path+"/diphone/ow-iy.wav"; 
	 else if(dipStr == "ow-jh") return app_path+"/diphone/ow-jh.wav"; 
	 else if(dipStr == "ow-k") return app_path+"/diphone/ow-k.wav"; 
	 else if(dipStr == "ow-l") return app_path+"/diphone/ow-l.wav"; 
	 else if(dipStr == "ow-m") return app_path+"/diphone/ow-m.wav"; 
	 else if(dipStr == "ow-n") return app_path+"/diphone/ow-n.wav"; 
	 else if(dipStr == "ow-ng") return app_path+"/diphone/ow-ng.wav"; 
	 else if(dipStr == "ow-ow") return app_path+"/diphone/ow-ow.wav"; 
	 else if(dipStr == "ow-oy") return app_path+"/diphone/ow-oy.wav"; 
	 else if(dipStr == "ow-p") return app_path+"/diphone/ow-p.wav"; 
	 else if(dipStr == "ow-pau") return app_path+"/diphone/ow-pau.wav"; 
	 else if(dipStr == "ow-r") return app_path+"/diphone/ow-r.wav"; 
	 else if(dipStr == "ow-s") return app_path+"/diphone/ow-s.wav"; 
	 else if(dipStr == "ow-sh") return app_path+"/diphone/ow-sh.wav"; 
	 else if(dipStr == "ow-t") return app_path+"/diphone/ow-t.wav"; 
	 else if(dipStr == "ow-th") return app_path+"/diphone/ow-th.wav"; 
	 else if(dipStr == "ow-uh") return app_path+"/diphone/ow-uh.wav"; 
	 else if(dipStr == "ow-uw") return app_path+"/diphone/ow-uw.wav"; 
	 else if(dipStr == "ow-v") return app_path+"/diphone/ow-v.wav"; 
	 else if(dipStr == "ow-w") return app_path+"/diphone/ow-w.wav"; 
	 else if(dipStr == "ow-y") return app_path+"/diphone/ow-y.wav"; 
	 else if(dipStr == "ow-z") return app_path+"/diphone/ow-z.wav"; 
	 else if(dipStr == "ow-zh") return app_path+"/diphone/ow-zh.wav";    
 
 //oy diphones
	 else if(dipStr == "oy-aa") return app_path+"/diphone/oy-aa.wav";  
	 else if(dipStr == "oy-ae") return app_path+"/diphone/oy-ae.wav";
	 else if(dipStr == "oy-ah") return app_path+"/diphone/oy-ah.wav";
	 else if(dipStr == "oy-ao") return app_path+"/diphone/oy-ao.wav"; 
	 else if(dipStr == "oy-aw") return app_path+"/diphone/oy-aw.wav"; 
	 else if(dipStr == "oy-ax") return app_path+"/diphone/oy-ax.wav"; 
	 else if(dipStr == "oy-ay") return app_path+"/diphone/oy-ay.wav";
	 else if(dipStr == "oy-b") return app_path+"/diphone/oy-b.wav";  
	 else if(dipStr == "oy-ch") return app_path+"/diphone/oy-ch.wav"; 
	 else if(dipStr == "oy-d") return app_path+"/diphone/oy-d.wav";
	 else if(dipStr == "oy-dh") return app_path+"/diphone/oy-dh.wav";
	 else if(dipStr == "oy-eh") return app_path+"/diphone/oy-eh.wav";
	 else if(dipStr == "oy-er") return app_path+"/diphone/oy-er.wav";
	 else if(dipStr == "oy-ey") return app_path+"/diphone/oy-ey.wav";
	 else if(dipStr == "oy-f") return app_path+"/diphone/oy-f.wav"; 
	 else if(dipStr == "oy-g") return app_path+"/diphone/oy-g.wav";
	 else if(dipStr == "oy-hh") return app_path+"/diphone/oy-hh.wav";
	 else if(dipStr == "oy-ih") return app_path+"/diphone/oy-ih.wav";
	 else if(dipStr == "oy-iy") return app_path+"/diphone/oy-iy.wav";
	 else if(dipStr == "oy-jh") return app_path+"/diphone/oy-jh.wav";
	 else if(dipStr == "oy-k") return app_path+"/diphone/oy-k.wav";
	 else if(dipStr == "oy-l") return app_path+"/diphone/oy-l.wav";
	 else if(dipStr == "oy-m") return app_path+"/diphone/oy-m.wav";
	 else if(dipStr == "oy-n") return app_path+"/diphone/oy-n.wav";
	 else if(dipStr == "oy-ng") return app_path+"/diphone/oy-ng.wav";
	 else if(dipStr == "oy-ow") return app_path+"/diphone/oy-ow.wav";
	 else if(dipStr == "oy-oy") return app_path+"/diphone/oy-oy.wav";
	 else if(dipStr == "oy-p") return app_path+"/diphone/oy-p.wav";
	 else if(dipStr == "oy-pau") return app_path+"/diphone/oy-pau.wav";
	 else if(dipStr == "oy-r") return app_path+"/diphone/oy-r.wav";
	 else if(dipStr == "oy-s") return app_path+"/diphone/oy-s.wav";
	 else if(dipStr == "oy-sh") return app_path+"/diphone/oy-sh.wav";
	 else if(dipStr == "oy-t") return app_path+"/diphone/oy-t.wav";
	 else if(dipStr == "oy-th") return app_path+"/diphone/oy-th.wav";
	 else if(dipStr == "oy-uh") return app_path+"/diphone/oy-uh.wav";
	 else if(dipStr == "oy-uw") return app_path+"/diphone/oy-uw.wav";
	 else if(dipStr == "oy-v") return app_path+"/diphone/oy-v.wav";
	 else if(dipStr == "oy-w") return app_path+"/diphone/oy-w.wav";
	 else if(dipStr == "oy-y") return app_path+"/diphone/oy-y.wav";
	 else if(dipStr == "oy-z") return app_path+"/diphone/oy-z.wav";
	 else if(dipStr == "oy-zh") return app_path+"/diphone/oy-zh.wav";   
	 
 // p diphones
	 else if(dipStr =="p-aa") return app_path+"/diphone/p-aa.wav";   
	 else if(dipStr =="p-ae") return app_path+"/diphone/p-ae.wav"; 
	 else if(dipStr =="p-ah") return app_path+"/diphone/p-ah.wav"; 
	 else if(dipStr =="p-ao") return app_path+"/diphone/p-ao.wav";  
	 else if(dipStr =="p-aw") return app_path+"/diphone/p-aw.wav";  
	 else if(dipStr =="p-ax") return app_path+"/diphone/p-ax.wav"; 
	 else if(dipStr =="p-ay") return app_path+"/diphone/p-ay.wav"; 
	 else if(dipStr =="p-b") return app_path+"/diphone/p-b.wav";   
	 else if(dipStr =="p-ch") return app_path+"/diphone/p-ch.wav";  
	 else if(dipStr =="p-d") return app_path+"/diphone/p-d.wav"; 
	 else if(dipStr =="p-dh") return app_path+"/diphone/p-dh.wav"; 
	 else if(dipStr =="p-eh") return app_path+"/diphone/p-eh.wav"; 
	 else if(dipStr =="p-er") return app_path+"/diphone/p-er.wav"; 
	 else if(dipStr =="p-ey") return app_path+"/diphone/p-ey.wav"; 
	 else if(dipStr =="p-f") return app_path+"/diphone/p-f.wav"; 
	 else if(dipStr =="p-g") return app_path+"/diphone/p-g.wav"; 
	 else if(dipStr =="p-hh") return app_path+"/diphone/p-hh.wav"; 
	 else if(dipStr =="p-ih") return app_path+"/diphone/p-ih.wav"; 
	 else if(dipStr =="p-iy") return app_path+"/diphone/p-iy.wav"; 
	 else if(dipStr =="p-jh") return app_path+"/diphone/p-jh.wav"; 
	 else if(dipStr =="p-k") return app_path+"/diphone/p-k.wav"; 
	 else if(dipStr =="p-l") return app_path+"/diphone/p-l.wav"; 
	 else if(dipStr =="p-m") return app_path+"/diphone/p-m.wav"; 
	 else if(dipStr =="p-n") return app_path+"/diphone/p-n.wav"; 
	 else if(dipStr =="p-ow") return app_path+"/diphone/p-ow.wav"; 
	 else if(dipStr =="p-oy") return app_path+"/diphone/p-oy.wav"; 
	 else if(dipStr =="p-p") return app_path+"/diphone/p-p.wav"; 
	 else if(dipStr =="p-pau") return app_path+"/diphone/p-pau.wav"; 
	 else if(dipStr =="p-r") return app_path+"/diphone/p-r.wav"; 
	 else if(dipStr =="p-s") return app_path+"/diphone/p-s.wav"; 
	 else if(dipStr =="p-sh") return app_path+"/diphone/p-aa.wav"; 
	 else if(dipStr =="p-t") return app_path+"/diphone/p-t.wav"; 
	 else if(dipStr =="p-th") return app_path+"/diphone/p-th.wav"; 
	 else if(dipStr =="p-uh") return app_path+"/diphone/p-uh.wav"; 
	 else if(dipStr =="p-uw") return app_path+"/diphone/p-uw.wav"; 
	 else if(dipStr =="p-v") return app_path+"/diphone/p-v.wav"; 
	 else if(dipStr =="p-w") return app_path+"/diphone/p-w.wav"; 
	 else if(dipStr =="p-y") return app_path+"/diphone/p-y.wav"; 
	 else if(dipStr =="p-z") return app_path+"/diphone/p-z.wav"; 
	 else if(dipStr =="p-zh") return app_path+"/diphone/p-zh.wav";  

// pau diphones
	else if(dipStr == "pau-aa") return app_path+"/diphone/pau-aa.wav";  
	else if(dipStr == "pau-ae") return app_path+"/diphone/pau-ae.wav";
	else if(dipStr == "pau-ah") return app_path+"/diphone/pau-ah.wav";
	else if(dipStr == "pau-ao") return app_path+"/diphone/pau-ao.wav"; 
	else if(dipStr == "pau-aw") return app_path+"/diphone/pau-aw.wav"; 
	else if(dipStr == "pau-ax") return app_path+"/diphone/pau-ax.wav"; 
	else if(dipStr == "pau-ay") return app_path+"/diphone/pau-ay.wav";
	else if(dipStr == "pau-b") return app_path+"/diphone/pau-b.wav";  
	else if(dipStr == "pau-ch") return app_path+"/diphone/pau-ch.wav"; 
	else if(dipStr == "pau-d") return app_path+"/diphone/pau-d.wav";
	else if(dipStr == "pau-dh") return app_path+"/diphone/pau-dh.wav";
	else if(dipStr == "pau-eh") return app_path+"/diphone/pau-eh.wav";
	else if(dipStr == "pau-er") return app_path+"/diphone/pau-er.wav";
	else if(dipStr == "pau-ey") return app_path+"/diphone/pau-ey.wav";
	else if(dipStr == "pau-f") return app_path+"/diphone/pau-f.wav"; 
	else if(dipStr == "pau-g") return app_path+"/diphone/pau-g.wav";
	else if(dipStr == "pau-hh") return app_path+"/diphone/pau-hh.wav";
	else if(dipStr == "pau-ih") return app_path+"/diphone/pau-ih.wav";
	else if(dipStr == "pau-iy") return app_path+"/diphone/pau-iy.wav";
	else if(dipStr == "pau-jh") return app_path+"/diphone/pau-jh.wav";
	else if(dipStr == "pau-k") return app_path+"/diphone/pau-k.wav";
	else if(dipStr == "pau-l") return app_path+"/diphone/pau-l.wav";
	else if(dipStr == "pau-m") return app_path+"/diphone/pau-m.wav";
	else if(dipStr == "pau-n") return app_path+"/diphone/pau-n.wav";
	else if(dipStr == "pau-ow") return app_path+"/diphone/pau-ow.wav";
	else if(dipStr == "pau-oy") return app_path+"/diphone/pau-oy.wav";
	else if(dipStr == "pau-p") return app_path+"/diphone/pau-p.wav";
	else if(dipStr == "pau-pau") return app_path+"/diphone/pau-pau.wav";
	else if(dipStr == "pau-r") return app_path+"/diphone/pau-r.wav";
	else if(dipStr == "pau-s") return app_path+"/diphone/pau-s.wav";
	else if(dipStr == "pau-sh") return app_path+"/diphone/pau-sh.wav";
	else if(dipStr == "pau-t") return app_path+"/diphone/pau-t.wav";
	else if(dipStr == "pau-th") return app_path+"/diphone/pau-th.wav";
	else if(dipStr == "pau-uh") return app_path+"/diphone/pau-uh.wav";
	else if(dipStr == "pau-uw") return app_path+"/diphone/pau-uw.wav";
	else if(dipStr == "pau-v") return app_path+"/diphone/pau-v.wav";
	else if(dipStr == "pau-w") return app_path+"/diphone/pau-w.wav";
	else if(dipStr == "pau-y") return app_path+"/diphone/pau-y.wav";
	else if(dipStr == "pau-z") return app_path+"/diphone/pau-z.wav";
	else if(dipStr == "pau-zh") return app_path+"/diphone/pau-zh.wav";  
	 
// r diphones
	else if(dipStr == "r-aa") return app_path+"/diphone/r-aa.wav";  
	else if(dipStr == "r-ae ") return app_path+"/diphone/r-ae.wav";
	else if(dipStr == "r-ah") return app_path+"/diphone/r-ah.wav";
	else if(dipStr == "r-ao") return app_path+"/diphone/r-ao.wav"; 
	else if(dipStr == "r-aw") return app_path+"/diphone/r-aw.wav"; 
	else if(dipStr == "r-ax") return app_path+"/diphone/r-ax.wav"; 
	else if(dipStr == "r-ay") return app_path+"/diphone/r-ay.wav";
	else if(dipStr == "r-b") return app_path+"/diphone/r-b.wav";  
	else if(dipStr == "r-ch") return app_path+"/diphone/r-ch.wav";
	else if(dipStr == "r-d") return app_path+"/diphone/r-d.wav";
	else if(dipStr == "r-dh") return app_path+"/diphone/r-dh.wav";
	else if(dipStr == "r-eh") return app_path+"/diphone/r-eh.wav";
	else if(dipStr == "r-er") return app_path+"/diphone/r-er.wav";
	else if(dipStr == "r-ey") return app_path+"/diphone/r-ey.wav";
	else if(dipStr == "r-f") return app_path+"/diphone/r-f.wav"; 
	else if(dipStr == "r-g") return app_path+"/diphone/r-g.wav";
	else if(dipStr == "r-hh") return app_path+"/diphone/r-hh.wav";
	else if(dipStr == "r-ih") return app_path+"/diphone/r-ih.wav";
	else if(dipStr == "r-iy") return app_path+"/diphone/r-iy.wav";
	else if(dipStr == "r-jh") return app_path+"/diphone/r-jh.wav";
	else if(dipStr == "r-k") return app_path+"/diphone/r-k.wav";
	else if(dipStr == "r-l") return app_path+"/diphone/r-l.wav";
	else if(dipStr == "r-m") return app_path+"/diphone/r-m.wav";
	else if(dipStr == "r-n") return app_path+"/diphone/r-n.wav";
	else if(dipStr == "r-ow") return app_path+"/diphone/r-ow.wav";
	else if(dipStr == "r-oy") return app_path+"/diphone/r-oy.wav";
	else if(dipStr == "r-p") return app_path+"/diphone/r-p.wav";
	else if(dipStr == "r-pau") return app_path+"/diphone/r-pau.wav";
	else if(dipStr == "r-r") return app_path+"/diphone/r-r.wav";
	else if(dipStr == "r-s") return app_path+"/diphone/r-s.wav";
	else if(dipStr == "r-sh") return app_path+"/diphone/r-sh.wav";
	else if(dipStr == "r-t") return app_path+"/diphone/r-t.wav";
	else if(dipStr == "r-th") return app_path+"/diphone/r-th.wav";
	else if(dipStr == "r-uh") return app_path+"/diphone/r-uh.wav";
	else if(dipStr == "r-uw") return app_path+"/diphone/r-uw.wav";
	else if(dipStr == "r-v") return app_path+"/diphone/r-v.wav";
	else if(dipStr == "r-w") return app_path+"/diphone/r-w.wav";
	else if(dipStr == "r-y") return app_path+"/diphone/r-y.wav";
	else if(dipStr == "r-z") return app_path+"/diphone/r-z.wav";
	else if(dipStr == "r-zh") return app_path+"/diphone/r-zh.wav";   	
	
	// s diphones
	else if(dipStr == "s-aa") return app_path+"/diphone/s-aa.wav";   
	else if(dipStr == "s-ae") return app_path+"/diphone/s-ae.wav"; 
	else if(dipStr == "s-ah") return app_path+"/diphone/s-ah.wav"; 
	else if(dipStr == "s-ao") return app_path+"/diphone/s-ao.wav";  
	else if(dipStr == "s-aw") return app_path+"/diphone/s-aw.wav"; 
	else if(dipStr == "s-ax") return app_path+"/diphone/s-ax.wav";  
	else if(dipStr == "s-ay") return app_path+"/diphone/s-ay.wav"; 
	else if(dipStr == "s-b") return app_path+"/diphone/s-b.wav";   
	else if(dipStr == "s-ch") return app_path+"/diphone/s-ch.wav";  
	else if(dipStr == "s-d") return app_path+"/diphone/s-d.wav"; 
	else if(dipStr == "s-dh") return app_path+"/diphone/s-dh.wav"; 
	else if(dipStr == "s-eh") return app_path+"/diphone/s-eh.wav"; 
	else if(dipStr == "s-er") return app_path+"/diphone/s-er.wav"; 
	else if(dipStr == "s-ey") return app_path+"/diphone/s-ey.wav"; 
	else if(dipStr == "s-f") return app_path+"/diphone/s-f.wav";  
	else if(dipStr == "s-g") return app_path+"/diphone/s-g.wav"; 
	else if(dipStr == "s-hh") return app_path+"/diphone/s-hh.wav"; 
	else if(dipStr == "s-ih") return app_path+"/diphone/s-ih.wav"; 
	else if(dipStr == "s-iy") return app_path+"/diphone/s-iy.wav"; 
	else if(dipStr == "s-jh") return app_path+"/diphone/s-jh.wav"; 
	else if(dipStr == "s-k") return app_path+"/diphone/s-k.wav"; 
	else if(dipStr == "s-l") return app_path+"/diphone/s-l.wav"; 
	else if(dipStr == "s-m") return app_path+"/diphone/s-m.wav"; 
	else if(dipStr == "s-n") return app_path+"/diphone/s-n.wav"; 
	else if(dipStr == "s-ow") return app_path+"/diphone/s-ow.wav"; 
	else if(dipStr == "s-oy") return app_path+"/diphone/s-oy.wav"; 
	else if(dipStr == "s-p") return app_path+"/diphone/s-p.wav"; 
	else if(dipStr == "s-pau") return app_path+"/diphone/s-pau.wav"; 
	else if(dipStr == "s-r") return app_path+"/diphone/s-r.wav"; 
	else if(dipStr == "s-s") return app_path+"/diphone/s-s.wav"; 
	else if(dipStr == "s-sh") return app_path+"/diphone/s-sh.wav"; 
	else if(dipStr == "s-t") return app_path+"/diphone/s-t.wav"; 
	else if(dipStr == "s-th") return app_path+"/diphone/s-th.wav"; 
	else if(dipStr == "s-uh") return app_path+"/diphone/s-uh.wav"; 
	else if(dipStr == "s-uw") return app_path+"/diphone/s-uw.wav"; 
	else if(dipStr == "s-v") return app_path+"/diphone/s-v.wav"; 
	else if(dipStr == "s-w") return app_path+"/diphone/s-w.wav"; 
	else if(dipStr == "s-y") return app_path+"/diphone/s-y.wav"; 
	else if(dipStr == "s-z") return app_path+"/diphone/s-z.wav"; 
	else if(dipStr == "s-zh") return app_path+"/diphone/s-zh.wav";   
	
// sh diphones
	else if(dipStr == "sh-aa") return app_path+"/diphone/sh-aa.wav";   
	else if(dipStr == "sh-ae") return app_path+"/diphone/sh-ae.wav"; 
	else if(dipStr == "sh-ah") return app_path+"/diphone/sh-ah.wav"; 
	else if(dipStr == "sh-ao") return app_path+"/diphone/sh-ao.wav";  
	else if(dipStr == "sh-aw") return app_path+"/diphone/sh-aw.wav";  
	else if(dipStr == "sh-ax") return app_path+"/diphone/sh-ax.wav";  
	else if(dipStr == "sh-ay") return app_path+"/diphone/sh-ay.wav"; 
	else if(dipStr == "sh-b") return app_path+"/diphone/sh-b.wav";   
	else if(dipStr == "sh-ch") return app_path+"/diphone/sh-ch.wav";  
	else if(dipStr == "sh-d") return app_path+"/diphone/sh-d.wav"; 
	else if(dipStr == "sh-dh") return app_path+"/diphone/sh-dh.wav"; 
	else if(dipStr == "sh-eh") return app_path+"/diphone/sh-eh.wav"; 
	else if(dipStr == "sh-er") return app_path+"/diphone/sh-er.wav"; 
	else if(dipStr == "sh-ey") return app_path+"/diphone/sh-ey.wav"; 
	else if(dipStr == "sh-f") return app_path+"/diphone/sh-f.wav";  
	else if(dipStr == "sh-g") return app_path+"/diphone/sh-g.wav"; 
	else if(dipStr == "sh-hh") return app_path+"/diphone/sh-hh.wav"; 
	else if(dipStr == "sh-ih") return app_path+"/diphone/sh-ih.wav"; 
	else if(dipStr == "sh-iy") return app_path+"/diphone/sh-iy.wav"; 
	else if(dipStr == "sh-jh") return app_path+"/diphone/sh-jh.wav"; 
	else if(dipStr == "sh-k") return app_path+"/diphone/sh-k.wav"; 
	else if(dipStr == "sh-l") return app_path+"/diphone/sh-l.wav"; 
	else if(dipStr == "sh-m") return app_path+"/diphone/sh-m.wav"; 
	else if(dipStr == "sh-n") return app_path+"/diphone/sh-n.wav"; 
	else if(dipStr == "sh-ow") return app_path+"/diphone/sh-ow.wav"; 
	else if(dipStr == "sh-oy") return app_path+"/diphone/sh-oy.wav"; 
	else if(dipStr == "sh-p") return app_path+"/diphone/sh-p.wav"; 
	else if(dipStr == "sh-pau") return app_path+"/diphone/sh-pau.wav"; 
	else if(dipStr == "sh-r") return app_path+"/diphone/sh-r.wav"; 
	else if(dipStr == "sh-s") return app_path+"/diphone/sh-s.wav"; 
	else if(dipStr == "sh-sh") return app_path+"/diphone/sh-sh.wav"; 
	else if(dipStr == "sh-t") return app_path+"/diphone/sh-t.wav"; 
	else if(dipStr == "sh-th") return app_path+"/diphone/sh-th.wav"; 
	else if(dipStr == "sh-uh") return app_path+"/diphone/sh-uh.wav"; 
	else if(dipStr == "sh-uw") return app_path+"/diphone/sh-uw.wav"; 
	else if(dipStr == "sh-v") return app_path+"/diphone/sh-v.wav"; 
	else if(dipStr == "sh-w") return app_path+"/diphone/sh-w.wav"; 
	else if(dipStr == "sh-y") return app_path+"/diphone/sh-y.wav"; 
	else if(dipStr == "sh-z") return app_path+"/diphone/sh-z.wav"; 
	else if(dipStr == "sh-zh") return app_path+"/diphone/sh-zh.wav";    	 
  
// t diphones
	else if(dipStr == "t-aa") return app_path+"/diphone/t-aa.wav"; 
	else if(dipStr == "t-ae") return app_path+"/diphone/t-ae.wav";
	else if(dipStr == "t-ah") return app_path+"/diphone/t-ah.wav";
	else if(dipStr == "t-ao") return app_path+"/diphone/t-ao.wav"; 
	else if(dipStr == "t-aw") return app_path+"/diphone/t-aw.wav"; 
	else if(dipStr == "t-ax") return app_path+"/diphone/t-ax.wav"; 
	else if(dipStr == "t-ay") return app_path+"/diphone/t-ay.wav";
	else if(dipStr == "t-b") return app_path+"/diphone/t-b.wav";  
	else if(dipStr == "t-ch") return app_path+"/diphone/t-ch.wav"; 
	else if(dipStr == "t-d") return app_path+"/diphone/t-d.wav";
	else if(dipStr == "t-dh") return app_path+"/diphone/t-dh.wav";
	else if(dipStr == "t-eh") return app_path+"/diphone/t-eh.wav";
	else if(dipStr == "t-er") return app_path+"/diphone/t-er.wav";
	else if(dipStr == "t-ey") return app_path+"/diphone/t-ey.wav";
	else if(dipStr == "t-f") return app_path+"/diphone/t-f.wav";
	else if(dipStr == "t-g") return app_path+"/diphone/t-g.wav";
	else if(dipStr == "t-hh") return app_path+"/diphone/t-hh.wav";
	else if(dipStr == "t-ih") return app_path+"/diphone/t-ih.wav";
	else if(dipStr == "t-iy") return app_path+"/diphone/t-iy.wav";
	else if(dipStr == "t-jh") return app_path+"/diphone/t-jh.wav";
	else if(dipStr == "t-k") return app_path+"/diphone/t-k.wav";
	else if(dipStr == "t-l") return app_path+"/diphone/t-l.wav";
	else if(dipStr == "t-m") return app_path+"/diphone/t-m.wav";
	else if(dipStr == "t-n") return app_path+"/diphone/t-n.wav";
	else if(dipStr == "t-ow") return app_path+"/diphone/t-ow.wav";
	else if(dipStr == "t-oy") return app_path+"/diphone/t-oy.wav";
	else if(dipStr == "t-p") return app_path+"/diphone/t-p.wav";
	else if(dipStr == "t-pau") return app_path+"/diphone/t-pau.wav";
	else if(dipStr == "t-r") return app_path+"/diphone/t-r.wav";
	else if(dipStr == "t-s") return app_path+"/diphone/t-s.wav";
	else if(dipStr == "t-sh") return app_path+"/diphone/t-sh.wav";
	else if(dipStr == "t-t") return app_path+"/diphone/t-t.wav";
	else if(dipStr == "t-th") return app_path+"/diphone/t-th.wav";
	else if(dipStr == "t-uh") return app_path+"/diphone/t-uh.wav";
	else if(dipStr == "t-uw") return app_path+"/diphone/t-uw.wav";
	else if(dipStr == "t-v") return app_path+"/diphone/t-v.wav";
	else if(dipStr == "t-w") return app_path+"/diphone/t-w.wav";
	else if(dipStr == "t-y") return app_path+"/diphone/t-y.wav";
	else if(dipStr == "t-z") return app_path+"/diphone/t-z.wav";
	else if(dipStr == "t-zh") return app_path+"/diphone/t-zh.wav";     
	
// th diphones
	else if(dipStr == "th-aa") return app_path+"/diphone/th-aa.wav";  
	else if(dipStr == "th-ae") return app_path+"/diphone/th-ae.wav"; 
	else if(dipStr == "th-ah") return app_path+"/diphone/th-ah.wav"; 
	else if(dipStr == "th-ao") return app_path+"/diphone/th-ao.wav";  
	else if(dipStr == "th-aw") return app_path+"/diphone/th-aw.wav";  
	else if(dipStr == "th-ax") return app_path+"/diphone/th-ax.wav";  
	else if(dipStr == "th-ay") return app_path+"/diphone/th-ay.wav"; 
	else if(dipStr == "th-b") return app_path+"/diphone/th-b.wav";   
	else if(dipStr == "th-ch") return app_path+"/diphone/th-ch.wav";  
	else if(dipStr == "th-d") return app_path+"/diphone/th-d.wav"; 
	else if(dipStr == "th-dh") return app_path+"/diphone/th-dh.wav"; 
	else if(dipStr == "th-eh") return app_path+"/diphone/th-eh.wav"; 
	else if(dipStr == "th-er") return app_path+"/diphone/th-er.wav"; 
	else if(dipStr == "th-ey") return app_path+"/diphone/th-ey.wav"; 
	else if(dipStr == "th-f") return app_path+"/diphone/th-f.wav";  
	else if(dipStr == "th-g") return app_path+"/diphone/th-g.wav"; 
	else if(dipStr == "th-hh") return app_path+"/diphone/th-hh.wav"; 
	else if(dipStr == "th-ih") return app_path+"/diphone/th-ih.wav"; 
	else if(dipStr == "th-iy") return app_path+"/diphone/th-iy.wav"; 
	else if(dipStr == "th-jh") return app_path+"/diphone/th-jh.wav"; 
	else if(dipStr == "th-k") return app_path+"/diphone/th-k.wav"; 
	else if(dipStr == "th-l") return app_path+"/diphone/th-l.wav"; 
	else if(dipStr == "th-m") return app_path+"/diphone/th-m.wav"; 
	else if(dipStr == "th-n") return app_path+"/diphone/th-n.wav"; 
	else if(dipStr == "th-ow") return app_path+"/diphone/th-ow.wav"; 
	else if(dipStr == "th-oy") return app_path+"/diphone/th-oy.wav"; 
	else if(dipStr == "th-p") return app_path+"/diphone/th-p.wav"; 
	else if(dipStr == "th-pau") return app_path+"/diphone/th-pau.wav"; 
	else if(dipStr == "th-r") return app_path+"/diphone/th-r.wav"; 
	else if(dipStr == "th-s") return app_path+"/diphone/th-s.wav"; 
	else if(dipStr == "th-sh") return app_path+"/diphone/th-aa.wav"; 
	else if(dipStr == "th-t") return app_path+"/diphone/th-aa.wav"; 
	else if(dipStr == "th-th") return app_path+"/diphone/th-th.wav"; 
	else if(dipStr == "th-uh") return app_path+"/diphone/th-uh.wav"; 
	else if(dipStr == "th-uw") return app_path+"/diphone/th-uw.wav"; 
	else if(dipStr == "th-v") return app_path+"/diphone/th-v.wav"; 
	else if(dipStr == "th-w") return app_path+"/diphone/th-w.wav"; 
	else if(dipStr == "th-y") return app_path+"/diphone/th-y.wav"; 
	else if(dipStr == "th-z") return app_path+"/diphone/th-z.wav"; 
	else if(dipStr == "th-zh") return app_path+"/diphone/th-zh.wav";    
	
	// uh diphones
	else if(dipStr == "uh-aa") return app_path+"/diphone/uh-aa.wav";  
	else if(dipStr == "uh-ae") return app_path+"/diphone/uh-ae.wav";
	else if(dipStr == "uh-ah") return app_path+"/diphone/uh-ah.wav";
	else if(dipStr == "uh-ao") return app_path+"/diphone/uh-ao.wav"; 
	else if(dipStr == "uh-aw") return app_path+"/diphone/uh-aw.wav"; 
	else if(dipStr == "uh-ax") return app_path+"/diphone/uh-ax.wav"; 
	else if(dipStr == "uh-ay") return app_path+"/diphone/uh-ay.wav";
	else if(dipStr == "uh-b") return app_path+"/diphone/uh-b.wav";  
	else if(dipStr == "uh-ch") return app_path+"/diphone/uh-ch.wav"; 
	else if(dipStr == "uh-d") return app_path+"/diphone/uh-d.wav";
	else if(dipStr == "uh-dh") return app_path+"/diphone/uh-dh.wav";
	else if(dipStr == "uh-eh") return app_path+"/diphone/uh-eh.wav";
	else if(dipStr == "uh-er") return app_path+"/diphone/uh-er.wav";
	else if(dipStr == "uh-ey") return app_path+"/diphone/uh-ey.wav";
	else if(dipStr == "uh-f") return app_path+"/diphone/uh-f.wav";
	else if(dipStr == "uh-g") return app_path+"/diphone/uh-g.wav";
	else if(dipStr == "uh-hh") return app_path+"/diphone/uh-hh.wav";
	else if(dipStr == "uh-ih") return app_path+"/diphone/uh-ih.wav";
	else if(dipStr == "uh-iy") return app_path+"/diphone/uh-iy.wav";
	else if(dipStr == "uh-jh") return app_path+"/diphone/uh-jh.wav";
	else if(dipStr == "uh-k") return app_path+"/diphone/uh-k.wav";
	else if(dipStr == "uh-l") return app_path+"/diphone/uh-l.wav";
	else if(dipStr == "uh-m") return app_path+"/diphone/uh-m.wav";
	else if(dipStr == "uh-n") return app_path+"/diphone/uh-n.wav";
	else if(dipStr == "uh-ng") return app_path+"/diphone/uh-ng.wav";
	else if(dipStr == "uh-ow") return app_path+"/diphone/uh-ow.wav";
	else if(dipStr == "uh-oy") return app_path+"/diphone/uh-oy.wav";
	else if(dipStr == "uh-p") return app_path+"/diphone/uh-p.wav";
	else if(dipStr == "uh-pau") return app_path+"/diphone/uh-pau.wav";
	else if(dipStr == "uh-r") return app_path+"/diphone/uh-r.wav";
	else if(dipStr == "uh-s") return app_path+"/diphone/uh-s.wav";
	else if(dipStr == "uh-sh") return app_path+"/diphone/uh-sh.wav";
	else if(dipStr == "uh-t") return app_path+"/diphone/uh-t.wav";
	else if(dipStr == "uh-th") return app_path+"/diphone/uh-th.wav";
	else if(dipStr == "uh-uh") return app_path+"/diphone/uh-uh.wav";
	else if(dipStr == "uh-uw") return app_path+"/diphone/uh-uw.wav";
	else if(dipStr == "uh-v") return app_path+"/diphone/uh-v.wav";
	else if(dipStr == "uh-w") return app_path+"/diphone/uh-w.wav";
	else if(dipStr == "uh-y") return app_path+"/diphone/uh-y.wav";
	else if(dipStr == "uh-z") return app_path+"/diphone/uh-z.wav";
	else if(dipStr == "uh-zh") return app_path+"/diphone/uh-zh.wav";  
	
// uw diphones
	else if(dipStr =="uw-aa") return app_path+"/diphone/uw-aa.wav";  
	else if(dipStr =="uw-ae") return app_path+"/diphone/uw-ae.wav";
	else if(dipStr =="uw-ah") return app_path+"/diphone/uw-ah.wav";
	else if(dipStr =="uw-ao") return app_path+"/diphone/uw-ao.wav"; 
	else if(dipStr =="uw-aw") return app_path+"/diphone/uw-aw.wav";
	else if(dipStr =="uw-ax") return app_path+"/diphone/uw-ax.wav"; 
	else if(dipStr =="uw-ay") return app_path+"/diphone/uw-ay.wav";
	else if(dipStr =="uw-b") return app_path+"/diphone/uw-b.wav";  
	else if(dipStr =="uw-ch") return app_path+"/diphone/uw-ch.wav"; 
	else if(dipStr =="uw-d") return app_path+"/diphone/uw-d.wav";
	else if(dipStr =="uw-dh") return app_path+"/diphone/uw-dh.wav";
	else if(dipStr =="uw-eh") return app_path+"/diphone/uw-eh.wav";
	else if(dipStr =="uw-er") return app_path+"/diphone/uw-er.wav";
	else if(dipStr =="uw-ey") return app_path+"/diphone/uw-ey.wav";
	else if(dipStr =="uw-f") return app_path+"/diphone/uw-f.wav"; 
	else if(dipStr =="uw-g") return app_path+"/diphone/uw-g.wav";
	else if(dipStr =="uw-hh") return app_path+"/diphone/uw-hh.wav";
	else if(dipStr =="uw-ih") return app_path+"/diphone/uw-ih.wav";
	else if(dipStr =="uw-iy") return app_path+"/diphone/uw-iy.wav";
	else if(dipStr =="uw-jh") return app_path+"/diphone/uw-jh.wav";
	else if(dipStr =="uw-k") return app_path+"/diphone/uw-k.wav";
	else if(dipStr =="uw-l") return app_path+"/diphone/uw-l.wav";
	else if(dipStr =="uw-m") return app_path+"/diphone/uw-m.wav";
	else if(dipStr =="uw-n") return app_path+"/diphone/uw-n.wav";
	else if(dipStr =="uw-ng") return app_path+"/diphone/uw-ng.wav";
	else if(dipStr =="uw-ow") return app_path+"/diphone/uw-ow.wav";
	else if(dipStr =="uw-oy") return app_path+"/diphone/uw-oy.wav";
	else if(dipStr =="uw-p") return app_path+"/diphone/uw-p.wav";
	else if(dipStr =="uw-pau") return app_path+"/diphone/uw-pau.wav";
	else if(dipStr =="uw-r") return app_path+"/diphone/uw-r.wav";
	else if(dipStr =="uw-s") return app_path+"/diphone/uw-s.wav";
	else if(dipStr =="uw-sh") return app_path+"/diphone/uw-sh.wav";
	else if(dipStr =="uw-t") return app_path+"/diphone/uw-t.wav";
	else if(dipStr =="uw-th") return app_path+"/diphone/uw-th.wav";
	else if(dipStr =="uw-uh") return app_path+"/diphone/uw-uh.wav";
	else if(dipStr =="uw-uw") return app_path+"/diphone/uw-uw.wav";
	else if(dipStr =="uw-v") return app_path+"/diphone/uw-v.wav";
	else if(dipStr =="uw-w") return app_path+"/diphone/uw-w.wav";
	else if(dipStr =="uw-y") return app_path+"/diphone/uw-y.wav";
	else if(dipStr =="uw-z") return app_path+"/diphone/uw-z.wav";
	else if(dipStr =="uw-zh") return app_path+"/diphone/uw-zh.wav";   	

//v diphones	
	else if(dipStr =="v-aa ") return app_path+"/diphone/v-aa.wav"; 
	else if(dipStr =="v-ae") return app_path+"/diphone/v-ae.wav"; 
	else if(dipStr =="v-ah") return app_path+"/diphone/v-ah.wav"; 
	else if(dipStr =="v-ao") return app_path+"/diphone/v-ao.wav"; 
	else if(dipStr =="v-aw") return app_path+"/diphone/v-aw.wav";  
	else if(dipStr =="v-ax") return app_path+"/diphone/v-ax.wav";  
	else if(dipStr =="v-ay") return app_path+"/diphone/v-ay.wav"; 
	else if(dipStr =="v-b") return app_path+"/diphone/v-b.wav";   
	else if(dipStr =="v-ch") return app_path+"/diphone/v-ch.wav";  
	else if(dipStr =="v-d") return app_path+"/diphone/v-d.wav"; 
	else if(dipStr =="v-dh") return app_path+"/diphone/v-dh.wav"; 
	else if(dipStr =="v-eh") return app_path+"/diphone/v-eh.wav"; 
	else if(dipStr =="v-er") return app_path+"/diphone/v-er.wav"; 
	else if(dipStr =="v-ey") return app_path+"/diphone/v-ey.wav"; 
	else if(dipStr =="v-f") return app_path+"/diphone/v-f.wav"; 
	else if(dipStr =="v-g") return app_path+"/diphone/v-g.wav"; 
	else if(dipStr =="v-hh") return app_path+"/diphone/v-hh.wav"; 
	else if(dipStr =="v-ih") return app_path+"/diphone/v-ih.wav"; 
	else if(dipStr =="v-iy") return app_path+"/diphone/v-iy.wav"; 
	else if(dipStr =="v-jh") return app_path+"/diphone/v-jh.wav"; 
	else if(dipStr =="v-k") return app_path+"/diphone/v-k.wav"; 
	else if(dipStr =="v-l") return app_path+"/diphone/v-l.wav"; 
	else if(dipStr =="v-m") return app_path+"/diphone/v-m.wav"; 
	else if(dipStr =="v-n") return app_path+"/diphone/v-n.wav"; 
	else if(dipStr =="v-ow") return app_path+"/diphone/v-ow.wav"; 
	else if(dipStr =="v-oy") return app_path+"/diphone/v-oy.wav"; 
	else if(dipStr =="v-p") return app_path+"/diphone/v-p.wav"; 
	else if(dipStr =="v-pau") return app_path+"/diphone/v-pau.wav"; 
	else if(dipStr =="v-r") return app_path+"/diphone/v-r.wav"; 
	else if(dipStr =="v-s") return app_path+"/diphone/v-s.wav"; 
	else if(dipStr =="v-sh") return app_path+"/diphone/v-sh.wav"; 
	else if(dipStr =="v-t") return app_path+"/diphone/v-t.wav"; 
	else if(dipStr =="v-th") return app_path+"/diphone/v-th.wav"; 
	else if(dipStr =="v-uh") return app_path+"/diphone/v-uh.wav"; 
	else if(dipStr =="v-uw") return app_path+"/diphone/v-uw.wav"; 
	else if(dipStr =="v-v") return app_path+"/diphone/v-v.wav"; 
	else if(dipStr =="v-w") return app_path+"/diphone/v-w.wav"; 
	else if(dipStr =="v-y") return app_path+"/diphone/v-y.wav"; 
	else if(dipStr =="v-z") return app_path+"/diphone/v-z.wav"; 
	else if(dipStr =="v-zh") return app_path+"/diphone/v-zh.wav";

// w diphones
	else if(dipStr == "w-aa") return app_path+"/diphone/w-aa.wav";  
	else if(dipStr == "w-ae") return app_path+"/diphone/w-ae.wav"; 
	else if(dipStr == "w-ah") return app_path+"/diphone/w-ah.wav"; 
	else if(dipStr == "w-ao") return app_path+"/diphone/w-ao.wav";  
	else if(dipStr == "w-aw") return app_path+"/diphone/w-aw.wav";  
	else if(dipStr == "w-ax") return app_path+"/diphone/w-ax.wav";  
	else if(dipStr == "w-ay") return app_path+"/diphone/w-ay.wav"; 
	else if(dipStr == "w-eh") return app_path+"/diphone/w-eh.wav"; 
	else if(dipStr == "w-ih") return app_path+"/diphone/w-ih.wav"; 
	else if(dipStr == "w-iy") return app_path+"/diphone/w-iy.wav"; 
	else if(dipStr == "w-uh") return app_path+"/diphone/w-uh.wav"; 
	else if(dipStr == "w-uw") return app_path+"/diphone/w-uw.wav";   
	 
// y diphones
	else if(dipStr == "y-aa") return app_path+"/diphone/y-aa.wav";  
	else if(dipStr == "y-ae") return app_path+"/diphone/y-ae.wav"; 
	else if(dipStr == "y-ah") return app_path+"/diphone/y-ah.wav"; 
	else if(dipStr == "y-ao") return app_path+"/diphone/y-ao.wav";  
	else if(dipStr == "y-aw") return app_path+"/diphone/y-aw.wav";  
	else if(dipStr == "y-ax") return app_path+"/diphone/y-ax.wav";  
	else if(dipStr == "y-ay") return app_path+"/diphone/y-ay.wav"; 
	else if(dipStr == "y-eh") return app_path+"/diphone/y-eh.wav"; 
	else if(dipStr == "y-ey") return app_path+"/diphone/y-ey.wav"; 
	else if(dipStr == "y-ih") return app_path+"/diphone/y-ih.wav"; 
	else if(dipStr == "y-iy") return app_path+"/diphone/y-iy.wav"; 
	else if(dipStr == "y-ow") return app_path+"/diphone/y-ow.wav"; 
	else if(dipStr == "y-oy") return app_path+"/diphone/y-oy.wav"; 
	else if(dipStr == "y-uh") return app_path+"/diphone/y-uh.wav"; 
	else if(dipStr == "y-uw") return app_path+"/diphone/y-uw.wav";  

// z diphones
	else if(dipStr =="z-aa") return app_path+"/diphone/z-aa.wav";  
	else if(dipStr =="z-ae") return app_path+"/diphone/z-ae.wav";
	else if(dipStr =="z-ah") return app_path+"/diphone/z-ah.wav";
	else if(dipStr =="z-ao") return app_path+"/diphone/z-ao.wav"; 
	else if(dipStr =="z-aw") return app_path+"/diphone/z-aw.wav"; 
	else if(dipStr =="z-ax") return app_path+"/diphone/z-ax.wav"; 
	else if(dipStr =="z-ay") return app_path+"/diphone/z-ay.wav";
	else if(dipStr =="z-b") return app_path+"/diphone/z-b.wav";  
	else if(dipStr =="z-ch") return app_path+"/diphone/z-ch.wav"; 
	else if(dipStr =="z-d") return app_path+"/diphone/z-d.wav";
	else if(dipStr =="z-dh") return app_path+"/diphone/z-dh.wav";
	else if(dipStr =="z-eh") return app_path+"/diphone/z-eh.wav";
	else if(dipStr =="z-er") return app_path+"/diphone/z-er.wav";
	else if(dipStr =="z-ey") return app_path+"/diphone/z-ey.wav";
	else if(dipStr =="z-f") return app_path+"/diphone/z-f.wav"; 
	else if(dipStr =="z-g") return app_path+"/diphone/z-g.wav";
	else if(dipStr =="z-hh") return app_path+"/diphone/z-hh.wav";
	else if(dipStr =="z-ih") return app_path+"/diphone/z-ih.wav";
	else if(dipStr =="z-iy") return app_path+"/diphone/z-iy.wav";
	else if(dipStr =="z-jh") return app_path+"/diphone/z-jh.wav";
	else if(dipStr =="z-k") return app_path+"/diphone/z-k.wav";
	else if(dipStr =="z-l") return app_path+"/diphone/z-l.wav";
	else if(dipStr =="z-m") return app_path+"/diphone/z-m.wav";
	else if(dipStr =="z-n") return app_path+"/diphone/z-n.wav";
	else if(dipStr =="z-ow") return app_path+"/diphone/z-ow.wav";
	else if(dipStr =="z-oy") return app_path+"/diphone/z-oy.wav";
	else if(dipStr =="z-p") return app_path+"/diphone/z-p.wav";
	else if(dipStr =="z-pau") return app_path+"/diphone/z-pau.wav";
	else if(dipStr =="z-r") return app_path+"/diphone/z-r.wav";
	else if(dipStr =="z-s") return app_path+"/diphone/z-s.wav";
	else if(dipStr =="z-sh") return app_path+"/diphone/z-sh.wav";
	else if(dipStr =="z-t") return app_path+"/diphone/z-t.wav";
	else if(dipStr =="z-th") return app_path+"/diphone/z-th.wav";
	else if(dipStr =="z-uh") return app_path+"/diphone/z-uh.wav";
	else if(dipStr =="z-uw") return app_path+"/diphone/z-uw.wav";
	else if(dipStr =="z-v") return app_path+"/diphone/z-v.wav";
	else if(dipStr =="z-w") return app_path+"/diphone/z-w.wav";
	else if(dipStr =="z-y") return app_path+"/diphone/z-y.wav";
	else if(dipStr =="z-z") return app_path+"/diphone/z-z.wav";
	else if(dipStr =="z-zh") return app_path+"/diphone/z-zh.wav";   

// zh diphones
	else if(dipStr == "zh-aa") return app_path+"/diphone/zh-aa.wav";  
	else if(dipStr == "zh-ae") return app_path+"/diphone/zh-ae.wav";
	else if(dipStr == "zh-ah") return app_path+"/diphone/zh-ah.wav";
	else if(dipStr == "zh-ao") return app_path+"/diphone/zh-ao.wav"; 
	else if(dipStr == "zh-aw") return app_path+"/diphone/zh-aw.wav"; 
	else if(dipStr == "zh-ax") return app_path+"/diphone/zh-ax.wav"; 
	else if(dipStr == "zh-ay") return app_path+"/diphone/zh-ay.wav";
	else if(dipStr == "zh-b") return app_path+"/diphone/zh-b.wav"; 
	else if(dipStr == "zh-ch") return app_path+"/diphone/zh-ch.wav"; 
	else if(dipStr == "zh-d") return app_path+"/diphone/zh-d.wav";
	else if(dipStr == "zh-dh") return app_path+"/diphone/zh-dh.wav";
	else if(dipStr == "zh-eh") return app_path+"/diphone/zh-eh.wav";
	else if(dipStr == "zh-er") return app_path+"/diphone/zh-er.wav";
	else if(dipStr == "zh-ey") return app_path+"/diphone/zh-ey.wav";
	else if(dipStr == "zh-f") return app_path+"/diphone/zh-f.wav"; 
	else if(dipStr == "zh-g") return app_path+"/diphone/zh-g.wav";
	else if(dipStr == "zh-hh") return app_path+"/diphone/zh-hh.wav";
	else if(dipStr == "zh-ih") return app_path+"/diphone/zh-ih.wav";
	else if(dipStr == "zh-iy") return app_path+"/diphone/zh-iy.wav";
	else if(dipStr == "zh-jh") return app_path+"/diphone/zh-jh.wav";
	else if(dipStr == "zh-k") return app_path+"/diphone/zh-k.wav";
	else if(dipStr == "zh-l") return app_path+"/diphone/zh-l.wav";
	else if(dipStr == "zh-m") return app_path+"/diphone/zh-m.wav";
	else if(dipStr == "zh-n") return app_path+"/diphone/zh-n.wav";
	else if(dipStr == "zh-ow") return app_path+"/diphone/zh-ow.wav";
	else if(dipStr == "zh-oy") return app_path+"/diphone/zh-oy.wav";
	else if(dipStr == "zh-p") return app_path+"/diphone/zh-p.wav";
	else if(dipStr == "zh-pau") return app_path+"/diphone/zh-pau.wav";
	else if(dipStr == "zh-r") return app_path+"/diphone/zh-r.wav";
	else if(dipStr == "zh-s") return app_path+"/diphone/zh-s.wav";
	else if(dipStr == "zh-sh") return app_path+"/diphone/zh-sh.wav";
	else if(dipStr == "zh-t") return app_path+"/diphone/zh-t.wav";
	else if(dipStr == "zh-th") return app_path+"/diphone/zh-th.wav";
	else if(dipStr == "zh-uh") return app_path+"/diphone/zh-uh.wav";
	else if(dipStr == "zh-uw") return app_path+"/diphone/zh-uw.wav";
	else if(dipStr == "zh-v") return app_path+"/diphone/zh-v.wav";
	else if(dipStr == "zh-w") return app_path+"/diphone/zh-w.wav";
	else if(dipStr == "zh-y") return app_path+"/diphone/zh-y.wav";
	else if(dipStr == "zh-z") return app_path+"/diphone/zh-z.wav";
	else if(dipStr == "zh-zh") return app_path+"/diphone/zh-zh.wav"; 

	else return ""; 	
}
//---------------------------------------------------------------------

std::vector<std::string> SpeechEngine::get_diphone_list(std::string text) 
{
	Dictionary dict; 
	std::string wordtoken;   
    // constructing stream from the string
    std::stringstream ss(text);
    std::vector<std::string> word_diphones;
    std::vector<std::string> diphone_list;
    //split str into word diphone strings
     while (getline(ss, wordtoken, ' ')) {      
        //std::cout << wordtoken << std::endl; 
        std::string word_dp =dict.word_to_diphones(wordtoken); 
        word_diphones.push_back(word_dp);        
    }
    //create the chain of diphones
    
    for (const auto& itr :word_diphones)
    {
	    // create a stringstream to read each line
	    std::istringstream line(itr);    
	    std::string diphone; // a string to hold each diphone
	    // loop, reading each individual word
	    while (line >> diphone)
	    {
	    diphone_list.push_back(diphone);
	    }
    }
    
    return diphone_list;	
}
//---------------------------------------------------------------------
//----------------------------------------------------------------------
bool SpeechEngine::fileExists(std::string path)
{
	std::ifstream file(path);
	if(!file.is_open()){
	std::cout << "Talk file not found" << std::endl;
	return false;
	}
	else {
	return true;
	}
}

//----------------------------------------------------------------------
void SpeechEngine::play(const char *filename)
{
	std::string cmd = "";
	//cmd = cmd + "pw-play " + filename; //pipewire (not default on Debian xfce)
	cmd = cmd + "aplay " + filename; //back to ALSA
	system(cmd.c_str());
}
//---------------------------------------------------------------------

std::string SpeechEngine::lowercase(std::string str)
{
	std::transform(str.begin(), str.end(), str.begin(), ::tolower);
	//std::cout<<"lowercase text: "<<str<<std::endl;
	return str;
}

std::string SpeechEngine::process_text(std::string str)
{
	str.erase(std::remove(str.begin(), str.end(), ','), str.end());
	str.erase(std::remove(str.begin(), str.end(), '.'), str.end());
	str.erase(std::remove(str.begin(), str.end(), '!'), str.end());
	str.erase(std::remove(str.begin(), str.end(), '?'), str.end());
	str.erase(std::remove(str.begin(), str.end(), '\''), str.end());
	std::transform(str.begin(), str.end(), str.begin(), ::tolower);
	return str;
}

//---------------------------------------------------------------------

void SpeechEngine::speak(std::string str){
	
	std::vector<std::string> diphone_chain; //chain list of individual diphones
	//process input
	
	std::string talkstr = process_text(str);
	//std::cout<<"talkstr: "<<talkstr<<std::endl; (debugging)
	
    diphone_chain =get_diphone_list(talkstr);
    
    //printout diphone chain (debugging)
    //std::cout<<"diphone chain"<< std::endl;  
    //for (int i = 0; i < diphone_chain.size(); i++) {
        //std::cout << diphone_chain[i] << std::endl;        
    //}
      
    
      
   //Must initialise wavout using wavEmpty     
	WavCat wavEmpty(1,16000,16);
	wavEmpty.save( "/tmp/empty.wav" );
    WavCat wavout("/tmp/empty.wav"); //Assign empty wav to concatenation output	 
   
   //iterate through diphone chain and concantenate diphone wav files
   for (std::vector<std::string>::iterator dips = diphone_chain.begin();  dips != diphone_chain.end(); dips++) 
   {          
	   std::string dip_path =get_diphone_path(*dips);     
	   //std::cout << dip_path << std::endl; //printout each diphone path (debugging)	 
	   WavCat tmp(dip_path);
	   wavout=wavout+tmp;  //concatenate wavs     
   }   
	wavout.save("/tmp/merge.wav");
	
	WavAmp wa; //amplification 
	std::string pathin ="/tmp/merge.wav";
	std::string pathout ="/tmp/talk.wav";
	 double gain =3.0;     
	 wa.wavAmp(pathin, pathout,gain);

	if(fileExists("/tmp/talk.wav")) {
    play("/tmp/talk.wav");    
	}	
}
//---------------------------------------------------------------------




