#include <iostream>
#include <iomanip> //setw
#include <Windows.h>


using namespace std;

bool game_running = true;

int x = 69;
int y = 17;
bool krcma;
bool obchod;
bool praca;
bool dom;

char map[19][80] = {
	"###############################################################################",
	"#                                                                             #",
	"#                            ____________                                     #",
	"#                            #  Obchod  #                                     #",
	"#                            #          #                                     #",
	"#                     _______#          #         _____________________       #",
	"#                    # Krcma #          #         #       Praca       #       #",
	"#                    #  ___  #   ____   #         #        ___        #       #",
	"#                    #__# #__#___#  #___#         #________# #________#       #",
	"#                                                                             #",
	"#                                                                             #",
	"#                                                                             #",
	"#                                                                          ___#",
	"#                                                                         /   #",
	"#                                                                        /____#",
	"#                                                                       /# Dom#",
	"#                                                                        #    #",
	"#                                                                    &   !    #",
	"###############################################################################", };
	
int main()
{
	string title[] = { "                                                                               ",
	"                                                                               ",
	"                                                                               ",
	"                                                                               ",
	"        +++       ++++++++  +++       +  ++      +  +      +     +++           ",
	"        +   +     +         +   +     +  + +     +  +     +     +   +          ",
	"        +    +    +         +    +    +  + +     +  +    +     +     +         ",
	"        +     +   +         +     +   +  +  +    +  +   +      +     +         ",
	"        +      +  +         +      +  +  +  +    +  +  +      +       +        ",
	"        +      +  +++++     +      +  +  +   +   +  + +       +       +        ",
	"        +      +  +         +      +  +  +    +  +  ++        +++++++++        ",
	"        +     +   +         +     +   +  +    +  +  + +       +       +        ",
	"        +    +    +         +    +    +  +     + +  +   +     +       +        ",
	"        +   +     +         +   +     +  +     + +  +    +    +       +        ",
	"        +++       ++++++++  +++       +  +      ++  +      +  +       +        ",
	"                                                                               ",
	"                                                                               ",
	"                                                                               ",
	"                         << Press ENTER to continue >>                         " };



	for (int i = 0; i < 19; i++)
	{
		cout << setw(90) << right << title[i] << endl;
	}

	if (cin.get() == '\n')
	{
		system("CLS");
	}

	while (game_running = true)
	{
		system("CLS");
		for (int i = 0; i < 19; i++)
		{
			cout << setw(90) << right << map[i] << endl;
		}
		system("pause>nul");
		
		if (GetAsyncKeyState(VK_DOWN)) 
		{
			int y2 = y + 1;
			if (map[y2][x] == ' ')
			{
				map[y][x] = ' ';
				y++;
				map[y][x] = '&';
			}
		}
		if (GetAsyncKeyState(VK_UP))
		{
			int y2 = y - 1;
			if (map[y2][x] == ' ')
			{
				map[y][x] = ' ';
				y--;
				map[y][x] = '&';
			}
		}
		if (GetAsyncKeyState(VK_RIGHT))
		{
			int x2 = x + 1;
			if (map[y][x2] == ' ')
			{
				map[y][x] = ' ';
				x++;
				map[y][x] = '&';
			}
		}
		if (GetAsyncKeyState(VK_LEFT))
		{
			int x2 = x - 1;
			if (map[y][x2] == ' ')
			{
				map[y][x] = ' ';
				x--;
				map[y][x] = '&';
			}
		}
		
		if (map[8][25] == '&')
		{
			krcma = true;
		}

		else if (map[8][34] == '&' || map[8][35] == '&')
		{
			obchod = true;
		}

		else if (map[8][60] == '&')
		{
			praca = true;
		}

		else if (map[17][72] == '&')
		{
			dom = true;
		}

		while (krcma == true)
		{
			system("CLS");
			cout << "Krcma";
			system("pause>nul");
		}

		while (obchod == true)
		{
			system("CLS");
			cout << "Obchod";
			system("pause>nul");
		}
		while (praca == true)
		{
			system("CLS");
			cout << "Robota";
			system("pause>nul");
		}
		while (dom == true)
		{
			system("CLS");
			cout << "dom";
			system("pause>nul");
		}
		
	}


	return 0;
}