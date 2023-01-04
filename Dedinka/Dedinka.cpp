#include <iostream>
#include <iomanip> //setw
#include <Windows.h>

using namespace std;

bool game_running = true;

int yy = 8;
int xx = 2;

int y = 17;
int x = 69;
bool krcma;
bool obchod;
bool praca;
bool dom;



void pohyb(char Map[13][23])
{	
	
	if (GetAsyncKeyState(VK_DOWN))
	{
		
		int y2 = yy + 1;
		if (Map[y2][xx] == ' ')
		{
			Map[yy][xx] = ' ';
			yy++;
			Map[yy][xx] = '&';
		}
	}
	if (GetAsyncKeyState(VK_UP))
	{
		int y2 = yy - 1;
		if (Map[y2][xx] == ' ')
		{
			Map[yy][xx] = ' ';
			yy--;
			Map[yy][xx] = '&';
		}
	}
	if (GetAsyncKeyState(VK_RIGHT))
	{
		int x2 = xx + 1;
		if (Map[yy][x2] == ' ')
		{
			Map[yy][xx] = ' ';
			xx++;
			Map[yy][xx] = '&';

		}
	}
	if (GetAsyncKeyState(VK_LEFT))
	{
		int x2 = xx - 1;
		if (Map[yy][x2] == ' ')
		{
			Map[yy][xx] = ' ';
			xx--;
			Map[yy][xx] = '&';
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

	char Domov[13][23] = {
	"######################",
	"#                    #",
	"#                    #",
	"#                    #",
	"#                    #",
	"#                    #",
	"#                    #",
	"#                    #",
	"!                    #",
	"#                    #",
	"#                    #",
	"######################" };


	char Praca[13][23] = {
	"######################",
	"#                    #",
	"#                    #",
	"#                    #",
	"#                    #",
	"#                    #",
	"#                    #",
	"#                    #",
	"!                    #",
	"#                    #",
	"#                    #",
	"######################" };

	char Krcma[13][23] = {
	"######################",
	"#                    #",
	"#                    #",
	"#                    #",
	"#                    #",
	"#                    #",
	"#                    #",
	"#                    #",
	"!                    #",
	"#                    #",
	"#                    #",
	"######################" };

	char Obchod[13][23] = {
	"######################",
	"#                    #",
	"#                    #",
	"#                    #",
	"#                    #",
	"#                    #",
	"#                    #",
	"#                    #",
	"!                    #",
	"#                    #",
	"#                    #",
	"######################" };

	


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
			for (int i = 0; i < 13; i++)
			{
				cout << setw(50) << right << Krcma[i] << endl;
			}
			system("pause>nul");
			pohyb(Krcma);
			if (Krcma[8][1] == '&')
			{
				krcma = false;
			}
		}
		while (obchod == true)
		{
			system("CLS");
			for (int i = 0; i < 13; i++)
			{
				cout << setw(50) << right << Obchod[i] << endl;
			}
			system("pause>nul");
			pohyb(Obchod);
			if (Obchod[8][1] == '&')
			{
				obchod = false;
			}
		}
		while (praca == true)
		{
			system("CLS");
			for (int i = 0; i < 13; i++)
			{
				cout << setw(50) << right << Praca[i] << endl;
			}
			system("pause>nul");
			pohyb(Praca);
			if (Praca[8][1] == '&')
			{
				praca = false;
			}
		}
		while (dom == true)
		{
			system("CLS");
			for (int i = 0; i < 13; i++)
			{
				cout << setw(50) << right << Domov[i] << endl;
			}
			system("pause>nul");
			pohyb(Domov);
			if (Domov[8][1] == '&')
			{
				dom = false;
			}
		}
		
	}


	return 0;
}