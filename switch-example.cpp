//switch_2d.cpp

#include <iostream>
#include <sdtio.h>

int main()
{
		int r,c;
		int red, green, blue;
		int val = 0;
		int m[8][8] = {
			{5,5,5,5,5,5,5,5} ,
			{5,0,0,0,0,0,0,0} ,
			{5,0,0,0,0,0,0,0} ,
			{5,0,0,0,0,0,0,0} ,
			{5,0,0,0,0,0,0,0} ,
			{5,0,0,0,0,0,0,0} ,
			{5,0,0,0,0,0,0,0},
			{5,0,0,0,0,0,0,0}
		};
		  red = 0; green = 0; blue = 0;
		  for (r = 0; r < 8; r++){
			for (c = 0; c < 8; c++){
			  val = m[r][c];
				switch ( val ) {
					case 0:
						red = 0; green = 0; blue = 0;
						break;
						case 1:           
							red = 255; green = 0; blue = 0;
							break;
							case 2:            
								red = 0; green = 255; blue = 0;
								break;
								case 3:         
									red = 0; green = 0; blue = 255;
									break;
									case 4:            
										
										break;
					default:            // Note the colon, not a semicolon
						cout<<"Error, bad input, quitting\n";
						break;
					}
					cin.get();
					}
