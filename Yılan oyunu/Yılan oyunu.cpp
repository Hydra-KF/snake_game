#include<iostream>
#include<Windows.h>
#include<conio.h>
#include<ctime>
#include<vector>
#include<fstream>
using namespace std;
char alan[20][80];
int satır[300];
int sutun[300];
void renk(int w) {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), w);
}
void zeus(int x, int y) {
	HANDLE hConsoleOutput;
	COORD cursorPos = { x - 1,y - 1 };

	hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hConsoleOutput, cursorPos);
}
void durdurma()
{
	while (true)
	{
		if (_kbhit())
		{
			char durdur = _getch();
			if (durdur == 'p')
			{
				break;
			}
		}
		Sleep(10);
	}

}
void hareket (int &yg,int &yu) 
{
	for (yg = 0;yg <= yu;yg++)
	{
		zeus(sutun[yg], satır[yg]),
			cout << ' ';
	}

	for (yg = yu;yg > 0;yg--)
	{
		sutun[yg] = sutun[yg - 1];
		satır[yg] = satır[yg - 1];
	}
}
bool kendine_carpma(int &yg,int &yu,bool &bitti) 
{
	for (yg = 1;yg <= yu;yg++)
	{
		if (satır[0] == satır[yg] && sutun[0] == sutun[yg])
		{
			zeus(30, 10);
			cout << ">>GAME OVER<<" << endl;
			Sleep(500);
			bitti = true;
		}
	}
	return bitti;
}
void sus()
{
	char x = 219;
	char y = 30;
	renk(10);
	zeus(86, 2);
	cout << y << " 	" << y << endl;
	zeus(85,3);
	cout << " " << x << "  " << x << endl;
	zeus(84, 4);
	cout << x << x << x << x << x << x << x << x << endl;
	zeus(83, 5);
	cout << x << x << x << x << x << x << x << x << x << x << endl;
	zeus(83, 6);
	cout << x << x << " " << x << x << x << x << " " << x << x << endl;
	zeus(83, 7);
	cout << x << x << x << x << x << x << x << x << x << x << endl;
	zeus(83, 8);
	cout << x << x << x << x << x << x << x << x << x << x << endl;
	zeus(84, 9);
	cout  << x << x << x << x << x << x << x << x << endl;
	zeus(84, 10);
	cout << x << x << x << x << x << x << x << x << endl;
	zeus(84, 11);
	cout << x << x << x << x << x << x << x << x << endl;
	zeus(85, 12);
	cout << x << x << x << x << x << x << x << x << endl;
	zeus(86, 13);
	cout << x << x << x << x << x << x << x << x << endl;
	zeus(87, 14);
	cout << x << x << x << x << x << x << x << x << endl;
	zeus(88, 15);
	cout << x << x << x << x << x << x << x << x << endl;
	zeus(89, 16);
	cout << x << x << x << x << x << x << x << x << endl;
	zeus(90, 17);
	cout << x << x << x << x << x << x << x << x << endl;
	zeus(91, 18);
	cout << x << x << x << x << x << x << x << x << endl;
	zeus(92, 19);
	cout << x << x << x << x << x << x << x << x << endl;
	zeus(93, 20);
	cout << x << x << x << x << x << x << x << x << endl;
	zeus(93, 21);
	cout << x << x << x << x << x << x << x << x << endl;
	zeus(93, 22);
	cout << x << x << x << x << x << x << x << x << endl;
	zeus(92, 23);
	cout << x << x << x << x << x << x << x << x << endl;
	zeus(91, 24);
	cout << x << x << x << x << x << x << x << x << endl;
	zeus(90, 25);
	cout << x << x << x << x << x << x << x << x << endl;
	zeus(89, 26);
	cout << x << x << x << x << x << x << x << x << endl;
	zeus(88, 27);
	cout << x << x << x << x << x << x << x << x << endl;
	zeus(87, 28);
	cout << x << x << x << x << x << x << x << x << endl;
	zeus(56, 23);
	cout << x << x << x << x << x << x << x << x << endl;
	zeus(58, 24);
	cout << x << x << x << x << x << x << x << x << endl;
	zeus(54, 24);
	cout << x << x << x << x << x << x << x << x << endl;
	zeus(52, 25);
	cout << x << x << x << x << x << x << x << x << endl;
	zeus(60, 25);
	cout << x << x << x << x << x << x << x << x << endl;
	zeus(62, 26);
	cout << x << x << x << x << x << x << x << x << endl;
	zeus(50, 26);
	cout << x << x << x << x << x << x << x << x << endl;
	zeus(48, 27);
	cout << x << x << x << x << x << x << x << x << endl;
	zeus(64, 27);
	cout << x << x << x << x << x << x << x << x << endl;
	zeus(66, 28);
	cout << x << x << x << x << x << x << x << x << endl;
	zeus(46, 28);
	cout << x << x << x << x << x << x << x << x << endl;
	zeus(68, 29);
	cout << x << x << x << x << x << x << x << x << endl;
	zeus(44, 29);
	cout << x << x << x << x << x << x << x << x << endl;
	zeus(16, 23);
	cout << x << x << x << x << x << x << x << x << endl;
	zeus(14, 24);
	cout << x << x << x << x << x << x << x << x << endl;
	zeus(18, 24);
	cout << x << x << x << x << x << x << x << x << endl;
	zeus(12, 25);
	cout << x << x << x << x << x << x << x << x << endl;
	zeus(20, 25);
	cout << x << x << x << x << x << x << x << x << endl;
	zeus(10, 26);
	cout << x << x << x << x << x << x << x << x << endl;
	zeus(22, 26);
	cout << x << x << x << x << x << x << x << x << endl;
	zeus(8, 27);
	cout << x << x << x << x << x << x << x << x << endl;
	zeus(24, 27);
	cout << x << x << x << x << x << x << x << x << endl;
	zeus(6, 28);
	cout << x << x << x << x << x << x << x << x << endl;
	zeus(26, 28);
	cout << x << x << x << x << x << x << x << x << endl;
	zeus(4, 29);
	cout << x << x << x << x << x << x << x << x << endl;
	zeus(28, 29);
	cout << x << x << x << x << x << x << x << x << endl;
}
void yem(int& yx, int &yy)
{
	yx = 3 + rand() % 76;
	yy = 3 + rand() % 16;	
}
void alan_olustur(char alan[20][80])
{
	for (int i = 0;i <= 20;i++)
	{
		for (int j = 0;j <= 80 ;j++)
		{
			if (i == 0 || i == 19 || j == 0 || j == 79)
			{
				alan[i][j] = 177;
			}
			else
			{
				alan[i][j] = ' ';
			}

		}
	}
}
void alan_yaz(char alan[20][80])
{
	for (int i = 0;i < 20;i++)
	{
		for (int j = 0;j < 80;j++)
		{
			cout << alan[i][j];
		}
		cout << endl;
	}
}

int main()
{
	int r = 0, yu = 0, yg = 0, k = 12, l = 12, dx = 0, dy = 0, x = 40, y = 10;
	char z = 3, tus, yb = 1, durdur, son_tus = 'x';
	bool bitti = false, tus_alindi = false;
	ifstream rekorOkuma("Yılanoyunu.txt");
	if (rekorOkuma.is_open()) {
		rekorOkuma >> r;
		rekorOkuma.close();
	}
	srand(time_t(NULL));
	renk(3);
	alan_olustur(alan);
	alan_yaz(alan);
	sus();
	zeus(2, 22);
	cout << "High Score: ";
	zeus(x,	 y);
	cout << yb;
	zeus(k, l);
	cout << z;
	do {
		if (_kbhit()&&!(tus_alindi))
		{
			tus = _getch();
			zeus(x, y);
			cout << " ";
			if ((tus == 'w' && son_tus == 's') ||(tus == 's' && son_tus == 'w') ||(tus == 'a' && son_tus == 'd') ||(tus == 'd' && son_tus == 'a'))
			{
				tus = son_tus;
			}
			if (tus == 'w' || tus == 's' || tus == 'a' || tus == 'd'||tus=='p')
			{
				switch (tus)
				{
				case 'w':
					dy = -1;dx = 0; tus_alindi = true; break;
				case 's':
					dy = +1;dx = 0; tus_alindi = true; break;
				case 'd':
					dx = +1;dy = 0; tus_alindi = true; break;
				case 'a':
					dx = -1;dy = 0; tus_alindi = true; break;
				case 'p':
					durdurma(); break;
				}
				son_tus = tus;
			}
		}
		if (dy != 0)
		{
			Sleep(32);
		}
			    zeus(x, y);
				cout << ' ';
				x += dx;
				y += dy;
				if (k == x && l == y)
				{
					yem(k, l);
					while (k == x && l == y) {
						yem(k, l);	
					}
					yu++;
				}		
			if (x > 79)
			{
				x = 2;
			}
			else if (x < 2)
			{
				x = 79;
			}
			if (y > 19)
			{
				y = 2;
			}
			else if (y < 2)
			{
				y = 19;
			}
			satır[0] = y;
			sutun[0] = x;
			for (yg = 0;yg <= yu;yg++)
			{
				if (yg % 2 == 0)
				{
					yb = 5;
				}
				else {
					yb = 4;
				}
				renk(yb);
				zeus(sutun[yg], satır[yg]);
				cout << yb;
			}
			zeus(k, l);
			cout << z;
			kendine_carpma(yg,yu,bitti);
			if (bitti)
			{
				return 0;
			}
			Sleep(60);
			hareket(yg,yu);
			sutun[0] = x;
			satır[0] = y;
			renk(4);
			zeus(2, 21);
			cout << "Score: " << yu << z;
			if (yu > r) {
				r = yu;
				ofstream rekorYaz("Yılanoyunu.txt", ios::trunc);
				if (rekorYaz.is_open()) {
					rekorYaz << r;
					rekorYaz.close();
				}	
			}	
			renk(6);
			zeus(2, 22);
			cout << "High Score: " << r << "  ";

			tus_alindi = false;
	} while (true);		
		system("pause");
	
		return 0;
}














