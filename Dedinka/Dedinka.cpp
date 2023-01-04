#include <iostream>
#include <iomanip> //setw
#include <Windows.h>

using namespace std;

bool game_running = true;

int y = 17;
int x = 69;
bool krcma;
bool obchod;
bool praca;
bool dom;



void pohyb(char Map[19][80])
{	
	
	if (GetAsyncKeyState(VK_DOWN))
	{
		
		int y2 = y + 1;
		if (Map[y2][x] == ' ')
		{
			Map[y][x] = ' ';
			y++;
			Map[y][x] = '&';
		}
	}
	if (GetAsyncKeyState(VK_UP))
	{
		int y2 = y - 1;
		if (Map[y2][x] == ' ')
		{
			Map[y][x] = ' ';
			y--;
			Map[y][x] = '&';
		}
	}
	if (GetAsyncKeyState(VK_RIGHT))
	{
		int x2 = x + 1;
		if (Map[y][x2] == ' ')
		{
			Map[y][x] = ' ';
			x++;
			Map[y][x] = '&';

		}
	}
	if (GetAsyncKeyState(VK_LEFT))
	{
		int x2 = x - 1;
		if (Map[y][x2] == ' ')
		{
			Map[y][x] = ' ';
			x--;
			Map[y][x] = '&';
		}
	}
}


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


	char Krcmap[19][80] = {
	"###############################################################################",
	"#                                                                             #",
	"#                                                                             #",
	"#                        KRCMa                                                #",
	"#                                                                             #",
	"#                                                                             #",
	"#                                                                             #",
	"#                                                                             #",
	"#                                                                             #",
	"#                                                                             #",
	"#                                                                             #",
	"#                                                                             #",
	"#                                                                             #",
	"#                                                                             #",
	"#                                                                             #",
	"#                                                                             #",
	"#                                                                             #",
	"#                                                                             #",
	"###############################################################################", };

	char Obchod[19][80] = {
	"###############################################################################",
	"#                                                                             #",
	"#                                                                             #",
	"#                        Obchod                                               #",
	"#                                                                             #",
	"#                                                                             #",
	"#                                                                             #",
	"#                                                                             #",
	"#                                                                             #",
	"#                                                                             #",
	"#                                                                             #",
	"#                                                                             #",
	"#                                                                             #",
	"#                                                                             #",
	"#                                                                             #",
	"#                                                                             #",
	"#                                                                             #",
	"#                                                                             #",
	"###############################################################################", };

	char Praca[19][80] = {
	"###############################################################################",
	"#                                                                             #",
	"#                                                                             #",
	"#                        Praca                                                #",
	"#                                                                             #",
	"#                                                                             #",
	"#                                                                             #",
	"#                                                                             #",
	"#                                                                             #",
	"#                                                                             #",
	"#                                                                             #",
	"#                                                                             #",
	"#                                                                             #",
	"#                                                                             #",
	"#                                                                             #",
	"#                                                                             #",
	"#                                                                             #",
	"#                                                                             #",
	"###############################################################################", };

	char Domov[19][80] = {
	"###############################################################################",
	"#                                                                             #",
	"#                                                                             #",
	"#                        Domov                                                #",
	"#                                                                             #",
	"#                                                                             #",
	"#                                                                             #",
	"#                                                                             #",
	"#                                                                             #",
	"#                                                                             #",
	"#                                                                             #",
	"#                                                                             #",
	"#                                                                             #",
	"#                                                                             #",
	"#                                                                             #",
	"#                                                                             #",
	"#                                                                             #",
	"#                                                                             #",
	"###############################################################################", };


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
		
		pohyb(map);
		
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
			for (int i = 0; i < 19; i++)
			{
				cout << setw(90) << right << Krcmap[i] << endl;
			}
			system("pause>nul");
			pohyb(Krcmap);
		}
		while (obchod == true)
		{
			system("CLS");
			for (int i = 0; i < 19; i++)
			{
				cout << setw(90) << right << Obchod[i] << endl;
			}
			system("pause>nul");
			pohyb(Obchod);
		}
		while (praca == true)
		{
			system("CLS");
			for (int i = 0; i < 19; i++)
			{
				cout << setw(90) << right << Praca[i] << endl;
			}
			system("pause>nul");
			pohyb(Praca);
		}
		while (dom == true)
		{
			system("CLS");
			for (int i = 0; i < 19; i++)
			{
				cout << setw(90) << right << Domov[i] << endl;
			}
			system("pause>nul");
			pohyb(Domov);
		}
		
	}


	return 0;
}