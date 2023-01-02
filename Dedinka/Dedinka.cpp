#include <iostream>
#include <iomanip> //setw
#include <Windows.h>


using namespace std;

bool game_running = true;

int x = 1;
int y = 1;

char map[19][80] = {
	"###############################################################################",
	"#&                                                                            #",
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
	"#                                                                             #",
	"#                                                                             #",
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
		
	}


	return 0;
}