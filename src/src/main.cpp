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

#include <iostream>

#include "speechengine.h" //speech engine

int main( int argc, char* argv[] )
{
    
    std::cout<<"talkdp is a diphone speech synthesizer"<<std::endl;
    SpeechEngine sengine;
        
    std::cout<<"enter text: ";
    std::string str;    
    std::getline(std::cin, str);     
    std::transform(str.begin(), str.end(), str.begin(), ::tolower);    
    
    sengine.speak(str); 
    
    return 0;
}
