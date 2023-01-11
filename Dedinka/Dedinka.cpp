#include <iostream>
#include <iomanip> //setw
#include <Windows.h>
#include <fstream>
#include <string>

using namespace std;

bool game_running = true;
int yy = 8;
int xx = 2;
int h = 0;
int y = 17;
int x = 69;
bool krcma;
bool obchod;
bool praca;
bool dom;
bool hostinec;
bool jaskyna;
bool doly;
bool spanie;



bool nakupovanie;
bool ponuka_krcma;
bool vyber_hostinec;


int dukaty;


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

void kupa()
{
	
	
}
void tazenie()
{
	system("pause>nul");
	cout << setw(50) << right << "Gratulujem! Vytazil si diamant. " << endl;
	
}

int main()
{
	ifstream my_file;
	my_file.open("dukaty.txt", ios::in);
	if (my_file) 
	{
		int ch;
		while (1) {
			my_file >> ch;
			if (my_file.eof())
				break;
		}
		dukaty = ch;
	}
	my_file.close();


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
	"                       << Stlac ENTER pre pokracovanie >>                      " };

	string menu[] = { "                                                                               ",
	"                                                                               ",
	"                                                                               ",
	"                                                                               ",
	"                                                                               ",
	"                                                                               ",
	"                                (1) Moderna Doba                               ",
	"                                                                               ",
	"                                (2) Divoky Zapad                               ",
	"                                                                               ",
	"                                                                               ",
	"                                                                               ",
	"                                                                               ",
	"                                                                               ",
	"                                                                               ",
	"                                                                               ",
	"                                                                               ",
	"                       << Vyber 1 alebo 2 pre vyber mapy >>                    ",
	"                                                                               ", };

	char map[19][80] = {
	"###############################################################################",
	"#                                                                             #",
	"#                            ____________                                     #",
	"#                            |  Obchod  |                                     #",
	"#                            |          |                                     #",
	"#                    ________|          |         _____________________       #",
	"#                    | Krcma |          |         |       Praca       |       #",
	"#                    |  ___  |   ____   |         |        ___        |       #",
	"#____________________|__# #__|___#  #___|_________|________# #________|_______#",
	"#                                                                             #",
	"#                                                                             #",
	"#______________________________________________                               #",
	"#                                             |                            ___#",
	"#                                *****        |                           /   #",
	"#                               *******       |                          /____#",
	"#                                *****        |                         /| Dom#",
	"#                                 |0|         |                          |    #",
	"#                                 | |         |                      &   !    #",
	"###############################################################################", };


	char map2[19][80] = {
	"###############################################################################",
	"#         ***                                                   *********     #",
	"#       *******                                             ******    ****    #",
	"#      *********                                         ********______****   #",
	"#       *******             __________________                 .       .      #",
	"#         |0|               #    Hostinec    #                .       .       #",
	"#         | |               #      ____      #               .       .        #",
	"#.........|.|...............#______#  #______#...............       ..........#",
	"#                                                                             #",
	"#                                                                             #",
	"#                                                                             #",
	"#                                                                             #",
	"#                                                                          ___#",
	"#                                                                         /   #",
	"#   _____                                                                /____#",
	"#  /    #                                                               /# Dom#",
	"# /     #                                                                #    #",
	"#/ Doly #                                                            &   !    #",
	"###############################################################################", };

	char Domov[13][23] = {
	"######################",
	"# [::]  #     [.]    #",
	"#                    #",
	"#  bed  #    |___|   #",
	"#########            #",
	"#[] M <=>            #",
	"#              :##  ##",
	"#              :#    #",
	"!              :#   [#",
	"#    *##*      :#b   #",
	"#    *##*      :#    #",
	"######################" };


	char Praca[13][23] = {
	"######################",
	"#     #   M__M__M    #",
	"#                    #",
	"#     ################",
	"#     #   M__M__M    #",
	"#                    #",
	"#     ################",
	"#     #   M__M__M    #",
	"!                    #",
	"######################",
	"#                    #",
	"######################" };

	char Krcma[13][23] = {
	"######################",
	"#  *#*    *#*    *#* #",
	"#                    #",
	"#  o/  *#*           #",
	"# /V   *#*       ****#",
	"#  M   *#*       B   #",
	"#      *#*       A   #",
	"#                R   #",
	"!                ****#",
	"#                    #",
	"#  *#*    *#*    *#* #",
	"######################" };

	char Obchod[13][23] = {
	"######################",
	"#                    #",
	"#   *   []   *   []  #",
	"#   *   []   *   []  #",
	"#   *   []   *   []  #",
	"#   *   []   *   []  #",
	"#   *   []   *   []  #",
	"#   *   []   *   []  #",
	"!                    #",
	"#  <====>    <====>  #",
	"#        LIDL        #",
	"######################" };


	char Jaskyna[13][23] = {
	"######################",
	"##### ########       #",
	"##### #######        #",
	"#####                #",
	"#######              #",
	"########        ######",
	"########       #######",
	"######               #",
	"!                    #",
	"########       #######",
	"######################",
	"######################" };

	char Doly[13][23] = {
	"######################",
	"#                  ###",
	"###  ##########    ###",
	"###* ##             *#",
	"#######   ############",
	"#####           ######",
	"#####   # * #   ######",
	"#####   #####   ###* #",
	"!          ##   ###  #",
	"#########  ##   ###  #",
	"######*    ##        #",
	"######################" };

	char Hostinec[13][23] = {
	"######################",
	"#   O/               #",
	"#  /V    *  *  *  *  #",
	"#   M    #  #  #  #  #",
	"#        *  *  *  *  #",
	"#  *#*               #",
	"#  *#*          *#*  #",
	"#               *#*  #",
	"!                    #",
	"#  ***-***           #",
	"#  *     *  *#*  *#* #",
	"######################" };

	string produkty[] = { "(1) maso  ", "(2) pecivo", "(3) ovocie", "(4) napoj ", " ", "(5) exit  "};

	string napoje[] = { "(1) pivo     ", "(2) rum      ", "(3) mineralka", "(4) kofolka  ", " ", "(5) exit     "};

	string ponuka_hostinec[] = { "(1) konak          ", "(2) whisky         ", "(3) udene koleno   ", "(4) telacie kotlety", " ", "(5) exit           " };

	for (int i = 0; i < 19; i++)
	{
		cout << setw(90) << right << title[i] << endl;
	}

	if (cin.get() == '\n')
	{
		system("CLS");
	}

	for (int i = 0; i < 19; i++)
	{
		cout << setw(90) << right << menu[i] << endl;

	}
	int vyber;
	cin >> vyber;

	if (vyber == 1)
	{
		system("CLS");
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
				if (Krcma[5][16] == '&' || Krcma[6][16] == '&' || Krcma[7][16] == '&')
				{
					ponuka_krcma = true;
					system("CLS");
					for (int i = 0; i < 6; i++)
					{
						cout << setw(50) << right << napoje[i] << endl;
					}
					system("pause>nul");

					while (ponuka_krcma == true)
					{

						int a;
						cin >> a;
						if (a == 1)
						{
							cout << "Kupil si pivo" << endl;
							
						}
						if (a == 2)
						{
							cout << "Kupil si rum" << endl;
							kupa();
						}
						if (a == 3)
						{
							cout << "Kupil si mineralku" << endl;
							kupa();
						}
						if (a == 4)
						{
							cout << "Kupil si kofolku" << endl;
							kupa();
						}
						if (a == 5)
						{
							ponuka_krcma = false;
						}

					}
				}
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
				if (Obchod[9][9] == '&' || Obchod[9][10] == '&' || Obchod[9][11] == '&' || Obchod[9][12] == '&')
				{
					nakupovanie = true;
					system("CLS");
					for (int i = 0; i < 6; i++)
					{
						cout << setw(50) << right << produkty[i] << endl;
					}
					system("pause>nul");
					
					while (nakupovanie == true)
					{
						
						int a;
						cin >> a;
						if (a == 1)
						{
							cout << "Kupil si maso" << endl;
							/*
							Wfile.open("dukaty.txt", ios::in);
							if (Wfile) {
								int ch;
								while (1) {
									Wfile >> ch;
									if (Wfile.eof())
										break;
									ch = ch - 25;
									cout << ch;
								}
							}

							Wfile.close();
							*/
						}
						if (a == 2)
						{
							cout << "Kupil si pecivo" << endl;
							kupa();
						}
						if (a == 3)
						{
							cout << "Kupil si ovocie" << endl;
							kupa();
						}
						if (a == 4)
						{
							cout << "Kupil si napoj" << endl;
							kupa();
						}
						if (a == 5)
						{
							nakupovanie = false;
						}
					
					}
					
				}
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
				if (h == 0)
				{
					if (Praca[2][9] == '&' || Praca[5][9] == '&' || Praca[8][9] == '&')
					{
						system("CLS");
						int odrobene_hodiny;
						int plat = 15;
						cout << " Kolko hodin si prave odrobil? " << endl;
						cin >> odrobene_hodiny;
						if (odrobene_hodiny >= 2 && odrobene_hodiny <= 10)
						{
							cout << "Zarobil si " << odrobene_hodiny * plat << " dukatov" << endl;
							h++;
							
						}
						else
						{
							cout << "Neklam, povedz pravdu!!!" << endl;

						}
						system("pause>nul");
					}
				}
				else if (h != 0)
				{	
					system("CLS");
					cout << setw(50) << right << "Dnes si uz pracoval, chod sa vyspat" << endl;
					system("pause>nul");
					praca = false;
				}
				
				

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
				if (Domov[2][4] == '&')
				{
					spanie = true;
					while (spanie == true)
					{
						cout << setw(60) << right << "Vyspal si sa" << endl;
						if (h == 1)
						{
							h--;
						}
						system("pause>nul");
						Praca[2][9] = ' ';
						Praca[5][9] = ' ';
						Praca[8][9] = ' ';
						spanie = false;

					}
				}

				if (Domov[8][1] == '&')
				{
					dom = false;
				}
			}

		}
	}

	else if (vyber == 2)
	{
		system("CLS");
		while (game_running = true)
		{
			system("CLS");
			for (int i = 0; i < 19; i++)
			{
				cout << setw(90) << right << map2[i] << endl;
			}
			system("pause>nul");

			if (GetAsyncKeyState(VK_DOWN))
			{

				int y2 = y + 1;
				if (map2[y2][x] == ' ')
				{
					map2[y][x] = ' ';
					y++;
					map2[y][x] = '&';
				}
			}
			if (GetAsyncKeyState(VK_UP))
			{
				int y2 = y - 1;
				if (map2[y2][x] == ' ')
				{
					map2[y][x] = ' ';
					y--;
					map2[y][x] = '&';
				}
			}
			if (GetAsyncKeyState(VK_RIGHT))
			{
				int x2 = x + 1;
				if (map2[y][x2] == ' ')
				{
					map2[y][x] = ' ';
					x++;
					map2[y][x] = '&';

				}
			}
			if (GetAsyncKeyState(VK_LEFT))
			{
				int x2 = x - 1;
				if (map2[y][x2] == ' ')
				{
					map2[y][x] = ' ';
					x--;
					map2[y][x] = '&';
				}
			}

			if (map2[7][36] == '&' || map2[7][37] == '&')
			{
				hostinec = true;
			}

			else if (map2[4][65] == '&' || map2[4][66] == '&' || map2[4][67] == '&' || map2[4][68] == '&' || map2[4][69] == '&' || map2[4][70] == '&')
			{
				jaskyna = true;
			}

			else if (map2[15][9] == '&' || map2[16][9] == '&' || map2[17][9] == '&')
			{
				doly = true;
			}

			else if (map2[17][72] == '&')
			{
				dom = true;
			}

			while (hostinec == true)
			{
				system("CLS");
				for (int i = 0; i < 13; i++)
				{
					cout << setw(50) << right << Hostinec[i] << endl;
				}
				system("pause>nul");
				pohyb(Hostinec);
				if (Hostinec[8][5] == '&' || Hostinec[8][6] == '&' || Hostinec[8][7] == '&')
				{
					vyber_hostinec = true;
					system("CLS");
					for (int i = 0; i < 6; i++)
					{
						cout << setw(50) << right << ponuka_hostinec[i] << endl;
					}
					system("pause>nul");

					while (vyber_hostinec == true)
					{

						int a;
						cin >> a;
						if (a == 1)
						{
							cout << "Kupil si konak" << endl;

						}
						if (a == 2)
						{
							cout << "Kupil si whisky" << endl;
							kupa();
						}
						if (a == 3)
						{
							cout << "Kupil si udene koleno" << endl;
							kupa();
						}
						if (a == 4)
						{
							cout << "Kupil si telacie kotlety" << endl;
							kupa();
						}
						if (a == 5)
						{
							vyber_hostinec = false;
						}

					}
					
				}
				if (Hostinec[8][1] == '&')
				{
					hostinec = false;
				}
			}

			while (jaskyna == true)
			{
				system("CLS");
				for (int i = 0; i < 13; i++)
				{
					cout << setw(50) << right << Jaskyna[i] << endl;
				}
				system("pause>nul");
				pohyb(Jaskyna);
				if (Jaskyna[8][1] == '&')
				{
					jaskyna = false;
				}
			}

			while (doly == true)
			{
				system("CLS");
				for (int i = 0; i < 13; i++)
				{
					cout << setw(50) << right << Doly[i] << endl;
				}
				system("pause>nul");
				pohyb(Doly);
				if (h==0)
				{
					if (Doly[2][3] == '&' || Doly[2][4] == '&')
					{
						Doly[3][3] = ' ';

					}
					else if (Doly[3][19] == '&')
					{
						Doly[3][20] = ' ';

					}
					else if (Doly[5][10] == '&')
					{
						Doly[6][10] = ' ';

					}
					else if (Doly[8][19] == '&' || Doly[8][20] == '&')
					{
						Doly[7][19] = ' ';

					}
					else if (Doly[10][7] == '&')
					{
						Doly[10][6] = ' ';

					}

					if ((Doly[3][3] == ' ') && (Doly[3][20] == ' ') && (Doly[6][10] == ' ') && (Doly[7][19] == ' ') && (Doly[10][6] == ' '))
					{
						system("CLS");
						cout << setw(50) << right << "Gratulujem! Pozbieral si vsetky diamanty. +150 dukatov" << endl;
						system("pause>nul");
						h++;
						doly = false;
						yy = 8;
						xx = 2;
					}
				
				}
				else if (h != 0)
				{
					system("CLS");
					cout << setw(50) << right << "Dnes si uz pozbieral vsetky diamanty, chod sa vyspat" << endl;
					system("pause>nul");
					doly = false;
				}
								
				if (Doly[8][1] == '&')
				{
					doly = false;
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
				if (Domov[2][4] == '&')
				{
					spanie = true;
					while (spanie == true)
					{
						cout << setw(60) << right << "Vyspal si sa" << endl;
						if (h == 1)
						{
							h--;
						}
						system("pause>nul");
						Doly[2][3] = ' ';
						Doly[2][4] = ' ';
						Doly[3][19] = ' ';
						Doly[5][10] = ' ';
						Doly[8][19] = ' ';
						Doly[8][20] = ' ';
						Doly[10][7] = ' ';
						Doly[3][3] = '*';
						Doly[3][20] = '*';
						Doly[6][10] = '*';
						Doly[7][19] = '*';
						Doly[10][6] = '*';

						spanie = false;

					}
				}
				if (Domov[8][1] == '&')
				{
					dom = false;
				}
			}


			
		}
	}
	return 0;
}