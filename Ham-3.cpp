# include "Thu-vien-3.h"
# include <iomanip>
using namespace std;

//	GIAO DIEN
void Screenload(TREE_VT &t, NODE_NV &p)
{
	gotoxy(30 + 60 + 10, 3);
	cout << "LOADING...";
	for (int i = 1; i <= 100; i++)
	{
		gotoxy(42 + i + 10, 5);
		cout << char(219);
		gotoxy(32 + 60 + 10, 7);
		cout << i << "%";
		if (i > 80 && i < 90)
		{
			Sleep(50);
		}
		else
		{
			Sleep(25);
		}
	}
	gotoxy(30 + 60 + 10, 3);
	cout << "COMPLETE! ";
	Load_VT(t);
	LoadNV(p);
	// chu X
	gotoxy(10 + 36 + 35, 10 + 5);
	cout << char(178);
	gotoxy(11 + 36 + 35, 11 + 5);
	cout << char(178);
	gotoxy(12 + 36 + 35, 12 + 5);
	cout << char(178);
	gotoxy(13 + 36 + 35, 13 + 5);
	cout << char(178);
	gotoxy(14 + 36 + 35, 14 + 5);
	cout << char(178);
	int j = 10;
	for (int i = 14; i >= 10; i--)
	{
		gotoxy(i + 36 + 35, j + 5);
		cout << char(178);
		j++;
	}
	// chu I
	for (int i = 10 + 5; i <= 14 + 5; i++)
	{
		gotoxy(16 + 36 + 35, i);
		cout << char(178);
	}
	// chu N
	for (int i = 10 + 5; i <= 14 + 5; i++)
	{
		gotoxy(18 + 36 + 35, i);
		cout << char(178);
	}
	int h = 10;
	for (int i = 18; i <= 22; i++)
	{
		gotoxy(i + 36 + 35, h + 5);
		cout << char(178);
		h++;
	}
	for (int i = 10 + 5; i <= 14 + 5; i++)
	{
		gotoxy(22 + 36 + 35, i);
		cout  << char(178);
	}
	// chu C
	gotoxy(27 + 36 + 35, 12 + 5);
	cout << char(178);
	gotoxy(28 + 36 + 35, 11 + 5);
	cout << char(178);
	gotoxy(29 + 36 + 35,10 + 5);
	cout << char(178);
	gotoxy(30 + 36 + 35, 10 + 5);
	cout << char(178);
	gotoxy(28 + 36 + 35, 13 + 5);
	cout << char(178);
	gotoxy(29 + 36 + 35, 14 + 5);
	cout << char(178);
	gotoxy(30 + 36 + 35, 14 + 5);
	cout << char(178);
	// chu H
	for (int i = 10 + 5; i <= 14 + 5; i++)
	{
		gotoxy(33 + 36 + 35, i);
		cout << char(178);
	}
	for (int i = 33 + 36; i <= 72; i++)
	{
		gotoxy(i + 35, 12 + 5);
		cout << char(178);
	}
	for (int i = 10; i <= 14; i++)
	{
		gotoxy(36 + 36 + 35, i + 5);
		cout << char(178);
	}
	// chu A
	int k = 10;
	for (int i = 42; i >= 38; i--)
	{
		gotoxy(i + 36 + 35, k + 5);
		cout << char(178);
		k++;
	}
	gotoxy(43 + 36 + 35, 11 + 5);
	cout << char(178);
	gotoxy(44 + 36 + 35, 12 + 5);
	cout << char(178);
	gotoxy(45 + 36 + 35, 13 + 5);
	cout << char(178);
	gotoxy(46 + 36 + 35, 14 + 5);
	cout << char(178);
	gotoxy(41 + 36 + 35, 13 + 5);
	cout << char(178);
	gotoxy(43 + 36 + 35, 13 + 5);
	cout << char(178);
	gotoxy(42 + 36 + 35, 13 + 5);
	cout << char(178);
	// chu O
	gotoxy(47 + 36 + 35, 12 + 5);
	cout << char(178);
	gotoxy(48 + 36 + 35, 11 + 5);
	cout << char(178);
	gotoxy(49 + 36 + 35,10 + 5);
	cout << char(178);
	gotoxy(50 + 36 + 35, 10 + 5);
	cout << char(178);
	gotoxy(51 + 36 + 35, 10 + 5);
	cout << char(178);
	gotoxy(52 + 36 + 35, 11 + 5);
	cout << char(178);
	gotoxy(48 + 36 + 35, 13 + 5);
	cout << char(178);
	gotoxy(49 + 36 + 35, 14 + 5);
	cout << char(178);
	gotoxy(50 + 36 + 35, 14 + 5);
	cout << char(178);
	gotoxy(51 + 36 + 35, 14 + 5);
	cout << char(178);
	gotoxy(52 + 36 + 35, 13 + 5);
	cout << char(178);
	gotoxy(53 + 36 + 35, 12 + 5);
	cout << char(178);
	// !
	for (int i = 10; i <= 12; i++)
	{
		gotoxy(57 + 36 + 35, i + 5);
		cout << char(178);
	}
	gotoxy(57 + 36 + 35, 14 + 5);
	cout << char(178);
	// dau huyen
	gotoxy(43 + 36 + 35, 8 + 5);
	cout << char(178);
	gotoxy(44 + 36 + 35, 9 + 5);
	cout << char(178);
	gotoxy(30 + 36, 30);
	Sleep(1500);
	system("cls");
}
void remove_scrollbar()
{
	//HWND c = GetConsoleWindow();
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO info;
    GetConsoleScreenBufferInfo(handle, &info);
    COORD new_size = 
    {
        info.srWindow.Right - info.srWindow.Left +1,
        info.srWindow.Bottom - info.srWindow.Top + 1
    };
    SetConsoleScreenBufferSize(handle, new_size);
   // SetWindowPos(c , NULL, 1, 1, 0, 0, SWP_NOSIZE|SWP_NOMOVE|SWP_FRAMECHANGED);
}
void resizeConsole(int width, int height)
{
	HWND c = GetConsoleWindow();
	DWORD style = GetWindowLong(c , GWL_STYLE);
	RECT r;
	COORD s={width,height};
	GetWindowRect(c, &r);
	MoveWindow(c, 1, 1, width, height, TRUE);
	style &= ~WS_MAXIMIZEBOX ;
	SetWindowLong(c , GWL_STYLE, style);
	SetWindowPos(c , NULL, 1, 1, width, height, SWP_NOSIZE|SWP_NOMOVE|SWP_FRAMECHANGED);
	//SetConsoleScreenBufferSize(c,s);

}
void gotoxy(int x, int y)
{
  static HANDLE h = NULL;  
  if(!h)
    h = GetStdHandle(STD_OUTPUT_HANDLE);
  COORD c = { x, y };  
  SetConsoleCursorPosition(h,c);
}

int getx()
{
	CONSOLE_SCREEN_BUFFER_INFO csbi;
	if (GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi))
		return csbi.dwCursorPosition.X;
	return -1;
}

int gety()
{
	CONSOLE_SCREEN_BUFFER_INFO csbi;
	if (GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi))
		return csbi.dwCursorPosition.Y;
	return -1;
}

void TextColor(int color)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void Ve_Giao_Dien()
{
	TextColor(MAUVIENKHUNG);
	// ve duong ben trai
	for (int i = 1; i < HEIGHT; i++)
	{
		gotoxy(1, i);
		cout << char(221);
	}
	// ve duong tren
	for (int i = 1; i < WIDTH; i++)
	{
		gotoxy(i, 0);
		cout << char(219);
	}
	for (int i = 1; i < WIDTH - 2; i++)
	{
		gotoxy(i + 1, 3);
		cout << char(205);
	}
	// ve duong duoi
	for (int i = 1; i < WIDTH; i++)
	{
		gotoxy(i, HEIGHT);
		cout << char(219);
	}	
	for (int i = 1; i < WIDTH - 2; i++)
	{
		gotoxy(i + 1, HEIGHT - 2);
		cout << char(205);
	}
	// ve duong ben phai
	for (int i = 0; i <= HEIGHT; i++)
	{
		gotoxy(WIDTH, i);
		cout << char(221);
	}
}
void VeButton(int rong, int posx, int posy, string source, int colorBT, int colorTEXT, int dai)
{
	int len = source.length();
	if(dai == 0)
		dai = len + 6;
	for(int i = 0; i < rong; i++)
	{
		for(int j = 0; j < dai; j++)
		{
			TextColor(colorBT);
			gotoxy(posx + j, posy + i);
			cout << char(219);
		}
	}
	TextColor(colorTEXT);
	gotoxy(posx - len / 2 + dai / 2, posy + round(rong / 2));
	cout << source;
}
void XoaButton(int rong, int posx, int posy, string source, int colorBT, int colorTEXT, int dai)
{
	int len = source.length();
	if(dai == 0)
		dai = len + 6;
	for(int i = 0; i < rong; i++)
	{
		for(int j = 0; j < dai; j++)
		{
			TextColor(MAU_CONSOLE);
			gotoxy(posx + j, posy + i);
			cout << " ";
		}
	}
}
void VeKhung(int rong, int posx, int posy, int dai, string source)
{
	int len = source.length();
	if(dai == 0)
		dai = len + 2;	
	for(int i = 0; i < dai; i++) // top
	{
		gotoxy(posx + i, posy);
		cout << char(196);
	}
	gotoxy(posx, posy);
	cout << char(218); // top-left
	gotoxy(posx + dai, posy);
	cout << char(191); // top-right
	for(int i = 1; i <= rong; i++) // right
	{
		gotoxy(posx + dai, posy + i);
		cout << char(179);
	}	
	for(int i = 0; i < dai; i++) // bot
	{
		gotoxy(posx + i, posy + rong);
		cout << char(196);
	}
	gotoxy(posx + dai, posy + rong);
	cout << char(217);	// bot-right	
	for(int i = 1; i <= rong; i++) // left
	{
		gotoxy(posx, posy + i);
		cout << char(179);
	}
	gotoxy(posx, posy + rong);
	cout << char(192); // bot-left
	gotoxy(posx - len / 2 + dai / 2, posy + round(rong / 2));
	cout << source;
}
void XoaKhung(int rong, int posx, int posy, int dai, string source)
{
	int len = source.length();
	if(dai == 0)
		dai = len + 2;	
	for(int i = 0; i < dai; i++) // top
	{
		gotoxy(posx + i, posy);
		cout << " ";
	}
	gotoxy(posx, posy);
	cout << " "; // top-left
	gotoxy(posx + dai, posy);
	cout << " "; // top-right
	for(int i = 1; i <= rong; i++) // right
	{
		gotoxy(posx + dai, posy + i);
		cout << " ";
	}	
	for(int i = 0; i < dai; i++) // bot
	{
		gotoxy(posx + i, posy + rong);
		cout << " ";
	}
	gotoxy(posx + dai, posy + rong);
	cout << " ";	// bot-right	
	for(int i = 1; i <= rong; i++) // left
	{
		gotoxy(posx, posy + i);
		cout << " ";
	}
	gotoxy(posx, posy + rong);
	cout << " "; // bot-left
	gotoxy(posx - len / 2 + dai / 2, posy + round(rong / 2));
	cout << " ";
}
void VeBang(int rong, int dai, int colump1, int colump2, int colump3, int colump4, int colump5, int posx, int posy)
{
	if(posx == 0 || posy == 0)
	{
		posx = X_VT;
		posy = Y_VT;
	}
	VeKhung(rong,posx, posy, dai);
	for(int v = 0; v < dai - 1; v++)
	{
		gotoxy(posx + 1 + v, posy + 2);
		cout << char(196);
	}
	for(int v = 0; v < rong - 1; v++) // colump 1 
	{
		gotoxy(posx + colump1, posy + v + 1);
		cout << char(179);
	}
	gotoxy(posx + colump1, posy + 2);
	cout << char(197);
	for(int v = 0; v < rong - 1; v++) // colump 2 
	{
		gotoxy(posx + colump2, posy + v + 1);
		cout << char(179);
	}
	gotoxy(posx + colump2, posy + 2);
	cout << char(197);
	for(int v = 0; v < rong - 1; v++) // colump 3
	{
		gotoxy(posx + colump3, posy + v + 1);
		cout << char(179);
	}
	gotoxy(posx + colump3, posy + 2);
	cout << char(197);
	for(int v = 0; v < rong - 1; v++) // colump 4
	{
		gotoxy(posx + colump4, posy + v + 1);
		cout << char(179);
	}
	gotoxy(posx + colump4, posy + 2);
	cout << char(197);
	if(colump5 != 0)
	{
		for(int v = 0; v < rong - 1; v++) // colump 5
		{
			gotoxy(posx + colump5, posy + v + 1);
			cout << char(179);
		}
		gotoxy(posx + colump5, posy + 2);
		cout << char(197);
	}
}
void VeBangNotif(int rong, int dai, int posx, int posy)
{
	for(int i = 0; i < dai; i++) // top
	{
		gotoxy(posx + i, posy);
		cout << char(196);
	}
	gotoxy(posx, posy);
	cout << char(218); // top-left
	gotoxy(posx + dai, posy);
	cout << char(191); // top-right
	for(int i = 1; i <= rong; i++) // right
	{
		gotoxy(posx + dai, posy + i);
		cout << char(179);
	}	
	for(int i = 0; i < dai; i++) // bot
	{
		gotoxy(posx + i, posy + rong);
		cout << char(196);
	}
	gotoxy(posx + dai, posy + rong);
	cout << char(217);	// bot-right	
	for(int i = 1; i <= rong; i++) // left
	{
		gotoxy(posx, posy + i);
		cout << char(179);
	}
	gotoxy(posx, posy + rong);
	cout << char(192); // bot-left
	gotoxy(posx, posy - 1);
	TextColor(MAUNOTIF);
	cout << "THONG BAO";
}
void VeLine(int dai, int posx, int posy)
{
	for(int i = 0; i < dai; i++)
	{
		gotoxy(posx + i, posy);
		cout << char(196);
	}
}

//	MENU
string title = "CAU TRUC DU LIEU VA GIAI THUAT";
void inMenu(TREE_VT t, NODE_NV p, LIST_HD l)
{
	system("cls");
	TextColor(MAU_TITLE);
	gotoxy(X_VT + 55, Y_VT + 15);
	cout << "   ____                      _            __      __  _______    _______           ";
	TextColor(MAU_TITLE);
	gotoxy(X_VT + 55, Y_VT + 16);
	cout << "  / __ \\                    | |           \\ \\    / / |__   __|  |__   __|          ";
	TextColor(MAU_TITLE);
	gotoxy(X_VT + 55, Y_VT + 17);
	cout << " | |  | |_   _  __ _ _ __   | |    _   _   \\ \\  / / __ _| |        | |  _   _      ";
	TextColor(MAU_TITLE);
	gotoxy(X_VT + 55, Y_VT + 18);
	cout << " | |  | | | | |/ _` | '_ \\  | |   | | | |   \\ \\/ / / _` | |        | | | | | |     ";
	TextColor(MAU_TITLE);
	gotoxy(X_VT + 55, Y_VT + 19);
	cout << " | |__| | |_| | (_| | | | | | |___| |_| |    \\  / | (_| | |        | | | |_| |     ";
	TextColor(MAU_TITLE);
	gotoxy(X_VT + 55, Y_VT + 20);
	cout << "  \\___\\_\\\\__,_|\\__,_|_| |_| |______\\__, |     \\/   \\__,_|_|        |_|  \\__,_|     ";
	TextColor(MAU_TITLE);
	gotoxy(X_VT + 55, Y_VT + 21);
	cout << "                                     _| |";
	TextColor(MAU_TITLE);
	gotoxy(X_VT + 55, Y_VT + 22);
	cout << "                                    /_ _|";
	VeKhung(3, X_VT + 75, Y_VT + 25, 40);
	gotoxy(X_VT + 88, Y_VT + 25);
	cout << "Ho, ten va MSSV";
	gotoxy(X_VT + 80, Y_VT + 26);
	cout << "LAM HOAI PHU      - N17DCCN130";
	gotoxy(X_VT + 80, Y_VT + 27);
	cout << "LE GIA BAO PHU    - N17DCCN131";
	gotoxy((WIDTH / 2 - title.length() / 2), Y_TITLE);
	TextColor(MAU_TITLE);
	cout << title;
	//in menu ra man hinh
	Ve_Giao_Dien();
	int posxBT = X_VT + 35,
		posyBT = Y_VT + 8;
	string *itemBT = new string[4];
	itemBT[0] = "QUAN LY DANH SACH VAT TU";
	itemBT[1] = "QUAN LY DANH SACH NHAN VIEN";
	itemBT[2] = "QUAN LY HOA DON";
	itemBT[3] = "THOAT";
	gotoxy(X_STTBAR, Y_STTBAR);
	TextColor(MAU_STTBAR);
	cout << "HOT KEY: ENTER: Chon";
	VeButton(3, posxBT, posyBT, itemBT[0], MAUNENBT_NSL, MAUTEXTBT_NSL); // QLVT
	VeButton(3, posxBT + 35, posyBT, itemBT[1], MAUNENBT_NSL, MAUTEXTBT_NSL); // QLNV
	VeButton(3, posxBT + 73, posyBT, itemBT[2], MAUNENBT_NSL, MAUTEXTBT_NSL); // QLHD
	VeButton(3, posxBT + 99, posyBT, itemBT[3], MAUNENBT_NSL, MAUTEXTBT_NSL); // THOAT
	TextColor(MAU_CONSOLE);
	int line1 = -1;
	bool exit = false;
	while(!exit)
	{
		char key = _getch();
		TextColor(MAU_CONSOLE);
			if(key == RIGHT)
			{
				line1++;
				if(line1 >= 4)
					line1 = 0;		
				if(line1 == 0)
				{
					VeButton(3, posxBT, posyBT, itemBT[0], MAUNENBT_SL, MAUTEXTBT_SL); // QLVT
					VeButton(3, posxBT + 35, posyBT, itemBT[1], MAUNENBT_NSL, MAUTEXTBT_NSL); // QLNV
					VeButton(3, posxBT + 73, posyBT, itemBT[2], MAUNENBT_NSL, MAUTEXTBT_NSL); // QLHD
					VeButton(3, posxBT + 99, posyBT, itemBT[3], MAUNENBT_NSL, MAUTEXTBT_NSL); // THOAT
				}
				else if(line1 == 1)
				{
					VeButton(3, posxBT, posyBT, itemBT[0], MAUNENBT_NSL, MAUTEXTBT_NSL); // QLVT
					VeButton(3, posxBT + 35, posyBT, itemBT[1], MAUNENBT_SL, MAUTEXTBT_SL); // QLNV
					VeButton(3, posxBT + 73, posyBT, itemBT[2], MAUNENBT_NSL, MAUTEXTBT_NSL); // QLHD
					VeButton(3, posxBT + 99, posyBT, itemBT[3], MAUNENBT_NSL, MAUTEXTBT_NSL); // THOAT
				}
				else if(line1 == 2)
				{
					VeButton(3, posxBT, posyBT, itemBT[0], MAUNENBT_NSL, MAUTEXTBT_NSL); // QLVT
					VeButton(3, posxBT + 35, posyBT, itemBT[1], MAUNENBT_NSL, MAUTEXTBT_NSL); // QLNV
					VeButton(3, posxBT + 73, posyBT, itemBT[2], MAUNENBT_SL, MAUTEXTBT_SL); // QLHD
					VeButton(3, posxBT + 99, posyBT, itemBT[3], MAUNENBT_NSL, MAUTEXTBT_NSL); // THOAT
				}
				else if(line1 == 3)
				{
					VeButton(3, posxBT, posyBT, itemBT[0], MAUNENBT_NSL, MAUTEXTBT_NSL); // QLVT
					VeButton(3, posxBT + 35, posyBT, itemBT[1], MAUNENBT_NSL, MAUTEXTBT_NSL); // QLNV
					VeButton(3, posxBT + 73, posyBT, itemBT[2], MAUNENBT_NSL, MAUTEXTBT_NSL); // QLHD
					VeButton(3, posxBT + 99, posyBT, itemBT[3], MAUNENBT_SL, MAUTEXTBT_SL); // THOAT
				}			
			}
			if(key == LEFT)
			{
				line1--;
				if(line1 <= -1)
					line1 = 3;
				if(line1 == 0)
				{
					VeButton(3, posxBT, posyBT, itemBT[0], MAUNENBT_SL, MAUTEXTBT_SL); // QLVT
					VeButton(3, posxBT + 35, posyBT, itemBT[1], MAUNENBT_NSL, MAUTEXTBT_NSL); // QLNV
					VeButton(3, posxBT + 73, posyBT, itemBT[2], MAUNENBT_NSL, MAUTEXTBT_NSL); // QLHD
					VeButton(3, posxBT + 99, posyBT, itemBT[3], MAUNENBT_NSL, MAUTEXTBT_NSL); // THOAT
				}
				else if(line1 == 1)
				{
					VeButton(3, posxBT, posyBT, itemBT[0], MAUNENBT_NSL, MAUTEXTBT_NSL); // QLVT
					VeButton(3, posxBT + 35, posyBT, itemBT[1], MAUNENBT_SL, MAUTEXTBT_SL); // QLNV
					VeButton(3, posxBT + 73, posyBT, itemBT[2], MAUNENBT_NSL, MAUTEXTBT_NSL); // QLHD
					VeButton(3, posxBT + 99, posyBT, itemBT[3], MAUNENBT_NSL, MAUTEXTBT_NSL); // THOAT
				}
				else if(line1 == 2)
				{
					VeButton(3, posxBT, posyBT, itemBT[0], MAUNENBT_NSL, MAUTEXTBT_NSL); // QLVT
					VeButton(3, posxBT + 35, posyBT, itemBT[1], MAUNENBT_NSL, MAUTEXTBT_NSL); // QLNV
					VeButton(3, posxBT + 73, posyBT, itemBT[2], MAUNENBT_SL, MAUTEXTBT_SL); // QLHD
					VeButton(3, posxBT + 99, posyBT, itemBT[3], MAUNENBT_NSL, MAUTEXTBT_NSL); // THOAT
				}
				else if(line1 == 3)
				{
					VeButton(3, posxBT, posyBT, itemBT[0], MAUNENBT_NSL, MAUTEXTBT_NSL); // QLVT
					VeButton(3, posxBT + 35, posyBT, itemBT[1], MAUNENBT_NSL, MAUTEXTBT_NSL); // QLNV
					VeButton(3, posxBT + 73, posyBT, itemBT[2], MAUNENBT_NSL, MAUTEXTBT_NSL); // QLHD
					VeButton(3, posxBT + 99, posyBT, itemBT[3], MAUNENBT_SL, MAUTEXTBT_SL); // THOAT
				}
				
				
			}
			if(key == ENTER)
			{
				switch(line1)
				{
					case 0:
						{
							system("cls");
							gotoxy((WIDTH / 2 - title.length() / 2), Y_TITLE);
							TextColor(MAU_TITLE);
							cout << itemBT[0];
							QLVT(t, l);
							Save_VT(t);
							inMenu(t, p, l);
							break;
						}
					case 1:
						{
							system("cls");
							gotoxy((WIDTH / 2 - title.length() / 2), Y_TITLE);
							TextColor(MAU_TITLE);
							cout << itemBT[1];
							QLNV(p);
							Save_NV(p);
							inMenu(t, p, l);
							break;
						}
					case 2:
						{
							system("cls");
							gotoxy((WIDTH / 2 - title.length() / 2), Y_TITLE);
							TextColor(MAU_TITLE);
							cout << itemBT[2];
							QLHD(l, t, p);
							SaveHD(l, p);
							inMenu(t, p, l);
							break;
						}
					case 3:
						{
							system("cls");
							int line = 0, dem = 0;
							string *end = new string[2];
							end[0] = "Co";
							end[1] = "khong";
							VeKhung(10, 80, 4, 49);
							gotoxy(87, 5);
							cout << "Ban co muon thoat chuong trinh khong?";
							VeButton(1,105,7,end[1],MAUNENBT_NSL,MAUTEXTBT_NSL);
							VeButton(1,90,7,end[0],MAUNENBT_SL,MAUTEXTBT_SL);
							while(!exit)
							{
								char key1 = _getch();
								if (key1 == LEFT)
								{
									line--;
									if (line == -1)
									{
										line = 0;
									}
									VeButton(1,105,7,end[1],MAUNENBT_NSL,MAUTEXTBT_NSL);
									VeButton(1,90,7,end[0],MAUNENBT_SL,MAUTEXTBT_SL);
									TextColor(MAU_CONSOLE);
								}
								if(key1 == RIGHT)
								{
									line++;
									if (line == 2)
									{
										line = 1;
									}
									VeButton(1,90,7,end[0],MAUNENBT_NSL,MAUTEXTBT_NSL);
									VeButton(1,105,7,end[1],MAUNENBT_SL,MAUTEXTBT_SL);
									TextColor(MAU_CONSOLE);
								}
								TextColor(MAU_CONSOLE);
								if (key1 == ENTER)
								{
									if (line == 0)
									{
										dem = 1;
										break;
									}
									if(line == 1)
									{
										dem = 2;
										break;
									}
								}
							}
							if (dem == 1)
							{
								exit = true;
								gotoxy(90, 10);
								cout << "Nhan phim bat ki de thoat!"; 
								break;
							}
							if (dem == 2)
							{
								system("cls");
								inMenu(t, p, l);
							}
							break;
						}
				}
				break;
			}
	}
}

void BackToMenu()
{
	system("cls");
	Ve_Giao_Dien();
	gotoxy((WIDTH / 2 - title.length() / 2), Y_TITLE);
	TextColor(MAU_TITLE);
	cout << title;
}

//	HAM XU LY
void Upper(string s)
{
	for(int i = 0; i < s.length(); i++)
	{
		s[0] = toupper(s[0]);
		if (s[i] == ' ' && s[i+1] != ' ')
		{
			s[i+1] = toupper(s[i+1]);
		}
	}
	cout << s;
}

void docsonguyen(int n)
{
	string So[10] = {"khong ", "mot ", "hai ", "ba ", "bon ", "nam ", "sau ", "bay ", "tam ", "chin "};
	string Hang[11] = {"", "muoi ", "tram ", "ngan ", "muoi ngan ", "tram ngan ", "trieu ", "muoi trieu ", "tram trieu ", "ty ", ""};
	int Num[11];
	int a = 0;
	int b = 0;
	int c = n;
	int j;
	while (c > 0)
	{
		Num[b] = c % 10;
		a++;
		b++;
		c = c / 10;
	}
	for (int i = a - 1; i >= 0; i--)
	{
		if (Num[i - 1] != 0 && Num[i] == 0 && Num[i + 1] != 0 && i != 3)
		{
			Hang[i] = "le ";
			So[Num[i]] = "";
		}
		if (Num[i - 1] == 0 && Num[i] == 0 /*&& Num[0] != 0*/)
		{
			So[Num[i]] = So[Num[i - 1]] = "";
			Hang[i] = Hang[i - 1] = "";
			//break;
		}
//		if (Num[i - 1] == 0 && Num[i] == 0 && Num[0] == 0)
//		{
//			break;
//		}
		if (Num[i + 1] != 0 && Num[i] == 5 && i != a - 1 && Num[0] == 5)
		{
			So[Num[i]] = "lam ";
		}
		if (Num[i + 1] != 0 && Num[i] == 5 && a >= 3 && Num[i - 1] == 5) 
		{
			So[Num[i]] = "nam ";
		}
		if (i == a - 1 && a == 2)
		{
			if (Num[a - 1] == 1)
			{
				So[Num[i]] = "";
			}
		}
		if (Num[i-1] == 1)
		{
			So[Num[i-1]] == "mot ";
		}
		if (i == 5)
		{
			if (Num[3] != 0)
			{
				Hang[i] = "tram ";
			}
			if (Num[i] == 5)
			{
				So[Num[i]] = "nam ";
			}
		}
		if (i == 4)
		{
			if (Num[i - 1] != 0)
			{
				Hang[i] = "muoi ";
			}
			if (Num[i] == 0 && Num[i-1] != 0)
			{
				Hang[i] = "le ";
				So[Num[i]] == "";
			}
		}
		if (Num[6] == 0)
		{
			So[Num[6]] = "";
		}
		if (a >= 4 && i == 2)
		{
			if (Num[i] == 0)
			{
				So[Num[i]] = "khong ";
				Hang[i] = "tram ";
			}
		}
//		if (i == a - 1)
//		{
//			if(a != 2 || a!= 7 || a != 10)
//			{
//				if (Num[i] == 1)
//				{
//					So[Num[i]] = "";
//					Hang[i] = "muoi ";
//				}
//			}
//		}
		Upper(So[Num[i]]);
		Upper(Hang[i]);
	}
}
char *STR_to_Char(string str)
{
	char *converted;
	int len = str.length();
	converted = new char[len];
	for(int i = 0; i < len; i++)
	{
		*(converted + i) = str[i];
	}
	converted[len] = '\0';
	return converted;
}

void NhapCHUOISO(char *variable, char type, char &key, int len)
{
	int MaxNhap = len;
	if(MaxNhap == 0)
		MaxNhap = MAX_INPUT;
	rewind(stdin);
	InputSTR Nhap;
	Nhap.n = strlen(variable);
	for(int i = 0; i < Nhap.n; i++)
	{
		Nhap.Key[i] = new char;
		*Nhap.Key[i] = variable[i];
	}
	while(true)
	{
			char c = _getch();
			if(!kbhit() && !(!((int)c >= 65 && (int)c <= 90) && !((int)c >= 97 && (int)c <= 122) && c != '-' && !((int) c >= 48 && (int)c <= 57)) && Nhap.n < MaxNhap && c != -32 && c != F7 && c != F8 && c != F9 && c != F10)
			{
				if(Nhap.n > 0 && *Nhap.Key[Nhap.n - 1] == '-' && c == '-')
				{
					continue;
				}
				if(!(Nhap.n == 0 && c == '-') && !(Nhap.n == 0 && c >= 48 && c <= 57))
				{
					if(type == 'U')
						c = toupper(c);
					else if (type == 'L')
						c = tolower(c);
					Nhap.Key[Nhap.n] = new char;
					cout << c;
					*Nhap.Key[Nhap.n] = c;
					Nhap.n++;
				}
			}
			if((c == '\r' || c == -32 || c == 27 || c == 13 || c == 0))
			{
				if(Nhap.n > 0 && *Nhap.Key[Nhap.n - 1] == '-')
				{
					gotoxy(getx() - 1, gety());
					cout << " ";
					gotoxy(getx() - 1, gety());
					if(Nhap.n > 0)
					{
						Nhap.n--;
					}
				}	
				if(c == -32)
				{
					c = _getch();
					if(c == 72) key = UP;
					if(c == 80) key = DOWN;
					//if(c == 75) key = LEFT;
					if(c == 77) key = RIGHT;
					break;
				}	
				if(c == 13) key = ENTER;		
				if(c == 27) key = ESC;
				if(c == 0)
				{
					c = _getch();
					if(c == 68) key = F10;
					if(c == 60) key = F2;
					if (c == 65)
					{
						key = F7;
					}
					if (c == 67)
					{
						key = F9;
					}
				}
				break;
			}
			if(c == BACKSPACE && Nhap.n > 0)
			{
				gotoxy(getx() - 1, gety());
				cout << " ";
				gotoxy(getx() - 1, gety());
				Nhap.n--;
			}
					
	}
	for(int i = 0; i < Nhap.n; i++)
	{
		variable[i] = *Nhap.Key[i];
	}
	variable[Nhap.n] = '\0';
}

void NhapCHUOI(char *variable, char &key, int len)
{
	int MaxNhap = len;
	if(MaxNhap == 0) 
		MaxNhap = MAX_INPUT;
	rewind(stdin);
	InputSTR Nhap;	
	Nhap.n = strlen(variable);
	for(int i = 0; i < Nhap.n; i++)
	{
		Nhap.Key[i] = new char;
		*Nhap.Key[i] = variable[i];
	}
	while(true)
	{
		if(kbhit())
		{
			char c = _getch();
			if(!kbhit() && !(!((int)c >= 65 && (int)c <= 90) && !((int)c >= 97 && (int)c <= 122) && c != ' ') && Nhap.n < MaxNhap && c != -32 && c != F7 && c != F8 && c != F9 && c != F10)
			{
				if(Nhap.n > 0 && *Nhap.Key[Nhap.n - 1] == ' ' && c == ' ')
				{
					continue;
				}
				if(!(Nhap.n == 0 && c == ' ') && !(Nhap.n == 0 && c >= 48 && c <= 57))
				{
					if(Nhap.n == 0)
						c = toupper(c);
					else
					{
						if(*Nhap.Key[Nhap.n - 1] == ' ')
							c = toupper(c);
						else 
							c = tolower(c);
					}
					Nhap.Key[Nhap.n] = new char;
					cout << c;
					*Nhap.Key[Nhap.n] = c;
					Nhap.n++;
				}
			}
			if((c == '\r' || c == -32  || c == 27 || c == 13 || c == 0))
			{
				if(Nhap.n > 0 && *Nhap.Key[Nhap.n - 1] == ' ')
				{
					gotoxy(getx() - 1, gety());
					cout << " ";
					gotoxy(getx() - 1, gety());
					if(Nhap.n > 0)
					{
						Nhap.n--;
					}
				}	
				if(c == -32)
				{
					c = _getch();
					if(c == 72) key = UP;
					if(c == 80) key = DOWN;
					if(c == 75) key = LEFT;
					if(c == 77) key = RIGHT;
					break;
				}
				if(c == 13) key = ENTER;				
				if(c == 27) key = ESC;
				if(c == 0)
				{
					c = _getch();
					if(c == 68) key = F10;
					if(c == 60) key = F2;
					if (c == 65)
					{
						key = F7;
					}
					if (c == 67)
					{
						key = F9;
					}
				}
				break;
			}
			if(c == BACKSPACE && Nhap.n > 0)
			{
				gotoxy(getx() - 1, gety());
				cout << " ";
				gotoxy(getx() - 1, gety());
				Nhap.n--;
			}
		}
			
	}
	for(int i = 0; i < Nhap.n; i++)
	{
		variable[i] = *Nhap.Key[i];
	}
	variable[Nhap.n] = '\0';
}
void NhapCHUOI_SO(char *variable, char &key, int len)
{
	int MaxNhap = len;
	if(MaxNhap == 0) 
		MaxNhap = MAX_INPUT;
	rewind(stdin);
	InputSTR Nhap;	
	Nhap.n = strlen(variable);
	for(int i = 0; i < Nhap.n; i++)
	{
		Nhap.Key[i] = new char;
		*Nhap.Key[i] = variable[i];
	}
	while(true)
	{
		if(kbhit())
		{
			char c = _getch();
			if(!kbhit() && !(!((int)c >= 65 && (int)c <= 90) && !((int)c >= 97 && (int)c <= 122) && c != ' ' && !((int) c >= 48 && (int)c <= 57)) && Nhap.n < MaxNhap && c != -32 && c != F7 && c != F8 && c != F9 && c != F10)
			{
				if(Nhap.n > 0 && *Nhap.Key[Nhap.n - 1] == ' ' && c == ' ')
				{
					continue;
				}
				if(!(Nhap.n == 0 && c == ' ') && !(Nhap.n == 0 && c >= 48 && c <= 57))
				{
					if(Nhap.n == 0)
						c = toupper(c);
					else
					{
						if(*Nhap.Key[Nhap.n - 1] == ' ')
							c = toupper(c);
						else 
							c = tolower(c);
					}
					Nhap.Key[Nhap.n] = new char;
					cout << c;
					*Nhap.Key[Nhap.n] = c;
					Nhap.n++;
				}
			}
			if((c == '\r' || c == -32  || c == 27 || c == 13 || c == 0))
			{
				if(Nhap.n > 0 && *Nhap.Key[Nhap.n - 1] == ' ')
				{
					gotoxy(getx() - 1, gety());
					cout << " ";
					gotoxy(getx() - 1, gety());
					if(Nhap.n > 0)
					{
						Nhap.n--;
					}
				}	
				if(c == -32)
				{
					c = _getch();
					if(c == 72) key = UP;
					if(c == 80) key = DOWN;
					if(c == 75) key = LEFT;
					if(c == 77) key = RIGHT;
					break;
				}
				if(c == 13) key = ENTER;				
				if(c == 27) key = ESC;
				if(c == 0)
				{
					c = _getch();
					if(c == 68) key = F10;
					if(c == 60) key = F2;
					if (c == 65)
					{
						key = F7;
					}
					if (c == 67)
					{
						key = F9;
					}
				}
				break;
			}
			if(c == BACKSPACE && Nhap.n > 0)
			{
				gotoxy(getx() - 1, gety());
				cout << " ";
				gotoxy(getx() - 1, gety());
				Nhap.n--;
			}
		}
			
	}
	for(int i = 0; i < Nhap.n; i++)
	{
		variable[i] = *Nhap.Key[i];
	}
	variable[Nhap.n] = '\0';
}

void NhapSO(int &variable, char *num, char &key, int len)
{
	rewind(stdin);
	int MaxNhap = len;
	if(MaxNhap == 0)
		MaxNhap = MAX_INPUT;
	InputSTR Nhap;
	Nhap.n = strlen(num);
	for(int i = 0; i < Nhap.n; i++)
	{
		Nhap.Key[i] = new char;
		*Nhap.Key[i] = num[i];
	}
	while(true)
	{
			char c = _getch();
			if(Nhap.n < 11)
			{
				if(!kbhit() && (int)c >= 48 && (int)c <= 57 && Nhap.n < MaxNhap)
				{
					Nhap.Key[Nhap.n] = new char;
					cout << c;
					*Nhap.Key[Nhap.n] = c;
					Nhap.n++;
				}
			}
			if((c == '\r' || c == -32  || c == 27 || c == 13 || c == 0))
			{
				if(c == -32)
				{
					c = _getch();
					if(c == 72) key = UP;
					if(c == 80) key = DOWN;
					if(c == 75) key = LEFT;
					if(c == 77) key = RIGHT;
				}
				if(c == 13) key = ENTER;
				if(c == 27) key = ESC;
				if(c == 0)
				{
					c = _getch();
					if(c == 68) key = F10;
					if(c == 60) key = F2;
					if (c == 65)
					{
						key = F7;
					}
					if (c == 67)
					{
						key = F9;
					}
				}
				break;
			}
				
			if(c == BACKSPACE && Nhap.n > 0)
			{
				gotoxy(getx() - 1, gety());
				cout << " ";
				gotoxy(getx() - 1, gety());
				Nhap.n--;
			}
	}
	for(int i = 0; i < Nhap.n; i++)
	{
		num[i] = *Nhap.Key[i];
	}
	num[Nhap.n] = '\0';
	variable = atoi(num);
}
void NhapSO_F(float &variable, char *num, char &key, int len) //nhap so dang float
{
	fflush(stdin);
	int MaxNhap = len;
	if (MaxNhap == 0)
		MaxNhap = MAX_INPUT;
	InputSTR Nhap;
	Nhap.n = strlen(num);
	for(int i = 0; i < Nhap.n; i++)
	{
		Nhap.Key[i] = new char;
		*Nhap.Key[i] = num[i];
	}
	while(true)
	{
		char c = _getch();
		if (Nhap.n<9)
		{
			if (!kbhit() && !((int)c < 48 || (int)c > 57) && Nhap.n < MaxNhap || c == '.')
			{
				Nhap.Key[Nhap.n] = new char;
				cout << c;
				*Nhap.Key[Nhap.n] = c;
				Nhap.n++;
			}			
		}
		if(c == 8 && Nhap.n > 0)
		{
			gotoxy(getx()-1,gety());
			cout << " ";
			gotoxy(getx()-1,gety());
			Nhap.n--;	
			
		}
		if((c == '\r' || c == -32  || c == 27 || c == 13 || c == 0))
			{
				if(c == -32)
				{
					c = _getch();
					if(c == 72) key = UP;
					if(c == 80) key = DOWN;
					if(c == 75) key = LEFT;
					if(c == 77) key = RIGHT;
				}
				if(c == 13) key = ENTER;
				if(c == 27) key = ESC;
				if(c == 0)
				{
					c = _getch();
					if(c == 68) key = F10;
					if(c == 60) key = F2;
					if (c == 65)
					{
						key = F7;
					}
					if (c == 67)
					{
						key = F9;
					}
				}
				break;
			}

	}	
	for(int i = 0; i < Nhap.n; i++)
	{
		num[i] = *Nhap.Key[i];
	}
	num[Nhap.n] = '\0';
	variable = atof(num);
}
void NhapSO_U(unsigned int &variable, char *num, char &key, int len) //nhap so dang unsigned int
{
	fflush(stdin);
	int MaxNhap = len;
	if (MaxNhap == 0)
		MaxNhap = MAX_INPUT;
	InputSTR Nhap;
	Nhap.n = strlen(num);
	for(int i = 0; i < Nhap.n; i++)
	{
		Nhap.Key[i] = new char;
		*Nhap.Key[i] = num[i];
	}
	while(true)
	{
		char c = _getch();
		if (Nhap.n<9)
		{
			if (!kbhit() && !((int)c < 48 || (int)c > 57) && Nhap.n < MaxNhap)
			{
				Nhap.Key[Nhap.n] = new char;
				cout << c;
				*Nhap.Key[Nhap.n] = c;
				Nhap.n++;
			}			
		}
		if(c == 8 && Nhap.n > 0)
		{
			gotoxy(getx()-1,gety());
			cout << " ";
			gotoxy(getx()-1,gety());
			Nhap.n--;	
			
		}
		if((c == '\r' || c == -32  || c == 27 || c == 13 || c == 0))
			{
				if(c == -32)
				{
					c = _getch();
					if(c == 72) key = UP;
					if(c == 80) key = DOWN;
					if(c == 75) key = LEFT;
					if(c == 77) key = RIGHT;
				}
				if(c == 13) key = ENTER;
				if(c == 27) key = ESC;
				if(c == 0)
				{
					c = _getch();
					if(c == 68) key = F10;
					if(c == 60) key = F2;
					if (c == 65)
					{
						key = F7;
					}
					if (c == 67)
					{
						key = F9;
					}
				}
				break;
			}

	}	
	for(int i = 0; i < Nhap.n; i++)
	{
		num[i] = *Nhap.Key[i];
	}
	num[Nhap.n] = '\0';
	variable = atoi(num);
}
void NhapNGAY(int &variable, char *num, char &key, int len)
{
	rewind(stdin);
	int MaxNhap = len;
	if(MaxNhap == 0)
		MaxNhap = MAX_INPUT;
	InputSTR Nhap;
	Nhap.n = strlen(num);
	for(int i = 0; i < Nhap.n; i++)
	{
		Nhap.Key[i] = new char;
		*Nhap.Key[i] = num[i];
	}
	while(true)
	{
		char c = _getch();
		if(Nhap.n < 2)
		{
			if(!kbhit() && (int)c >= 48 && (int)c <= 57 && Nhap.n < MaxNhap)
			{
				if((Nhap.n > 0 && (int)*Nhap.Key[Nhap.n - 1] == 51 && (int)c >= 50) || (Nhap.n > 0 && (int)*Nhap.Key[Nhap.n - 1] >= 52 && (int)c >= 48) || (Nhap.n == 0 && (int)c == 48))
					continue;
				Nhap.Key[Nhap.n] = new char;
				cout << c;
				*Nhap.Key[Nhap.n] = c;
				Nhap.n++;
			}
		}
		if((c == '\r' || c == -32  || c == 27 || c == 13 || c == 75 || c == 77))
		{
			if(c == -32)
			{
				c = _getch();
				if(c == 72) key = UP;
				if(c == 80) key = DOWN;
				if(c == 75) key = LEFT;
				if(c == 77) key = RIGHT;
			}
			if(c == 13) key = ENTER;
			if(c == 27) key = ESC;
			break;
		}
			
		if(c == BACKSPACE && Nhap.n > 0)
		{
			gotoxy(getx() - 1, gety());
			cout << " ";
			gotoxy(getx() - 1, gety());
			Nhap.n--;
		}
	}
	for(int i = 0; i < Nhap.n; i++)
	{
		num[i] = *Nhap.Key[i];
	}
	num[Nhap.n] = '\0';
	variable = atoi(num);
}
void NhapTHANG(int &variable, char *num, char &key, int len)
{
	rewind(stdin);
	int MaxNhap = len;
	if(MaxNhap == 0)
		MaxNhap = MAX_INPUT;
	InputSTR Nhap;
	Nhap.n = strlen(num);
	for(int i = 0; i < Nhap.n; i++)
	{
		Nhap.Key[i] = new char;
		*Nhap.Key[i] = num[i];
	}
	while(true)
	{
		char c = _getch();
		if(Nhap.n < 2)
		{
			if(!kbhit() && (int)c >= 48 && (int)c <= 57 && Nhap.n < MaxNhap)
			{
				if((Nhap.n > 0 && (int)*Nhap.Key[Nhap.n - 1] == 49 && (int)c >= 51) || (Nhap.n > 0 && (int)*Nhap.Key[Nhap.n - 1] >= 50 && (int)c >= 48) || (Nhap.n == 0 && (int)c == 48))
					continue;
				Nhap.Key[Nhap.n] = new char;
				cout << c;
				*Nhap.Key[Nhap.n] = c;
				Nhap.n++;
			}
		}
		if((c == '\r' || c == -32  || c == 27 || c == 13 || c == 75 || c == 77))
		{
			if(c == -32)
			{
				c = _getch();
				if(c == 72) key = UP;
				if(c == 80) key = DOWN;
				if(c == 75) key = LEFT;
				if(c == 77) key = RIGHT;
			}
			if(c == 13) key = ENTER;
			if(c == 27) key = ESC;
			break;
		}
			
		if(c == BACKSPACE && Nhap.n > 0)
		{
			gotoxy(getx() - 1, gety());
			cout << " ";
			gotoxy(getx() - 1, gety());
			Nhap.n--;
		}
	}
	for(int i = 0; i < Nhap.n; i++)
	{
		num[i] = *Nhap.Key[i];
	}
	num[Nhap.n] = '\0';
	variable = atoi(num);
}
void NhapNAM(int &variable, char *num, char &key, int len)
{
	rewind(stdin);
	int MaxNhap = len;
	if(MaxNhap == 0)
		MaxNhap = MAX_INPUT;
	InputSTR Nhap;
	Nhap.n = strlen(num);
	for(int i = 0; i < Nhap.n; i++)
	{
		Nhap.Key[i] = new char;
		*Nhap.Key[i] = num[i];
	}
	while(true)
	{
		char c = _getch();
		if(Nhap.n < 4)
		{
			if(!kbhit() && (int)c >= 48 && (int)c <= 57 && Nhap.n < MaxNhap)
			{
				if((Nhap.n == 0 && (int)c == 48))
					continue;
				Nhap.Key[Nhap.n] = new char;
				cout << c;
				*Nhap.Key[Nhap.n] = c;
				Nhap.n++;
			}
		}
		if((c == '\r' || c == -32  || c == 27 || c == 13 || c == 75 || c == 77))
		{
			if(c == -32)
			{
				c = _getch();
				if(c == 72) key = UP;
				if(c == 80) key = DOWN;
				if(c == 75) key = LEFT;
				if(c == 77) key = RIGHT;
			}
			if(c == 13) key = ENTER;
			if(c == 27) key = ESC;
			break;
		}
			
		if(c == BACKSPACE && Nhap.n > 0)
		{
			gotoxy(getx() - 1, gety());
			cout << " ";
			gotoxy(getx() - 1, gety());
			Nhap.n--;
		}
	}
	for(int i = 0; i < Nhap.n; i++)
	{
		num[i] = *Nhap.Key[i];
	}
	num[Nhap.n] = '\0';
	variable = atoi(num);
}
int CheckDay(DAT date)
{
	time_t baygio = time(0);
	tm *ltm = localtime(&baygio);
	int posx = X_VT + 95,
		posy = Y_VT + 10;
	if(date.day > ltm->tm_mday || date.month > 1 + ltm->tm_mon || date.year > 1900 + ltm->tm_year)
	{
		if(date.month > 1 + ltm->tm_mon || date.year >= 1900 + ltm->tm_year)
		{
			if(date.year >= 1900 + ltm->tm_year)
			{
				TextColor(MAUNEN);
				gotoxy(posx + 2, posy + 28);
				cout << "HIEN TAI LA NGAY " << ltm->tm_mday << "/" << 1 + ltm->tm_mon << "/" << 1900 + ltm->tm_year << "! VUI LONG NHAP NGAY THANG HOP LE!";
				Sleep(1000);
				TextColor(MAU_CONSOLE);
				gotoxy(posx + 2, posy + 28);
				cout << "                                                                           ";
				return TRUE;
			}
		}
	}
	if (date.day == 31 && (date.month == 4 || date.month == 6 || date.month == 9 || date.month == 11))
	{
		TextColor(MAUNEN);
		gotoxy(posx + 2, posy + 28);
		cout << "THANG " << date.month << " CHI CO 30 NGAY!";
		Sleep(1000);
		TextColor(MAU_CONSOLE);
		gotoxy(posx + 2, posy + 28);
		cout << "                                             ";
		return TRUE;
	}
	if((date.day == 30 || date.day == 31) && date.month == 2)
	{
		TextColor(MAUNEN);
		gotoxy(posx + 2, posy + 28);
		cout << "THANG " << date.month << " CHI CO 29 NGAY!";
		Sleep(1000);
		TextColor(MAU_CONSOLE);
		gotoxy(posx + 2, posy + 28);
		cout << "                                             ";
		return TRUE;
	}
	if(!((date.year % 4 == 0 && date.year % 100 != 0) || date.year % 400 == 0) && date.day == 29 && date.month == 2) // kiem tra nam nhuan
	{
		TextColor(MAUNEN);
		gotoxy(posx + 2, posy + 28);
		cout << "NAM " << date.year << " LA NAM KHONG NHUAN NEN THANG 2 CHI CO 28 NGAY! NHAP LAI!";		
		Sleep(1000);
		TextColor(MAU_CONSOLE);
		gotoxy(posx + 2, posy + 28);
		cout << "                                                                                   ";			
		return TRUE;
	}
	if(date.year <= 1999)
	{
		TextColor(MAUNEN);
		gotoxy(posx + 2, posy + 28);
		cout << "VUI LONG NHAP NAM TU 1999 TRO LEN!";		
		Sleep(1000);
		TextColor(MAU_CONSOLE);
		gotoxy(posx + 2, posy + 28);
		cout << "                                  ";			
		return TRUE;
	}
}
int Totime(DAT a)
{
	int sumyear = 0;
	int summonth = 0;
	for (int i = 1999; i < a.year; i++)
	{
		if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
		{
			sumyear = sumyear + 366;
		}
		else
		{
			sumyear = sumyear + 365;
		}
	}
	for (int j = 1; j < a.month; j++)
	{
		if (j == 2)
		{
			if ((a.year % 4 == 0 && a.year % 100 != 0) || a.year % 400 == 0)
			{
				summonth = summonth + 29;
			}
			else
			{
				summonth = summonth + 28;
			}
		}
		if (j == 1 || j == 3 || j == 5 || j == 7 || j == 8 || j == 10 || j == 12)
		{
			summonth = summonth + 31;
		}
		if (j == 4 || j == 6 || j == 9 || j == 11)
		{
			summonth = summonth + 30;
		}
	}
	return sumyear + summonth + a.day;
}

//	DANH SACH VAT TU
void Init_VT(TREE_VT &t)
{
	t = NULL;
}

int isEmpty_VT(TREE_VT t)
{
	return (t == NULL ? TRUE : FALSE);
}

int SoSanh_MaVT(VAT_TU x, VAT_TU y)
{
	return strcmp(x.maVT, y.maVT);
}

int Search_NLR(TREE_VT t, char x[])
{
	if (t != NULL)
	{
		if (strcmp(t->data.maVT, x) == 0)
		{
			return TRUE;
		}
		if (strcmp(t->data.maVT, x) > 0)
		{
			Search_NLR(t->pLeft, x); // qua ben trai
		}
		else if (strcmp(t->data.maVT, x) < 0)
		{
			Search_NLR(t->pRight, x); // qua ben phai
		}
	}
//	else return FALSE;
}

int QuaTrai(VAT_TU vt, TREE_VT t)
{
	return ((strcmp(vt.maVT, t->data.maVT) < 0) ? 1 : 0);
}
int QuaPhai(VAT_TU vt, TREE_VT t)
{
	return ((strcmp(vt.maVT, t->data.maVT) > 0) ? 1 : 0);
}
string OutputHD_TenVT(TREE_VT t, char x[])
{
	if (t != NULL)
	{
		if (strcmp(t->data.maVT, x) == 0)
		{
			return t->data.tenVT;
		}
		OutputHD_TenVT(t->pLeft, x);
		OutputHD_TenVT(t->pRight, x);
	}
	return "Khong tim thay ten";
}

TREE_VT Search_VT(TREE_VT t, char x[])
{
	TREE_VT p;
	p = t;
	if(p != NULL)
	{
		if(strcmp(p->data.maVT, x) == 0)
		{
			return p;
		}
		if(strcmp(p->data.maVT, x) > 0)
		{
			Search_VT(p->pLeft, x);
		}
		else if(strcmp(p->data.maVT, x) < 0)
		{
			Search_VT(p->pRight, x);
		}
	}
}

void Insert_VT(TREE_VT & t, VAT_TU x)
{
	if (t == NULL)
	{
		t = new NODE_VT;
		t->data = x;
		t->pLeft = NULL;
		t->pRight = NULL;
		// them vat tu thanh cong
	}
	if (t != NULL)
	{
		if (SoSanh_MaVT(t->data, x) > 0)
		{
			Insert_VT(t->pLeft, x); // them vao ben trai
		}
		else if (SoSanh_MaVT(t->data, x) < 0)
		{
			Insert_VT(t->pRight, x); // them vao ben phai
		}
	}
}

void Insertfile_VT(TREE_VT  &t, VAT_TU x)
{
	if (t == NULL)
	{
		t = new NODE_VT;
		t->data = x;
		t->pLeft = NULL;
		t->pRight = NULL;
	}
	if (t != NULL)
	{
		if (SoSanh_MaVT(t->data, x) > 0)
		{
			Insert_VT(t->pLeft, x); // them vao ben trai
		}
		else if (SoSanh_MaVT(t->data, x) < 0)
		{
		 	Insert_VT(t->pRight, x); // them vao ben phai
		}
	}
}

void Update_VT(TREE_VT & t, char x[], int y)
{
	while (t != NULL && strcmp(t->data.maVT, x) != 0)
	{
		if (strcmp(t->data.maVT, x) > 0)
		{
			t = t->pLeft;
		}
		else
		{
			t = t->pRight;
		}
	}
	// cap nhat lai so luong ton trong kho
	t->data.slTon = y;
}

void Create_VT(TREE_VT &t)
{
	VAT_TU x;
	TextColor(MAU_CONSOLE);
	int rong, dai, posx, posy;
	rong = 20;
	dai = 100;
	posx = X_VT + 95;
	posy = Y_VT + 10;
	string *item = new string[4];
	item[0] = "Ma vat tu";
	item[1] = "Ten vat tu";
	item[2] = "Don vi tinh";
	item[3] = "So luong";
	string s, s0, s1, s2, s3, s4; 
	s = "Luu thay doi?";
	s0 = "THEM VAT TU";
	s1 = "CO";	
	s2 = "KHONG";	
	VeKhung(rong,posx,posy,dai);
	gotoxy(posx - s0.length() / 2 + dai / 2, posy);	
	cout << s0;		
	VeKhung(2,posx + 1 + item[2].length() + 2,posy + 1,dai - item[2].length() - 4); // khung nhap ma
	VeKhung(2,posx + 1 + item[2].length() + 2,posy + 4,dai - item[2].length() - 4); // khung nhap ten
	VeKhung(2,posx + 1 + item[2].length() + 2,posy + 7,dai - item[2].length() - 4); // khung nhap dvt
	VeKhung(2,posx + 1 + item[2].length() + 2,posy + 10,dai - item[2].length() - 4); // khung nhap so luong
	char key;
	bool editcontinue = true;
	while(editcontinue)
	{
		char tmpma[10] = {'\0'};
		char tmpten[29] = {'\0'};
		char tmpdvt[7] = {'\0'};
		char numlen[11] = {'\0'};
		int tmpsl;
		int jump = 0, line = 0, tt = 2; // jump: xac dinh vi tri tiep theo de ve khung nhap - line: thao tac dang chon - tt: con tro tai khung dang nhap
		
		if(!kbhit())
		{
			for(int i = 0; i < 4; i++)
			{
				gotoxy(posx + 1, posy + 2 + i + jump);
				cout << item[i];
				jump+=2;
			}
			
			// dieu khien nhap
			rewind(stdin);
			
			while(editcontinue)
			{
				XoaKhung(5,posx - 50 / 2 + dai / 2,29,50);
				gotoxy(posx - s.length() / 2 + dai / 2, 29);
				cout << "             ";
				XoaButton(1,posx + s.length() / 2 - 50 / 2 + dai / 2,32,s1,MAUNENBT_NSL,MAUTEXTBT_NSL); // yes
				XoaButton(1,posx - s.length() / 2 + 50 / 3 + dai / 2 - 1,32,s2,MAUNENBT_NSL,MAUTEXTBT_NSL); // no
				TextColor(MAU_CONSOLE);
				gotoxy(posx + 1 + item[0].length() + 3, posy + tt);
				switch(line)
					{
						case 0:
							{
								gotoxy(posx + 3 + item[0].length() + 3 + strlen(tmpma), posy + tt);
								NhapCHUOISO(tmpma,'U', key, 10);
								if(!isEmpty_VT(t))
								{
									if(Search_NLR(t, tmpma) == TRUE)
									{
										TextColor(MAUNEN);
										gotoxy(X_VT + 97, Y_VT + 38);
										cout << "MA VAT TU DA TON TAI!";
										TextColor(MAU_CONSOLE);	
									}
									else
									{
										TextColor(MAU_CONSOLE);
										gotoxy(X_VT + 97, Y_VT + 38);
										cout << "                               ";
									}			
								}								
								break;	
							}
							
						case 1:
							{
								gotoxy(posx + 3 + item[0].length() + 3 + strlen(tmpten), posy + tt);
								NhapCHUOI_SO(tmpten, key,29);																	
								break;
							}
							
						case 2:
							{
								gotoxy(posx + 3 + item[0].length() + 3 + strlen(tmpdvt), posy + tt);
								NhapCHUOI_SO(tmpdvt, key,7);	
								break;
							}
						case 3:
							{
								gotoxy(posx + 3 + item[0].length() + 3 + strlen(numlen), posy + tt);
								NhapSO(tmpsl, numlen, key, 11);
								break;
							}	
					}
				if (key == UP)
				{
					if (line == 0)
					{
						line = 3;
						tt = 11;
					}
					else
					{
						tt-=3;
						line--;
					}
					gotoxy(posx + 1 + item[line].length() + 3, posy + tt);
				}
				if(key == DOWN)
				{
					if (line >= 3)
					{
						line = 0;
						tt = 2;
					}
					else
					{
						tt+=3;
						line++;
					}	
					gotoxy(posx + 1 + item[line].length() + 3, posy + tt);
				}
				if(key == ENTER)
				{
					if(strlen(tmpma) == 0 || strlen(tmpten) == 0 || strlen(tmpdvt) == 0 || strlen(numlen) == 0)
					{
						TextColor(MAUNEN);
						gotoxy(X_VT + 97, Y_VT + 38);
						cout << "KHONG DUOC DE TRONG CAC TRUONG!";		
						Sleep(700);
						TextColor(MAU_CONSOLE);
						gotoxy(X_VT + 97, Y_VT + 38);
						cout << "                               ";			
						continue;
					}
					if(!isEmpty_VT(t))
					{
						if(Search_NLR(t, tmpma) == TRUE)
						{
							TextColor(MAUNEN);
							gotoxy(X_VT + 97, Y_VT + 38);
							cout << "MA VAT TU DA TON TAI! NHAP LAI!";
							Sleep(700);
							TextColor(MAU_CONSOLE);
							gotoxy(X_VT + 97, Y_VT + 38);
							cout << "                               ";				
							continue;	
						}
					}
					VeKhung(5,posx - 50 / 2 + dai / 2,29,50);
					gotoxy(posx - s.length() / 2 + dai / 2, 29);
					cout << s;
					VeButton(1,posx - s.length() / 2 + 50 / 3 + dai / 2 - 1,32,s2,MAUNENBT_NSL,MAUTEXTBT_NSL); // no
					VeButton(1,posx + s.length() / 2 - 50 / 2 + dai / 2,32,s1,MAUNENBT_SL,MAUTEXTBT_SL); // yes
					char click1;
					int line1 = 0;
					while(editcontinue)
					{
						click1 = _getch();
						if(click1 == RIGHT)
						{
							VeButton(1,posx - s.length() / 2 + 50 / 3 + dai / 2 - 1,32,s2,MAUNENBT_SL,MAUTEXTBT_SL); // no
							VeButton(1,posx + s.length() / 2 - 50 / 2 + dai / 2,32,s1,MAUNENBT_NSL,MAUTEXTBT_NSL); // yes
							line1++;
							if(line1 >= 1)
								line1 = 1;								
						}
						if(click1 == LEFT)
						{
							VeButton(1,posx + s.length() / 2 - 50 / 2 + dai / 2,32,s1,MAUNENBT_SL,MAUTEXTBT_SL); // yes
							VeButton(1,posx - s.length() / 2 + 50 / 3 + dai / 2 - 1,32,s2,MAUNENBT_NSL,MAUTEXTBT_NSL); // no
							line1--;
							if(line1 == 0)
								line1 = 0;
						}
						if(click1 == ENTER)
						{
							switch(line1)
							{
								case 0:
									{
										strcpy(x.maVT, tmpma);
										x.tenVT = tmpten;
										x.DVT = tmpdvt;
										x.slTon = tmpsl;
										Insertfile_VT(t, x);
										gotoxy(X_VT + 97, Y_VT + 38);
										TextColor(MAUNEN_SUCCESS);
										cout << "THEM THANH CONG!";
										Sleep(700);
										gotoxy(X_VT + 97, Y_VT + 38);
										TextColor(MAU_CONSOLE);
										cout << "                ";
										editcontinue = false;
										for(int i = 0; i <= rong; i++)
										{
											for(int j = 0; j <= dai; j++)
											{
												gotoxy(posx + j, posy + i);
												cout << " ";
											}
											cout << endl;
										}
										break;
									}
								case 1:
									{
										TextColor(MAU_CONSOLE);
										for(int i = 0; i <= rong; i++)
										{
											for(int j = 0; j <= dai; j++)
											{
												gotoxy(posx + j, posy + i);
												cout << " ";
											}
											cout << endl;
										}
										editcontinue = false;
										break;
									}
							}
							editcontinue = false;
							break;
						}
						if(key == ESC)
						{
							for(int i = 0; i <= rong; i++)
							{
								for(int j = 0; j <= dai; j++)
								{
									gotoxy(posx + j, posy + i);
									cout << " ";
								}
								cout << endl;
							}
							editcontinue = false;
							break;
						}
							
					}
				}
				if(key == ESC)
				{
					for(int i = 0; i <= rong; i++)
					{
						for(int j = 0; j <= dai; j++)
						{
							gotoxy(posx + j, posy + i);
							cout << " ";
						}
						cout << endl;
					}
					editcontinue = false;
					break;
				}
			}
		}
	}
}

void Load_VT(TREE_VT &t)
{
	fstream inFile;
	VAT_TU vt;
	inFile.open("D:/Dev-Cpp/New Update Project 3/Do_an_moi-master5/DATA/DS_VatTu.txt", ios::in);
	string temp;
	if(inFile.is_open())
	{
		while(!inFile.eof())
		{
			getline(inFile, temp);
			inFile.getline(vt.maVT, 10);
			getline(inFile, vt.tenVT);
			getline(inFile, vt.DVT);
			inFile >> vt.slTon;
			
			Insertfile_VT(t, vt);
			if(inFile == NULL)
				break;
		}
//		gotoxy(40 + 60 + 10, 9);
//		cout << "Thanh cong!";
	}
	else
	{
		gotoxy(40+ 60 + 10, 9);
		cout << "Load file that bai!";
	}
    inFile.close();
}

void Save(TREE_VT t, fstream &file)
{
	file << endl << t->data.maVT;
	file << endl << t->data.tenVT;
	file << endl << t->data.DVT;
	file << endl << t->data.slTon;
}

void Outfile_VT(TREE_VT t, fstream &file)
{
	if(t != NULL)
	{
		Save(t, file);
		Outfile_VT(t->pLeft, file);
		Outfile_VT(t->pRight, file);
	}
}

void Save_VT(TREE_VT t)
{
	fstream outFile;
	outFile.open("D:/Dev-Cpp/New Update Project 3/Do_an_moi-master5/DATA/DS_VatTu.txt", ios::out);
	if(outFile.is_open())
	{
		Outfile_VT(t, outFile);
	}
	else
	{
		cout << "\nKet noi voi file that bai!";
	}
	outFile.close();
}
int CountVT(TREE_VT t)
{
	int count = 0;
	if (t != NULL)
	{
		count++;
		CountVT(t->pLeft);		
		CountVT(t->pRight);
	}
	return count;
}

int Kiemtra_MaVT(TREE_VT t, char x[])
{
	if (t != NULL)
	{
		if (strcmp(t->data.maVT, x) == 0)
		{
			return TRUE;
		}
		Kiemtra_MaVT(t->pLeft, x);
		Kiemtra_MaVT(t->pRight, x);
	}
}

VAT_TU LeftMost(TREE_VT root)
{
	while(root->pLeft != NULL)
		root = root->pLeft;
	return root->data;
}
TREE_VT DeleteNodeVT(TREE_VT root, VAT_TU value)
{
	if(root == NULL)
		return root;
	if(QuaTrai(value, root))
		root->pLeft = DeleteNodeVT(root->pLeft, value);
	else if(QuaPhai(value , root))
		root->pRight = DeleteNodeVT(root->pRight, value);
	else
	{
		// root->data.maVT == value.maVT;
		if(root->pLeft == NULL)
		{
			TREE_VT newRoot = root->pRight;
			delete root;
			return newRoot;
		}
		if(root->pRight == NULL)
		{
			TREE_VT newRoot = root->pLeft;
			delete root;
			return newRoot;
		}
		root->data = LeftMost(root->pRight);
		root->pRight = DeleteNodeVT(root->pRight, root->data);
	}
	return root;
}
void Delete_VT(TREE_VT t)
{
	TextColor(MAU_CONSOLE);
	int rong = 15,
		dai = 100,
		posx = X_VT + 95,
		posy = Y_VT + 10;
	string *item = new string[3];
	item[0] = "XOA VAT TU";
	item[1] = "Tim ma vat tu";
	item[2] = "XOA";
	string s, s1, s2; 
	s = "Xac nhan?";
	s1 = "CO";	
	s2 = "KHONG";	
	VeKhung(rong, posx, posy, dai);
	gotoxy(posx - item[0].length() / 2 + dai / 2, posy);
	cout << item[0];
	gotoxy(posx + 2, posy + 2);
	cout << item[1];
	VeLine(11, posx + item[1].length() + 3, posy + 3);
	VeBangNotif(2, dai, posx, posy + 27);
	char tmpma[10] = {'\0'};
	bool editcontinue = true;
	while(editcontinue)
	{
		char conf;
		VeButton(3,posx + item[1].length() + 3, posy + 5, item[2], MAUNENBT_NSL, MAUTEXTBT_NSL, 17);
		TextColor(MAU_CONSOLE);
		gotoxy(posx + item[1].length() + 3 + strlen(tmpma), posy + 2);
		NhapCHUOISO(tmpma,'U',conf,10);
		if(conf == ESC)
		{
			TextColor(MAU_CONSOLE);
			for(int i = 0; i <= rong; i++)
			{
				for(int j = 0; j <= dai; j++)
				{
					gotoxy(posx + j, posy + i);
					cout << " ";
				}
				cout << endl;
			}
			break;
		}
		if(conf == ENTER || conf == DOWN)
		{
			char click;
			int tt = 0;
			if(Search_NLR(t, tmpma) == TRUE)
			{
				VeButton(3, posx + item[1].length() + 3, posy + 5, item[2], MAUNENBT_SL, MAUTEXTBT_SL, 17); // xoa
				TextColor(MAU_CONSOLE);
				TREE_VT p = t;
				p = Search_VT(t, tmpma);
				click = _getch();
				if(click == ENTER)
				{
					VeKhung(5,posx - 50 / 2 + dai / 2, posy + 9,50);
					gotoxy(posx - s.length() / 2 + dai / 2, posy + 9);
					cout << s;
					VeButton(1,posx - s.length() / 2 + 50 / 3 + dai / 2 - 1,posy + 12,s2,MAUNENBT_NSL,MAUTEXTBT_NSL); // no
					VeButton(1,posx + s.length() / 2 - 50 / 2 + dai / 2,posy + 12,s1,MAUNENBT_SL,MAUTEXTBT_SL); // yes
					char click1;
					int line1 = 0;
					while(editcontinue)
					{
						click1 = _getch();
						if(click1 == RIGHT)
						{
							VeButton(1,posx - s.length() / 2 + 50 / 3 + dai / 2 - 1,posy + 12,s2,MAUNENBT_SL,MAUTEXTBT_SL); // no
							VeButton(1,posx + s.length() / 2 - 50 / 2 + dai / 2,posy + 12,s1,MAUNENBT_NSL,MAUTEXTBT_NSL); // yes
							line1++;
							if(line1 >= 1)
								line1 = 1;								
						}
						if(click1 == LEFT)
						{
							VeButton(1,posx + s.length() / 2 - 50 / 2 + dai / 2,posy + 12,s1,MAUNENBT_SL,MAUTEXTBT_SL); // yes
							VeButton(1,posx - s.length() / 2 + 50 / 3 + dai / 2 - 1,posy + 12,s2,MAUNENBT_NSL,MAUTEXTBT_NSL); // no
							line1--;
							if(line1 == 0)
								line1 = 0;
						}
						if(click1 == ENTER)
						{
							switch(line1)
							{
								case 0:
									{
										DeleteNodeVT(t, p->data);
										gotoxy(posx + 2, posy + 28);
										TextColor(MAUNEN_SUCCESS);
										cout << "XOA THANH CONG!";
										Sleep(700);
										gotoxy(posx + 2, posy + 28);
										TextColor(MAU_STTBAR);
										cout << "               ";
										TextColor(MAU_CONSOLE);
										for(int i = 0; i <= rong; i++)
										{
											for(int j = 0; j <= dai; j++)
											{
												gotoxy(posx + j, posy + i);
												cout << " ";
											}
											cout << endl;
										}
										editcontinue = false;
										break;
									}
								case 1:
									{
										gotoxy(posx + 2, posy + 28);
										TextColor(MAUNEN_SUCCESS);
										cout << "DA HUY!";
										Sleep(700);
										gotoxy(posx + 2, posy + 28);
										TextColor(MAU_STTBAR);
										cout << "       ";
										TextColor(MAU_CONSOLE);
										for(int i = 0; i <= rong; i++)
										{
											for(int j = 0; j <= dai; j++)
											{
												gotoxy(posx + j, posy + i);
												cout << " ";
											}
											cout << endl;
										}
										editcontinue = false;
										break;
									}
							}
							break;
						}
						if(click1 == ESC)
						{
							TextColor(MAU_CONSOLE);
							for(int i = 0; i <= rong; i++)
							{
								for(int j = 0; j <= dai; j++)
								{
									gotoxy(posx + j, posy + i);
									cout << " ";
								}
								cout << endl;
							}
							editcontinue = false;
							break;
						}
							
					}
					
				}
				else if(click == ESC)
				{
					TextColor(MAU_CONSOLE);
					for(int i = 0; i <= rong; i++)
					{
						for(int j = 0; j <= dai; j++)
						{
							gotoxy(posx + j, posy + i);
							cout << " ";
						}
						cout << endl;
					}
					break;
				}
			}
			else
			{
				if(strlen(tmpma) == 0)
				{
					gotoxy(posx + 2, posy + 28);
					TextColor(MAUNEN);
					cout << "VUI LONG NHAP MA VAT TU CAN TIM!";
					Sleep(700);
					gotoxy(posx + 2, posy + 28);
					TextColor(MAU_STTBAR);
					cout << "                                ";
					TextColor(MAU_CONSOLE);
				}
				else if(strlen(tmpma) != 0)
				{
					gotoxy(posx + 2, posy + 28);
					TextColor(MAUNEN);
					cout << "KHONG TIM THAY!";
					Sleep(700);
					gotoxy(posx + 2, posy + 28);
					TextColor(MAU_STTBAR);
					cout << "               ";
					TextColor(MAU_CONSOLE);
				}
			}
		}
	}
}
void Fix_VT(TREE_VT t)
{
	int rong, posx, posy, dai;
	rong = 20;
	dai = 100;
	posx = X_VT + 95;
	posy = Y_VT + 10;
	string *item = new string[3];
	item[0] = "Ten vat tu";
	item[1] = "Don vi tinh";
	item[2] = "Tim ma vat tu";
	char key;
	bool editcontinue = true;
	TextColor(MAU_CONSOLE);
	VeKhung(rong, posx, posy, dai);
	VeLine(15, posx + 1 + item[1].length() + 3, posy + 3);
	VeKhung(2, posx + 1 + item[1].length() + 2, posy + 4, dai - item[1].length() - 5); // khung sua ten
	VeKhung(2, posx + 1 + item[1].length() + 2, posy + 7, dai - item[1].length() - 5); // khung sua dvt
//	VeKhung(2, posx + 1 + item[1].length() + 2, posy + 10, dai - item[1].length() - 5); // khung sua so luong
	while(editcontinue)
	{
	//	Ve_Giao_Dien();
		char tmpten[20] = {'\0'}, tmpdvt[7] = {'\0'}, tmpma[10] = {'\0'};
		int jump = 0, line = 0, tt = 5; // jump: xac dinh vi tri tiep theo de ve khung nhap - line: thao tac dang chon - tt: con tro tai khung dang nhap
		string s, s0, s1, s2, s3, s4; 
		s = "Luu thay doi?";
		s0 = "HIEU CHINH VAT TU";
		s1 = "CO";	
		s2 = "KHONG";	
		if(!kbhit())
		{
			gotoxy(posx - s0.length() / 2 + dai / 2, posy);	
			cout << s0;
			TextColor(MAU_CONSOLE);
			gotoxy(posx + 1 + item[1].length() + 3, posy + 5);
			cout << "                                                          ";
			gotoxy(posx + 1 + item[1].length() + 3, posy + 8);
			cout << "                                                          ";
			gotoxy(posx + 1, posy + 2 + jump);
			cout << item[2];
			for(int i = 0; i < 2; i++)
			{
				gotoxy(posx + 1, posy + 5 + i + jump);
				cout << item[i];
				jump+=2;
			}
			gotoxy(posx + 1 + item[1].length() + 3, posy + 2);
			cout << "                                              ";
			gotoxy(posx + 1 + item[1].length() + 3, posy + 2);
			NhapCHUOISO(tmpma,'U',key,10); // tim ma vat tu de hieu chinh
			TREE_VT p = t;
			if(key == ESC)
			{
				TextColor(MAU_CONSOLE);
				for(int i = 0; i <= rong; i++)
				{
					for(int j = 0; j <= dai; j++)
					{
						gotoxy(posx + j, posy + i);
						cout << " ";
					}
					cout << endl;
				}
				break;
			}
			if(key == ENTER)
			{
				if(!isEmpty_VT(p))
				{
					if(strlen(tmpma) == 0)
					{
						gotoxy(X_VT + 97, Y_VT + 38);
						TextColor(MAUNEN);
						cout << "CHUA NHAP GI!";
						Sleep(700);
						TextColor(MAU_CONSOLE);
						gotoxy(X_VT + 97, Y_VT + 38);
						cout << "             ";
						continue;
					}
					if(Search_NLR(p, tmpma) == FALSE)
					{
						TextColor(MAUNEN);
						gotoxy(X_VT + 97, Y_VT + 38);
						cout << "KHONG TIM THAY MA VAT TU! NHAP LAI!";
						Sleep(700);
						TextColor(MAU_CONSOLE);
						gotoxy(X_VT + 97, Y_VT + 38);
						cout << "                                       ";				
						continue;	
					}
				}
				p = Search_VT(p, tmpma);
				strcpy(tmpten, STR_to_Char(p->data.tenVT));
				strcpy(tmpdvt, STR_to_Char(p->data.DVT));
				gotoxy(posx + 1 + item[1].length() + 3, posy + 5);
				cout << tmpten;
				gotoxy(posx + 1 + item[1].length() + 3, posy + 8);
				cout << tmpdvt;
				while(editcontinue)
				{
					TextColor(MAU_CONSOLE);
					XoaKhung(5,posx - 50 / 2 + dai / 2,29,50);
					gotoxy(posx - s.length() / 2 + dai / 2, 29);
					cout << "             ";
					XoaButton(1,posx + s.length() / 2 - 50 / 2 + dai / 2,32,s1,MAUNENBT_NSL,MAUTEXTBT_NSL); // yes
					XoaButton(1,posx - s.length() / 2 + 50 / 3 + dai / 2 - 1,32,s2,MAUNENBT_NSL,MAUTEXTBT_NSL); // no
					char click;
					switch(line)
					{
						case 0:
							gotoxy(posx + 1 + item[1].length() + 3 + strlen(tmpten), posy + tt);
							NhapCHUOI_SO(tmpten, click, 29);
							break;
						case 1:
							gotoxy(posx + 1 + item[1].length() + 3 + strlen(tmpdvt), posy + tt);
							NhapCHUOI_SO(tmpdvt, click, 7);
							break;
					}
					if (click == UP)
					{
						if (line == 0)
						{
							line = 1;
							tt = 8;
						}
						else
						{
							tt-=3;
							line--;
						}
						gotoxy(posx + 1 + item[1].length() + 3, posy + tt);
					}
					if(click == DOWN)
					{
						if (line >= 1)
						{
							line = 0;
							tt = 5;
						}
						else
						{
							tt+=3;
							line++;
						}	
						gotoxy(posx + 1 + item[1].length() + 3, posy + tt);
						
					}
					if(click == ENTER)
					{	
						if(strlen(tmpten) == 0 || strlen(tmpdvt) == 0)
						{
							TextColor(MAUNEN);
							gotoxy(X_VT + 97, Y_VT + 38);
							cout << "KHONG DUOC DE TRONG CAC TRUONG!";		
							Sleep(700);
							TextColor(MAU_CONSOLE);
							gotoxy(X_VT + 97, Y_VT + 38);
							cout << "                               ";			
							continue;
						}
						
						VeKhung(5,posx - 50 / 2 + dai / 2,29,50);
						gotoxy(posx - s.length() / 2 + dai / 2, 29);
						cout << s;
						VeButton(1,posx - s.length() / 2 + 50 / 3 + dai / 2 - 1,32,s2,MAUNENBT_NSL,MAUTEXTBT_NSL); // no
						VeButton(1,posx + s.length() / 2 - 50 / 2 + dai / 2,32,s1,MAUNENBT_SL,MAUTEXTBT_SL); // yes
						char click1;
						int line1 = 0;
						while(true)
						{
							click1 = _getch();
							if(click1 == RIGHT)
							{
								VeButton(1,posx - s.length() / 2 + 50 / 3 + dai / 2 - 1,32,s2,MAUNENBT_SL,MAUTEXTBT_SL); // no
								VeButton(1,posx + s.length() / 2 - 50 / 2 + dai / 2,32,s1,MAUNENBT_NSL,MAUTEXTBT_NSL); // yes
								line1++;
								if(line1 >= 1)
									line1 = 1;								
							}
							if(click1 == LEFT)
							{
								VeButton(1,posx + s.length() / 2 - 50 / 2 + dai / 2,32,s1,MAUNENBT_SL,MAUTEXTBT_SL); // yes
								VeButton(1,posx - s.length() / 2 + 50 / 3 + dai / 2 - 1,32,s2,MAUNENBT_NSL,MAUTEXTBT_NSL); // no
								line1--;
								if(line1 == 0)
									line1 = 0;
							}
							if(click1 == ENTER)
							{
								switch(line1)
								{
									case 0:
										{
											//---cap nhat lai vat tu
											p->data.tenVT = tmpten;
											p->data.DVT = tmpdvt;
											//--------------
											gotoxy(X_VT + 97, Y_VT + 38);
											TextColor(MAUNEN_SUCCESS);
											cout << "DA SUA DOI!";
											Sleep(700);
											gotoxy(X_VT + 97, Y_VT + 38);
											TextColor(MAU_CONSOLE);
											cout << "           ";
											for(int i = 0; i <= rong; i++)
											{
												for(int j = 0; j <= dai; j++)
												{
													gotoxy(posx + j, posy + i);
													cout << " ";
												}
												cout << endl;
											}
											editcontinue = false;
											break;
										}
									case 1:
										{
											TextColor(MAU_CONSOLE);
											for(int i = 0; i <= rong; i++)
											{
												for(int j = 0; j <= dai; j++)
												{
													gotoxy(posx + j, posy + i);
													cout << " ";
												}
												cout << endl;
											}
											editcontinue = false;
											break;
										}
								}
								break;
							}
							if(click1 == ESC)
							{
								
								break;
							}
								
						}
						
					}
					if(click == ESC) 
					{
						TextColor(MAU_CONSOLE);
						for(int i = 0; i <= rong; i++)
						{
							for(int j = 0; j <= dai; j++)
							{
								gotoxy(posx + j, posy + i);
								cout << " ";
							}
							cout << endl;
						}
						editcontinue = false;
						break;
					}
				}
			}
			
		}
	}
}
void Quicksort_VT(VAT_TU *a[500], int q, int r)
{
	
	VAT_TU *temp = new VAT_TU;
	int i = q;
	int j = r;
	VAT_TU x;
	x.tenVT = a[(int)((q + r) / 2)]->tenVT;
	do
	{
		while(a[i]->tenVT < x.tenVT)
		{
			i++;
		}
		while(a[j]->tenVT > x.tenVT)
		{
			j--;
		}
		if (i <= j)
		{
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
			i++;
			j--;
		}
	}while(i <= j);
	if (q < j)
	{
		Quicksort_VT(a, q, j);
	}
	if (i < r)
	{
		Quicksort_VT(a, i, r);
	}
}
void Quicksort_Max(TREE_VT t, VAT_TU *a[500], unsigned int toida[100], int q, int r)
{
	int max;
	VAT_TU *temp = new VAT_TU;
	int u = q;
	int v = r;
	float x;
	x = toida[(int)((q + r) / 2)];
	do
	{
		while(toida[u] > x)
		{
			u++;
		}
		while(toida[v] < x)
		{
			v--;
		}
		if (u <= v)
		{
			max = toida[u];
			toida[u] = toida[v];
			toida[v] = max;
			
			temp = a[u];
			a[u] = a[v];
			a[v] = temp;
			u++;
			v--;
		}
	}while(u <= v);
	if (q < v)
	{
		Quicksort_Max(t, a, toida, q, v);
	}
	if (u < r)
	{
		Quicksort_Max(t, a, toida, u, r);
	}
}
void CopyVT(TREE_VT t, char &key)
{
	TREE_VT p = t;
	if(isEmpty_VT(p)) return;
	else
	{
		VAT_TU *arrtmp[MAX_STACK];
		TREE_VT Stack[MAX_STACK];
		int sp = -1;
		int i = 0;
		//-------sao chep vat tu qua mang tam
		while(p != NULL)
		{
			arrtmp[i] = new VAT_TU;
		//	cout << i << endl;
			strcpy(arrtmp[i]->maVT, p->data.maVT);
			arrtmp[i]->tenVT = p->data.tenVT;
			arrtmp[i]->DVT = p->data.DVT;
			arrtmp[i]->slTon = p->data.slTon;
			if(p->pRight != NULL)
			{
				Stack[++sp] = p->pRight;
			}
			if(p->pLeft != NULL)
			{
				p = p->pLeft;
			}
			else if(sp == -1)
					break;
				 else p = Stack[sp--];
			i++;
		}
		
		Quicksort_VT(arrtmp, 0, i - 1);
		// xu li in theo trang
		for(int q = 0; q < 36; q++)
		{
			gotoxy(X_VT + 1, Y_VT + q + 3);
			cout << "    ";
			gotoxy(X_VT + 6, Y_VT + q + 3);
			cout << "              ";
			gotoxy(X_VT + 21, Y_VT + q + 3);
			cout << "                             ";
			gotoxy(X_VT + 51, Y_VT + q + 3);
			cout << "       ";
			gotoxy(X_VT + 59, Y_VT + q + 3);
			cout << "           ";
			
		}
		gotoxy(X_VT + 8, Y_VT + 40);
		cout << "      ";
		i++;
		bool thoat = true;
		int Max_1_Page = 36,
			mn = 0;
		int temp = 0, NumPg = 1;;
		VeBang(39, 70, 5, 20, 50, 58);
		gotoxy(X_VT + 1, Y_VT + 1);
		cout << "STT"; // 4
		gotoxy(X_VT + 8, Y_VT + 1);
		cout << "MA VAT TU"; // 14
		gotoxy(X_VT + 30, Y_VT + 1);
		cout << "TEN VAT TU"; // 29
		gotoxy(X_VT + 53, Y_VT + 1);
		cout << "DVT"; // 7
		gotoxy(X_VT + 60, Y_VT + 1);
		cout << "SO LUONG";	// 11
		gotoxy(X_VT + 1, Y_VT + 40);
		cout << "Trang "; //6
		do
		{
			int h = 0;
			temp = mn;
			gotoxy(X_VT + 8, Y_VT + 40);
			cout << NumPg;
			for(mn; mn < i; mn++)
			{ 
				gotoxy(X_VT + 1, Y_VT + h + 3);
				cout << mn + 1;
				gotoxy(X_VT + 6, Y_VT + h + 3);
				cout << arrtmp[mn]->maVT;
				gotoxy(X_VT + 21, Y_VT + h + 3);
				cout << arrtmp[mn]->tenVT;
				gotoxy(X_VT + 51, Y_VT + h + 3);
				cout << arrtmp[mn]->DVT;
				gotoxy(X_VT + 59, Y_VT + h + 3);
				cout << arrtmp[mn]->slTon;
				h++;
				if(h == Max_1_Page || mn == i - 1)
				{
					break;
				}
			}
			char page = _getch();
			if(page == -32)
			{
				page = _getch();
				if(page == PD)
				{
					if(mn == i - 1) 
					{
						mn = temp;
					}
					else
					{
						mn = mn + 1;
						NumPg++;
					}
					for(int q = 0; q < 36; q++)
					{
						gotoxy(X_VT + 1, Y_VT + q + 3);
						cout << "    ";
						gotoxy(X_VT + 6, Y_VT + q + 3);
						cout << "              ";
						gotoxy(X_VT + 21 , Y_VT + q + 3);
						cout << "                             ";
						gotoxy(X_VT + 51, Y_VT + q + 3);
						cout << "       ";
						gotoxy(X_VT + 59, Y_VT + q + 3);
						cout << "           ";
						gotoxy(X_VT + 8, Y_VT + 40);
						cout << "      ";
					}
				}
				else if (page == PU)
				{
					if(mn == 35)
					{
						mn = temp;
					}
					else
					{
						if(mn == i - 1)
						{
							if(NumPg == 1)
							{
								mn = temp;
							}
							else 
							{
								NumPg--;
								mn = mn - h - 35;
							}
						}
						else
						{
							mn = mn - 35;
						} 
					} 
					for(int q = 0; q < 36; q++)
					{
						gotoxy(X_VT + 1, Y_VT + q + 3);
						cout << "    ";
						gotoxy(X_VT + 6, Y_VT + q + 3);
						cout << "              ";
						gotoxy(X_VT + 21, Y_VT + q + 3);
						cout << "                             ";
						gotoxy(X_VT + 51, Y_VT + q + 3);
						cout << "       ";
						gotoxy(X_VT + 59, Y_VT + q + 3);
						cout << "           ";
						gotoxy(X_VT + 8, Y_VT + 40);
						cout << "      ";
					}
				}
				else if(page == RIGHT || page == LEFT || page == UP || page == DOWN || page == F10)
				{
					if(page == RIGHT)
						key = RIGHT;
					else if(page == LEFT)
						key = LEFT;
					else if(page == UP)
					{
						key = UP;
					}
					else if(page == DOWN)
					{
						key = DOWN;
					}
					else if(page == F10)
					{
						key = 0;
					}
					thoat = false;
				}
			}
			else if (page == ESC)
			{
				key = ESC;
				thoat = false;
			}
			else mn = temp;	
		} while(thoat);
		
	}
}
void CopyVT1(TREE_VT t, char &key)
{
	TREE_VT p = t;
	VAT_TU *arrtmp[MAX_STACK];
	TREE_VT Stack[MAX_STACK];
	int sp = -1;
	int i = 0;
	//-------sao chep vat tu qua mang tam
	while(p != NULL)
	{
		arrtmp[i] = new VAT_TU;
	//	cout << i << endl;
		strcpy(arrtmp[i]->maVT, p->data.maVT);
		arrtmp[i]->tenVT = p->data.tenVT;
		arrtmp[i]->DVT = p->data.DVT;
		arrtmp[i]->slTon = p->data.slTon;
		if(p->pRight != NULL)
		{
			Stack[++sp] = p->pRight;
		}
		if(p->pLeft != NULL)
		{
			p = p->pLeft;
		}
		else if(sp == -1)
				break;
			 else p = Stack[sp--];
		i++;
	}
	
	Quicksort_VT(arrtmp, 0, i - 1);
	// xu li in theo trang
	for(int q = 0; q < 18; q++)
	{
		gotoxy(X_VT + 1 + 1, Y_VT + q + 3 + 18);
		cout << "    ";
		gotoxy(X_VT + 1 + 6, Y_VT + q + 3 + 18);
		cout << "              ";
		gotoxy(X_VT + 1 + 21, Y_VT + q + 3 + 18);
		cout << "                             ";
		gotoxy(X_VT + 1 + 51, Y_VT + q + 3 + 18);
		cout << "       ";
		gotoxy(X_VT + 1 + 59, Y_VT + q + 3 + 18);
		cout << "           ";
		
	}
	gotoxy(X_VT + 8, Y_VT + 40);
	cout << "      ";
	i++;
	bool thoat = true;
	int Max_1_Page = 18,
		mn = 0;
	int temp = 0, NumPg = 1;;
	VeBang(21, 70, 5, 20, 50, 58, 0, X_VT + 1, Y_VT+18);
	gotoxy(X_VT + 30, Y_VT+17);
	cout << "DANH SACH VAT TU";
	gotoxy(X_VT + 1 + 1, Y_VT + 1 + 18);
	cout << "STT"; // 4
	gotoxy(X_VT + 1 + 8, Y_VT + 1 + 18);
	cout << "MA VAT TU"; // 14
	gotoxy(X_VT + 1 + 30, Y_VT + 1 + 18);
	cout << "TEN VAT TU"; // 29
	gotoxy(X_VT + 1 + 53, Y_VT + 1 + 18);
	cout << "DVT"; // 7
	gotoxy(X_VT + 1 + 60, Y_VT + 1 + 18);
	cout << "SO LUONG";	// 11
	gotoxy(X_VT + 1, Y_VT + 40);
	cout << "Trang "; //6
	do
	{
		int h = 0;
		temp = mn;
		gotoxy(X_VT + 8, Y_VT + 40);
		cout << NumPg;
		for(mn; mn < i; mn++)
		{ 
			gotoxy(X_VT + 1 + 1, Y_VT + h + 3 + 18);
			cout << mn + 1;
			gotoxy(X_VT + 6 + 1, Y_VT + h + 3 + 18);
			cout << arrtmp[mn]->maVT;
			gotoxy(X_VT + 21 + 1, Y_VT + h + 3 + 18);
			cout << arrtmp[mn]->tenVT;
			gotoxy(X_VT + 51 + 1, Y_VT + h + 3 + 18);
			cout << arrtmp[mn]->DVT;
			gotoxy(X_VT + 59 + 1, Y_VT + h + 3 + 18);
			cout << arrtmp[mn]->slTon;
			h++;
			if(h == Max_1_Page || mn == i - 1)
			{
				break;
			}
		}
		char page = _getch();
		if(page == -32)
		{
			page = _getch();
			if(page == PD)
			{
				if(mn == i - 1) 
				{
					mn = temp;
				}
				else
				{
					mn = mn + 1;
					NumPg++;
				}
				for(int q = 0; q < 18; q++)
				{
					gotoxy(X_VT + 1 + 1, Y_VT + q + 3 + 18);
					cout << "    ";
					gotoxy(X_VT + 1 + 6, Y_VT + q + 3 + 18);
					cout << "              ";
					gotoxy(X_VT + 1 + 21 , Y_VT + q + 3 + 18);
					cout << "                             ";
					gotoxy(X_VT + 1 + 51, Y_VT + q + 3 + 18);
					cout << "       ";
					gotoxy(X_VT + 1 + 59, Y_VT + q + 3 + 18);
					cout << "           ";
					gotoxy(X_VT + 8, Y_VT + 40);
					cout << "      ";
				}
			}
			else if (page == PU)
			{
				if(mn == 17)
				{
					mn = temp;
				}
				else
				{
					if(mn == i - 1)
					{
						if(NumPg == 1)
						{
							mn = temp;
						}
						else 
						{
							NumPg--;
							mn = mn - h - 17;
						}
					}
					else
					{
						mn = mn - 35;
						NumPg--;
					} 
				} 
				for(int q = 0; q < 18; q++)
				{
					gotoxy(X_VT + 1 + 1, Y_VT + q + 3 + 18);
					cout << "    ";
					gotoxy(X_VT + 1 + 6, Y_VT + q + 3 + 18);
					cout << "              ";
					gotoxy(X_VT + 1 + 21, Y_VT + q + 3 + 18);
					cout << "                             ";
					gotoxy(X_VT + 1 + 51, Y_VT + q + 3 + 18);
					cout << "       ";
					gotoxy(X_VT + 1 + 59, Y_VT + q + 3 + 18);
					cout << "           ";
					gotoxy(X_VT + 8, Y_VT + 40);
					cout << "      ";
				}
			}
			else if(page == RIGHT || page == LEFT || page == UP || page == DOWN)
			{
				if(page == RIGHT)
					key = RIGHT;
				else if(page == LEFT)
					key = LEFT;
				else if(page == UP)
				{
					key = UP;
				}
				else if (page == DOWN)
				{
					key = DOWN;
				}
				thoat = false;
			}
		}
		else if (page == F9)
		{
			key = F9;
			thoat = false;
		}
		else mn = temp;	
	} while(thoat);
	
}

void VTMAX(TREE_VT t, LIST_HD l)
{
	TREE_VT p1 = t;
	VAT_TU *arrtmp1[500]; // mang tam luu vat tu
	TREE_VT Stack1[500];
	int sp1 = -1;
	int i1 = 0;
	//---dung stack chep ds vat tu tu cay qua mang tam-------
	while(p1 != NULL)
	{
		arrtmp1[i1] = new VAT_TU;
		strcpy(arrtmp1[i1]->maVT, p1->data.maVT);
		arrtmp1[i1]->tenVT = p1->data.tenVT;
		arrtmp1[i1]->DVT = p1->data.DVT;
		arrtmp1[i1]->slTon = p1->data.slTon;
		if(p1->pRight != NULL)
		{
			Stack1[++sp1] = p1->pRight;
		}
		if(p1->pLeft != NULL)
		{
			p1 = p1->pLeft;
		}
		else if(sp1 == -1)
				break;
			 else p1 = Stack1[sp1--];
		i1++;
	}
	unsigned int *toida = new unsigned int[i1];// mang luu cac tong doanh thu cua cac vat tu
	int xuat = 0;
	DAT y1;
	DAT y2;
	//---tra ve ngay hien tai
	time_t baygio = time(0);
   	tm *ltm = localtime(&baygio);
   	//-----gan ngay hien tai---
	y2.day = ltm->tm_mday;
	y2.month = 1 + ltm->tm_mon;
	y2.year = 1900 + ltm->tm_year;
	//------------------------
	int rong, posx, posy, dai;
	rong = 2;
	dai = 5;
	posx = X_VT + 95;
	posy = Y_VT + 10;
	string *item = new string[6];
	item[0] = "CHON KHOANG THOI GIAN";
	item[1] = "Tu ngay:";
	item[2] = "Den ngay:";
	item[3] = "10 VAT TU CO DOANH THU CAO NHAT TRONG KHOANG THOI GIAN";
	item[4] = "Tu";
	item[5] = "den";
	TextColor(MAU_CONSOLE);
	VeKhung(rong + 4, posx - 2, posy - 3, 76);
	gotoxy(posx, posy);
	cout << item[1];
	VeKhung(rong, posx + item[1].length() + 1, posy - 1, dai);
	gotoxy(getx() + 5, posy);
	cout << "/";
	VeKhung(rong, getx() + 1, posy - 1, dai);
	gotoxy(getx() + 5, posy);
	cout << "/";
	VeKhung(rong, getx() + 1, posy - 1, dai + 2);
	gotoxy(getx() + 6, posy);
	cout << item[2];
	VeKhung(rong, getx() + 1, posy - 1, dai);
	gotoxy(getx() + 5, posy);
	cout << "/";
	VeKhung(rong, getx() + 1, posy - 1, dai);
	gotoxy(getx() + 5, posy);
	cout << "/";
	VeKhung(rong, getx() + 1, posy - 1, dai + 2);
	char key;
	int line = 0;
	char numlenday1[3] = {'\0'}, numlenday2[3] = {'\0'}, numlenmonth1[3] = {'\0'}, numlenmonth2[3] = {'\0'}, numlenyear1[4] = {'\0'}, numlenyear2[4] = {'\0'};
	itoa(y2.day, numlenday2, 10);
	itoa(y2.month, numlenmonth2, 10);
	itoa(y2.year, numlenyear2, 10);
	//---- hien ngay thang hien tai-----
	gotoxy(posx + item[1].length() + 40, posy);
	cout << y2.day;
	gotoxy(posx + item[1].length() + 49, posy);
	cout << y2.month;
	gotoxy(posx + item[1].length() + 58, posy);
	cout << y2.year;
	while(true)
	{
		switch(line)
		{
			case 0:
				{
					gotoxy(posx + item[1].length() + 3 + strlen(numlenday1), posy);
					NhapNGAY(y1.day, numlenday1, key, 2);
					break;
				}
			case 1:
				{
					gotoxy(posx + item[1].length() + 12 + strlen(numlenmonth1), posy);
					NhapTHANG(y1.month, numlenmonth1, key, 2);
					break;
				}
			case 2:
				{
					gotoxy(posx + item[1].length() + 21 + strlen(numlenyear1), posy);
					NhapNAM(y1.year, numlenyear1, key, 4);
					break;
				}
			case 3:
				{
					gotoxy(posx + item[1].length() + 40 + strlen(numlenday2), posy);
					NhapNGAY(y2.day, numlenday2, key, 2);
					break;
				}
			case 4:
				{
					gotoxy(posx + item[1].length() + 49 + strlen(numlenmonth2), posy);
					NhapTHANG(y2.month, numlenmonth2, key, 2);
					break;
				}
			case 5:
				{
					gotoxy(posx + item[1].length() + 58 + strlen(numlenyear2), posy);
					NhapNAM(y2.year, numlenyear2, key, 4);
					break;
				}
		}
		if(key == LEFT)
		{
			if(line == 0)
			{
				line = 5;
			}
			else line--;
		}
		if(key == RIGHT)
		{
			if(line >= 5)
			{
				line = 0;
			}
			else line++;
		}
		if(key == ENTER)
		{
			if(strlen(numlenday1) == 0 || strlen(numlenday2) == 0 || strlen(numlenmonth1) == 0 || strlen(numlenmonth2) == 0 || strlen(numlenyear1) == 0 || strlen(numlenyear2) == 0)
			{
				gotoxy(posx + 2, posy + 28);
				TextColor(MAUNEN);
				cout << "KHONG DUOC DE TRONG CAC TRUONG!";
				Sleep(700);
				gotoxy(posx + 2, posy + 28);
				TextColor(MAU_CONSOLE);
				cout << "                               ";
				continue;
			}
			//----kiem tra ngay thang
			if(CheckDay(y1) == TRUE)
			{
				continue;
			}
			if(CheckDay(y2) == TRUE)
			{		
				continue;
			}
			gotoxy(posx + 8, posy + 5);
			cout << item[3];
			gotoxy(posx + 23, posy + 6);
			cout << "Tu " << y1.day << "/" << y1.month << "/" << y1.year << " den " << y2.day << "/" << y2.month << "/" << y2.year;
			VeBang(13, 70, 7, 21, 48, 0, 0, posx, posy + 8);
			gotoxy(posx + 2, posy + 9);
			cout << "STT";
			gotoxy(getx() + 5, posy + 9);
			cout << "MA VAT TU";
			gotoxy(getx() + 10, posy + 9);
			cout << "TEN VAT TU";
			gotoxy(getx() + 16, posy + 9);
			cout << "DOANH THU";
			//--tinh doanh thu---------------
			for (int k = 0; k <= i1; k++)
			{
				unsigned int max = 0;// tong doanh thu cua vat tu
				if(l.pHead != NULL || l.pTail != NULL)
				{
					for (NODE_HD *p = l.pHead; p != NULL; p = p->pNext)
					{
						if (strcmp(p->data.loai, "X") == 0)
						{
							if (Totime(y1) <= Totime(p->data.date) && Totime(p->data.date) <= Totime(y2))
							{
								for (int t = 0; t < p->data.cthd->n; t++)
								{
									if (strcmp(arrtmp1[k]->maVT, p->data.cthd->Node_HD[t].maVT) == 0)
									{
										max = max + (p->data.cthd->Node_HD[t].soLuong * p->data.cthd->Node_HD[t].donGia) + ((p->data.cthd->Node_HD[t].VAT / 100) * p->data.cthd->Node_HD[t].donGia * p->data.cthd->Node_HD[t].soLuong);
									}
								}
							}
						}
					//	else continue;
					}
					toida[k] = max;					
				}		
			}
			Quicksort_Max(t, arrtmp1, toida, 0, i1 - 1);
			//----in 10 vat tu daonh thu cao nhat------
			for(int q = 0; q < 10; q++)
			{
				gotoxy(posx + 2, posy + 9 + q + 2);
				cout << "     ";
				gotoxy(posx + 9, posy + 9 + q + 2);
				cout <<  "           ";
				gotoxy(posx + 23, posy + 9 + q + 2);
				cout <<  "                    ";
				gotoxy(posx + 50, posy + 9 + q + 2);
				cout << "                 ";
			}
			
			if(l.pHead != NULL || l.pTail != NULL)
			{
				char slide;
				unsigned int luu = 0;
				int z = 0, st1= 0, mn = 0, mn1 = 0;
				while(true)
				{
					int stt = 0;
					mn = z;
					mn1 = st1;
					for (z; z < i1; z++)
					{
						if(toida[z] > 0 && (luu == 0 || toida[z] == luu))
						{
							gotoxy(posx + 2, posy + 9 + stt + 2);
							cout << st1 + 1;
							gotoxy(posx + 9, posy + 9 + stt + 2);
							cout <<  arrtmp1[z]->maVT;
							gotoxy(posx + 23, posy + 9 + stt + 2);
							cout <<  arrtmp1[z]->tenVT;
							gotoxy(posx + 50, posy + 9 + stt + 2);
							cout << toida[z];
							stt++;
							st1++;
						}
						if(stt == 10 || st1 == i1 - 1)
						{
							break;
						}
					}
					slide = _getch();
					if(slide == -32)
					{
						slide = _getch();
						if(slide == PD)
						{
							if(toida[st1] == toida[st1 - 1])
							{
								z = z + 1;
								luu = toida[st1 - 1];
							}
							else
							{
								if(st1 == i1 - 1)
								{
									z = 0;
								}
								else
								{
									st1 = mn1;
									z = mn;
								}
							}
							
							for(int q = 0; q < 10; q++)
							{
								gotoxy(posx + 2, posy + 9 + q + 2);
								cout << "     ";
								gotoxy(posx + 9, posy + 9 + q + 2);
								cout <<  "           ";
								gotoxy(posx + 23, posy + 9 + q + 2);
								cout <<  "                    ";
								gotoxy(posx + 50, posy + 9 + q + 2);
								cout << "                 ";
							}
						}
						if(slide == PU)
						{
							st1 = mn1;
							z = mn;
						}
					}
					else if(slide == ESC)
							break;
					else 
					{
						st1 = mn1;
						z = mn;
					}
				}
			}
			//-----------------
		}
		if(key == ESC)
		{
			//-clear--
			XoaKhung(rong + 4, posx - 2, posy - 3, 76);
			gotoxy(posx, posy);
			cout << "                                                                                       ";
			gotoxy(posx, posy + 1);
			cout << "                                                                                       ";
			gotoxy(posx, posy + 2);
			cout << "                                                                                       ";
			gotoxy(posx, posy - 1);
			cout << "                                                                                       ";
			XoaKhung(rong, getx() + 1, posy - 1, dai + 2);
			gotoxy(posx + 8, posy + 5);
			cout << "                                                                           ";
			gotoxy(posx + 23, posy + 6);
			cout << "                                                        ";
			gotoxy(posx, posy + 8);
			cout << "                                                                          ";
			gotoxy(posx, posy + 21);
			cout << "                                                                          ";
			gotoxy(posx, posy + 10);
			cout << "                                                                          ";
			gotoxy(posx, posy + 9);
			cout << "                                                                          ";
			for(int i = 0; i < 13; i++)
			{
				gotoxy(posx, posy + 9 + i);
				cout << " ";
				gotoxy(posx + 7, posy + 9 + i);
				cout << " ";
				gotoxy(posx + 21, posy + 9 + i);
				cout << " ";
				gotoxy(posx + 48, posy + 9 + i);
				cout << " ";
				gotoxy(posx + 70, posy + 9 + i);
				cout << " ";
			}
			for(int i = 0; i < 13; i++)
			{
				gotoxy(posx + 2, posy + 9 + i);
				cout << "     ";
				gotoxy(posx + 9, posy + 9 + i);
				cout << "              ";
				gotoxy(posx + 23, posy + 9 + i);
				cout << "                          ";
				gotoxy(posx + 50, posy + 9 + i );
				cout << "            ";
			}
			break;
		}
	}
}

void QLVT(TREE_VT &t, LIST_HD l)
{
	Ve_Giao_Dien();
	int posxBT = X_VT + 95,
		posyBT = Y_VT + 2;
	string *itemBT = new string[4];
	itemBT[0] = "THEM VAT TU";
	itemBT[1] = "HIEU CHINH VAT TU";
	itemBT[2] = "XOA VAT TU";
	itemBT[3] = "VAT TU DOANH THU CAO NHAT";
	gotoxy(posxBT, posyBT - 2);
	TextColor(MAUOPTION);
	cout << "CHON CHUC NANG";
	gotoxy(X_STTBAR, Y_STTBAR);
	TextColor(MAU_STTBAR);
	cout << "HOT KEY: ESC: Thoat/Huy/Tro ve - ENTER: Chon/Luu - PageUp: Trang truoc - PageDown: Trang sau - F10: Quay ve xem danh sach vat tu";
	VeButton(3, posxBT, posyBT, itemBT[0], MAUNENBT_NSL, MAUTEXTBT_NSL); // them
	VeButton(3, posxBT + 19, posyBT, itemBT[1], MAUNENBT_NSL, MAUTEXTBT_NSL); // sua
	VeButton(3, posxBT + 44, posyBT, itemBT[2], MAUNENBT_NSL, MAUTEXTBT_NSL); // xoa
	VeButton(3, posxBT + 62, posyBT, itemBT[3], MAUNENBT_NSL, MAUTEXTBT_NSL); // doanh thu
	TextColor(MAU_CONSOLE);
	VeBangNotif(2, 100, posxBT, posyBT + 35);
	char key;
	while(true)
	{
		TextColor(MAU_CONSOLE);
		CopyVT(t, key);
		if(key == ESC) break;
		int line1 = -1;
		while(true)
		{
			if(key == RIGHT)
			{
				line1++;
				if(line1 >= 4)
					line1 = 0;		
				if(line1 == 0)
				{
					VeButton(3, posxBT, posyBT, itemBT[0], MAUNENBT_SL, MAUTEXTBT_SL); // them
					VeButton(3, posxBT + 19, posyBT, itemBT[1], MAUNENBT_NSL, MAUTEXTBT_NSL); // sua
					VeButton(3, posxBT + 44, posyBT, itemBT[2], MAUNENBT_NSL, MAUTEXTBT_NSL); // xoa
					VeButton(3, posxBT + 62, posyBT, itemBT[3], MAUNENBT_NSL, MAUTEXTBT_NSL); // doanh thu
				}
				else if(line1 == 1)
				{
					VeButton(3, posxBT, posyBT, itemBT[0], MAUNENBT_NSL, MAUTEXTBT_NSL); // them
					VeButton(3, posxBT + 19, posyBT, itemBT[1], MAUNENBT_SL, MAUTEXTBT_SL); // sua
					VeButton(3, posxBT + 44, posyBT, itemBT[2], MAUNENBT_NSL, MAUTEXTBT_NSL); // xoa
					VeButton(3, posxBT + 62, posyBT, itemBT[3], MAUNENBT_NSL, MAUTEXTBT_NSL); // doanh thu
				}
				else if(line1 == 2)
				{
					VeButton(3, posxBT, posyBT, itemBT[0], MAUNENBT_NSL, MAUTEXTBT_NSL); // them
					VeButton(3, posxBT + 19, posyBT, itemBT[1], MAUNENBT_NSL, MAUTEXTBT_NSL); // sua
					VeButton(3, posxBT + 44, posyBT, itemBT[2], MAUNENBT_SL, MAUTEXTBT_SL); // xoa
					VeButton(3, posxBT + 62, posyBT, itemBT[3], MAUNENBT_NSL, MAUTEXTBT_NSL); // doanh thu
				}
				else if(line1 == 3)
				{
					VeButton(3, posxBT, posyBT, itemBT[0], MAUNENBT_NSL, MAUTEXTBT_NSL); // them
					VeButton(3, posxBT + 19, posyBT, itemBT[1], MAUNENBT_NSL, MAUTEXTBT_NSL); // sua
					VeButton(3, posxBT + 44, posyBT, itemBT[2], MAUNENBT_NSL, MAUTEXTBT_NSL); // xoa
					VeButton(3, posxBT + 62, posyBT, itemBT[3], MAUNENBT_SL, MAUTEXTBT_SL); // doanh thu
				}
				
									
			}
			if(key == LEFT)
			{
				line1--;
				if(line1 <= -1)
					line1 = 3;
				if(line1 == 0)
				{
					VeButton(3, posxBT, posyBT, itemBT[0], MAUNENBT_SL, MAUTEXTBT_SL); // them
					VeButton(3, posxBT + 19, posyBT, itemBT[1], MAUNENBT_NSL, MAUTEXTBT_NSL); // sua
					VeButton(3, posxBT + 44, posyBT, itemBT[2], MAUNENBT_NSL, MAUTEXTBT_NSL); // xoa
					VeButton(3, posxBT + 62, posyBT, itemBT[3], MAUNENBT_NSL, MAUTEXTBT_NSL); // doanh thu
				}
				else if(line1 == 1)
				{
					VeButton(3, posxBT, posyBT, itemBT[0], MAUNENBT_NSL, MAUTEXTBT_NSL); // them
					VeButton(3, posxBT + 19, posyBT, itemBT[1], MAUNENBT_SL, MAUTEXTBT_SL); // sua
					VeButton(3, posxBT + 44, posyBT, itemBT[2], MAUNENBT_NSL, MAUTEXTBT_NSL); // xoa
					VeButton(3, posxBT + 62, posyBT, itemBT[3], MAUNENBT_NSL, MAUTEXTBT_NSL); // doanh thu
				}
				else if(line1 == 2)
				{
					VeButton(3, posxBT, posyBT, itemBT[0], MAUNENBT_NSL, MAUTEXTBT_NSL); // them
					VeButton(3, posxBT + 19, posyBT, itemBT[1], MAUNENBT_NSL, MAUTEXTBT_NSL); // sua
					VeButton(3, posxBT + 44, posyBT, itemBT[2], MAUNENBT_SL, MAUTEXTBT_SL); // xoa
					VeButton(3, posxBT + 62, posyBT, itemBT[3], MAUNENBT_NSL, MAUTEXTBT_NSL); // doanh thu
				}
				else if(line1 == 3)
				{
					VeButton(3, posxBT, posyBT, itemBT[0], MAUNENBT_NSL, MAUTEXTBT_NSL); // them
					VeButton(3, posxBT + 19, posyBT, itemBT[1], MAUNENBT_NSL, MAUTEXTBT_NSL); // sua
					VeButton(3, posxBT + 44, posyBT, itemBT[2], MAUNENBT_NSL, MAUTEXTBT_NSL); // xoa
					VeButton(3, posxBT + 62, posyBT, itemBT[3], MAUNENBT_SL, MAUTEXTBT_SL); // doanh thu
				}
				
				
			}
			if(key == ENTER)
			{
				switch(line1)
				{
					case 0:
						{
							Create_VT(t);
							VeButton(3, posxBT, posyBT, itemBT[0], MAUNENBT_NSL, MAUTEXTBT_NSL); // them
							VeButton(3, posxBT + 19, posyBT, itemBT[1], MAUNENBT_NSL, MAUTEXTBT_NSL); // sua
							VeButton(3, posxBT + 44, posyBT, itemBT[2], MAUNENBT_NSL, MAUTEXTBT_NSL); // xoa
							VeButton(3, posxBT + 62, posyBT, itemBT[3], MAUNENBT_NSL, MAUTEXTBT_NSL); // doanh thu
							break;
						}
					case 1:
						{
							Fix_VT(t);
							VeButton(3, posxBT, posyBT, itemBT[0], MAUNENBT_NSL, MAUTEXTBT_NSL); // them
							VeButton(3, posxBT + 19, posyBT, itemBT[1], MAUNENBT_NSL, MAUTEXTBT_NSL); // sua
							VeButton(3, posxBT + 44, posyBT, itemBT[2], MAUNENBT_NSL, MAUTEXTBT_NSL); // xoa
							VeButton(3, posxBT + 62, posyBT, itemBT[3], MAUNENBT_NSL, MAUTEXTBT_NSL); // doanh thu
							break;
						}
					case 2:
						{
							Delete_VT(t);
							VeButton(3, posxBT, posyBT, itemBT[0], MAUNENBT_NSL, MAUTEXTBT_NSL); // them
							VeButton(3, posxBT + 19, posyBT, itemBT[1], MAUNENBT_NSL, MAUTEXTBT_NSL); // sua
							VeButton(3, posxBT + 44, posyBT, itemBT[2], MAUNENBT_NSL, MAUTEXTBT_NSL); // xoa
							VeButton(3, posxBT + 62, posyBT, itemBT[3], MAUNENBT_NSL, MAUTEXTBT_NSL); // doanh thu
							break;
						}
					case 3:
						{
							VTMAX(t, l);
							VeButton(3, posxBT, posyBT, itemBT[0], MAUNENBT_NSL, MAUTEXTBT_NSL); // them
							VeButton(3, posxBT + 19, posyBT, itemBT[1], MAUNENBT_NSL, MAUTEXTBT_NSL); // sua
							VeButton(3, posxBT + 44, posyBT, itemBT[2], MAUNENBT_NSL, MAUTEXTBT_NSL); // xoa
							VeButton(3, posxBT + 62, posyBT, itemBT[3], MAUNENBT_NSL, MAUTEXTBT_NSL); // doanh thu
							break;
						}
				}
				break;
			}
			if(key == F10)
			{
				VeButton(3, posxBT, posyBT, itemBT[0], MAUNENBT_NSL, MAUTEXTBT_NSL); // them
				VeButton(3, posxBT + 19, posyBT, itemBT[1], MAUNENBT_NSL, MAUTEXTBT_NSL); // sua
				VeButton(3, posxBT + 44, posyBT, itemBT[2], MAUNENBT_NSL, MAUTEXTBT_NSL); // xoa
				VeButton(3, posxBT + 62, posyBT, itemBT[3], MAUNENBT_NSL, MAUTEXTBT_NSL); // doanh thu
				break;
			}
			key = _getch();	
		}
	}
}

//	DANH SACH NHAN VIEN
void InitNV(NODE_NV &p)
{
	p.n = 0;
}

int isEmpty(NODE_NV &p)
{
	return(p.n == 0 ? TRUE : FALSE);
}

int isFull(NODE_NV &p)
{
	return(p.n == MAX_NV ? TRUE : FALSE);
}
void LoadNV(NODE_NV &p)
{
	fstream inFile;
	inFile.open("D:/Dev-Cpp/New Update Project 3/Do_an_moi-master5/DATA/DS_NhanVien.txt", ios::in);
	string temp;
	if(inFile.is_open())
	{	
		while(!inFile.eof())
		{
			p.Node_NV[p.n] = new NHAN_VIEN;
			getline(inFile, temp);
			inFile.getline(p.Node_NV[p.n]->maNV, 21);
			getline(inFile, p.Node_NV[p.n]->ho);
			getline(inFile, p.Node_NV[p.n]->ten);
			inFile >> p.Node_NV[p.n]->phai;
			p.n++;
			if(inFile == NULL)
				break;
		}
//		gotoxy(43 + 60 + 10, 10);
//		cout << "Thanh cong!";
	}
	else
	{
		gotoxy(43 + 60 + 10, 10);
		cout << "Load file that bai!";
	}
	inFile.close();
}
void Save_NV(NODE_NV p)
{
	fstream outFile;
	outFile.open("D:/Dev-Cpp/New Update Project 3/Do_an_moi-master5/DATA/DS_NhanVien.txt", ios::out);
	int i = 0;
	if(outFile.is_open())
	{
		while(i < p.n)
		{
			outFile << endl << p.Node_NV[i]->maNV;
			outFile << endl << p.Node_NV[i]->ho;
			outFile << endl << p.Node_NV[i]->ten;
			outFile << endl << p.Node_NV[i]->phai;
			i++;
		}
	}
	else
	{
		cout << "\nKet noi voi file that bai!";
	}
	outFile.close();
}
int SearchMANV(NODE_NV p, char *ma)
{
	if(!isEmpty(p))
	{
		for(int i = 0; i < p.n; i++)
		{
			if(strcmp(ma, p.Node_NV[i]->maNV) == 0)
			{
				return TRUE;
			}
		}
		return FALSE;
	}
	return FALSE;
}
NHAN_VIEN *Search_NVHD(NODE_NV p, char *ma)
{
	if(!isEmpty(p))
	{
		for(int i = 0; i < p.n; i++)
		{
			if(p.Node_NV[i]->dshd != NULL)
			{
				for(NODE_HD *k = p.Node_NV[i]->dshd; k != NULL; k = k->pNext)
				{
					if(strcmp(k->data.soHD, ma) == 0)
					{
						return p.Node_NV[i];
					}
				}
				
			}
		}
	}
}
void Input_NV(NODE_NV &p)
{
	TextColor(MAU_CONSOLE);
	int dem = 0;
	int i = 0;
	//int thoat = 0;
	char nv;
	int a = 0;
	int rong, dai, posx, posy;
	rong = 20;
	dai = 100;
	posx = X_VT + 95;
	posy = Y_VT + 10;
	string *item = new string[4];
	item[0] = "Ma nhan vien";
	item[1] = "Ho nhan vien";
	item[2] = "Ten nhan vien";
	item[3] = "Phai";
	string s, s0, s1, s2, s3, s4; 
	s = "Luu thay doi?";
	s0 = "THEM NHAN VIEN";
	s1 = "CO";	
	s2 = "KHONG";
	s3 = "NAM";
	s4 = "NU";	
	VeKhung(rong,posx,posy,dai);
	gotoxy(posx - s0.length() / 2 + dai / 2, posy);	
	cout << s0;		
	VeKhung(2,posx + 1 + item[0].length() + 2,posy + 1,dai - item[0].length() - 4); // khung nhap ma
	VeKhung(2,posx + 1 + item[0].length() + 2,posy + 4,dai - item[0].length() - 4); // khung nhap ho
	VeKhung(2,posx + 1 + item[0].length() + 2,posy + 7,dai - item[0].length() - 4); // khung nhap ten
	VeButton(1,posx - s.length() / 2 + 50 / 3 + dai / 2 - 30,26,s4,MAUNENBT_NSL,MAUTEXTBT_NSL); // nu
	VeButton(1,posx + s.length() / 2 - 50 / 2 + dai / 2 - 15,26,s3,MAUNENBT_SL,MAUTEXTBT_SL); // nam
	TextColor(MAU_CONSOLE);
	char key;
	bool editcontinue = true;
	while(editcontinue)
	{
		char tmpma[14] = {'\0'};
		char tmpho[24] = {'\0'};
		char tmpten[17] = {'\0'};
		int x = -1, jump = 0, line = 0, tt = 2; // jump: xac dinh vi tri tiep theo de ve khung nhap - line: thao tac dang chon - tt: con tro tai khung dang nhap
		
		if(!kbhit())
		{
			for(int i = 0; i < 4; i++)
				{
					gotoxy(posx + 1, posy + 2 + i + jump);
					cout << item[i];
					jump+=2;
				}
				// dieu khien nhap
				rewind(stdin);
				while(editcontinue)
				{
					TextColor(MAU_CONSOLE);
					gotoxy(posx + 1 + item[0].length() + 3, posy + tt);
					char click;
					switch(line)
						{
							case 0:
								{
									gotoxy(posx + 1 + item[line].length() + 3 + strlen(tmpma), posy + tt);
									NhapCHUOISO(tmpma,'U', key, 14);
									if(!isEmpty(p))
									{
										if(SearchMANV(p, tmpma) == TRUE)
										{
											TextColor(MAUNEN);
											gotoxy(posx + 2, posy + 28);
											cout << "MA NHAN VIEN DA CO!";
											TextColor(MAU_CONSOLE);
										}
										else
										{
											TextColor(MAU_CONSOLE);
											gotoxy(posx + 2, posy + 28);
											cout << "                                      ";	
										}
									}																	
									break;	
								}
								
							case 1:
								{
									gotoxy(posx + 1 + item[line].length() + 3 + strlen(tmpho), posy + tt);
									NhapCHUOI(tmpho, key,24);																
									break;
								}
								
							case 2:
								{
									gotoxy(posx + 1 + item[line].length() + 3 + strlen(tmpten), posy + tt);
									NhapCHUOI(tmpten, key,17);	
									break;
								}
							case 3:
								{
									break;
								}	
						}
					if (key == UP)
					{
						
						if (line == 0)
						{
							line = 3;
							tt = 11;
						}
						else
						{
							tt-=3;
							line--;
						}
						
					}
					if(key == DOWN)
					{
						if (line >= 2)
						{
							VeButton(1,posx - s.length() / 2 + 50 / 3 + dai / 2 - 30,26,s4,MAUNENBT_NSL,MAUTEXTBT_NSL); // nu
							VeButton(1,posx + s.length() / 2 - 50 / 2 + dai / 2 - 15,26,s3,MAUNENBT_SL,MAUTEXTBT_SL); // nam
							char click2;
							int line2 = 0;
							while(true)
							{
								click2 = _getch();
								if(click2 == RIGHT)
								{
									VeButton(1,posx - s.length() / 2 + 50 / 3 + dai / 2 - 30,26,s4,MAUNENBT_SL,MAUTEXTBT_SL); // nu
									VeButton(1,posx + s.length() / 2 - 50 / 2 + dai / 2 - 15,26,s3,MAUNENBT_NSL,MAUTEXTBT_NSL); // nam
									line2++;
									if(line2 >= 1)
										line2 = 1;								
								}
								if(click2 == LEFT)
								{
									VeButton(1,posx + s.length() / 2 - 50 / 2 + dai / 2 -15,26,s3,MAUNENBT_SL,MAUTEXTBT_SL); // nam
									VeButton(1,posx - s.length() / 2 + 50 / 3 + dai / 2 - 30,26,s4,MAUNENBT_NSL,MAUTEXTBT_NSL); // nu
									line2--;
									if(line2 == 0)
										line2 = 0;
								}
								if(click2 == UP || click2 == DOWN)
									break;
								if(click2 == ENTER)
								{
									if(line2 == 0)
										x = 0;
									else if(line2 == 1)
										x = 1;
									break;
								}
							}
							line = 0;
							tt = 2;
						}
						else
						{
							tt+=3;
							line++;
						}	
						
					}
					if(key == ENTER)
					{	
						if(strlen(tmpma) == 0 || strlen(tmpho) == 0 || strlen(tmpten) == 0)
						{
							TextColor(MAUNEN);
							gotoxy(posx + 2, posy + 28);
							cout << "KHONG DUOC DE TRONG CAC TRUONG!";		
							Sleep(700);
							TextColor(MAU_CONSOLE);
							gotoxy(posx + 2, posy + 28);
							cout << "                               ";			
							continue;
						}
						if(x == -1)
						{
							TextColor(MAUNEN);
							gotoxy(posx + 2, posy + 28);
							cout << "VUI LONG CHON PHAI!";		
							Sleep(700);
							TextColor(MAU_CONSOLE);
							gotoxy(posx + 2, posy + 28);
							cout << "                    ";			
							continue;
						}
						if(!isEmpty(p))
						{
							if(SearchMANV(p, tmpma) == TRUE)
							{
								TextColor(MAUNEN);
								gotoxy(posx + 2, posy + 28);
								cout << "MA NHAN VIEN DA CO! NHAP LAI!";
								Sleep(700);
								TextColor(MAU_CONSOLE);
								gotoxy(posx + 2, posy + 28);
								cout << "                                      ";				
								continue;	
							}
						}
						VeKhung(5,posx - 50 / 2 + dai / 2,29,50);
						gotoxy(posx - s.length() / 2 + dai / 2, 29);
						cout << s;
						VeButton(1,posx - s.length() / 2 + 50 / 3 + dai / 2 - 1,32,s2,MAUNENBT_NSL,MAUTEXTBT_NSL); // no
						VeButton(1,posx + s.length() / 2 - 50 / 2 + dai / 2,32,s1,MAUNENBT_SL,MAUTEXTBT_SL); // yes
						char click1;
						int line1 = 0;
						while(editcontinue)
						{
							click1 = _getch();
							if(click1 == RIGHT)
							{
								VeButton(1,posx - s.length() / 2 + 50 / 3 + dai / 2 - 1,32,s2,MAUNENBT_SL,MAUTEXTBT_SL); // no
								VeButton(1,posx + s.length() / 2 - 50 / 2 + dai / 2,32,s1,MAUNENBT_NSL,MAUTEXTBT_NSL); // yes
								line1++;
								if(line1 >= 1)
									line1 = 1;								
							}
							if(click1 == LEFT)
							{
								VeButton(1,posx + s.length() / 2 - 50 / 2 + dai / 2,32,s1,MAUNENBT_SL,MAUTEXTBT_SL); // yes
								VeButton(1,posx - s.length() / 2 + 50 / 3 + dai / 2 - 1,32,s2,MAUNENBT_NSL,MAUTEXTBT_NSL); // no
								line1--;
								if(line1 == 0)
									line1 = 0;
							}
							if(click1 == ENTER)
							{
								switch(line1)
								{
									case 0:
										{
											//----them 1 nhan vien vao danh sach
											if(!isFull(p))
											{
												p.Node_NV[p.n] = new NHAN_VIEN;
												strcpy(p.Node_NV[p.n]->maNV, tmpma);
												p.Node_NV[p.n]->ho = tmpho;
												p.Node_NV[p.n]->ten = tmpten;
												p.Node_NV[p.n]->phai = x;
												p.n++;
												//-----------------------
												gotoxy(posx + 2, posy + 28);
												TextColor(MAUNEN_SUCCESS);
												cout << "THEM THANH CONG!";
												Sleep(700);
												gotoxy(posx + 2, posy + 28);
												TextColor(MAU_CONSOLE);
												cout << "                ";
												for(int i = 0; i <= rong; i++)
												{
													for(int j = 0; j <= dai; j++)
													{
														gotoxy(posx + j, posy + i);
														cout << " ";
													}
													cout << endl;
												}
												editcontinue = false;
												break;
											}
											else
											{
												gotoxy(posx + 2, posy + 28);
												TextColor(MAUNEN_SUCCESS);
												cout << "DANH SACH NHAN VIEN DA DAY!";
												Sleep(700);
												gotoxy(posx + 2, posy + 28);
												TextColor(MAU_CONSOLE);
												cout << "                           ";
												for(int i = 0; i <= rong; i++)
												{
													for(int j = 0; j <= dai; j++)
													{
														gotoxy(posx + j, posy + i);
														cout << " ";
													}
													cout << endl;
												}
												editcontinue = false;
												break;
											}
											
										}
									case 1:
										{
											TextColor(MAU_CONSOLE);
											for(int i = 0; i <= rong; i++)
											{
												for(int j = 0; j <= dai; j++)
												{
													gotoxy(posx + j, posy + i);
													cout << " ";
												}
												cout << endl;
											}
											editcontinue = false;
											break;
										}
								}
								break;
							}
							if(key == ESC)
								{
									for(int i = 0; i <= rong; i++)
									{
										for(int j = 0; j <= dai; j++)
										{
											gotoxy(posx + j, posy + i);
											cout << " ";
										}
										cout << endl;
									}
									editcontinue = false;
									break;
								}
						}
					}
					if(key == ESC)
					{
						for(int i = 0; i <= rong; i++)
						{
							for(int j = 0; j <= dai; j++)
							{
								gotoxy(posx + j, posy + i);
								cout << " ";
							}
							cout << endl;
						}
						editcontinue = false;
						break;
					}
				
				}
		}
		
	}
}
void Quicksort_NV(NODE_NV &p, int q, int r)
{
	NHAN_VIEN *temp = new NHAN_VIEN;
	int i = q;
	int j = r;
	int x;
	x = (q + r) / 2;
	do
	{
		while(p.Node_NV[i]->ten < p.Node_NV[x]->ten)
		{
			i++;
		}
		if (p.Node_NV[i]->ten == p.Node_NV[x]->ten)
		{
			while(p.Node_NV[i]->ho < p.Node_NV[x]->ho)
			{
				i++;
			}
		}
		while(p.Node_NV[j]->ten > p.Node_NV[x]->ten)
		{
			j--;
		}
		if (p.Node_NV[j]->ten == p.Node_NV[x]->ten)
		{
			while(p.Node_NV[j]->ho > p.Node_NV[x]->ho)
			{
				j--;
			}
		}
		if (i <= j)
		{
			temp = p.Node_NV[i];
			p.Node_NV[i] = p.Node_NV[j];
			p.Node_NV[j] = temp;
			i++;
			j--;
		}
	}while(i <= j);
	if (q < j)
	{
		Quicksort_NV(p, q, j);
	}
	if (i < r)
	{
		Quicksort_NV(p, i, r);
	}
}
void Output_NV(NODE_NV &p, char &key)
{
	Quicksort_NV(p, 0, p.n - 1);
	for(int q = 0; q < 36; q++)
	{
		gotoxy(X_VT + 1, Y_VT + q + 3);
		cout << "    ";
		gotoxy(X_VT + 6, Y_VT + q + 3);
		cout << "              ";
		gotoxy(X_VT + 21 , Y_VT + q + 3);
		cout << "                 ";
		gotoxy(X_VT + 46, Y_VT + q + 3);
		cout << "                 ";
		gotoxy(X_VT + 64, Y_VT + q + 3);
		cout << "      ";
	}
	gotoxy(X_VT + 8, Y_VT + 40);
	cout << "      ";
	// xu li chuyen trang
	bool thoat = true;
	int Max_1_Page = 36,
		mn = 0;
	int temp = 0, NumPg = 1;
	VeBang(39, 70, 5, 20, 45, 63);
	gotoxy(X_VT + 1, Y_VT + 1);
	cout << "STT";  //4
	gotoxy(X_VT + 7, Y_VT + 1);
	cout << "MA NHAN VIEN"; // 14
	gotoxy(X_VT + 30, Y_VT + 1);
	cout << "HO LOT"; //24
	gotoxy(X_VT + 53, Y_VT + 1);
	cout << "TEN"; // 17
	gotoxy(X_VT + 65, Y_VT + 1);
	cout << "PHAI";	// 6
	gotoxy(X_VT + 1, Y_VT + 40);
	cout << "Trang "; //6
	char page;
	do
	{
		int h = 0;
		temp = mn;
		gotoxy(X_VT + 8, Y_VT + 40);
		cout << NumPg;
		for(mn; mn < p.n; mn++)
		{
			gotoxy(X_VT + 1, Y_VT + h + 3);
			cout << mn + 1;
			gotoxy(X_VT + 6, Y_VT + h + 3);
			cout << p.Node_NV[mn]->maNV;
			gotoxy(X_VT + 21, Y_VT + h + 3);
			cout << p.Node_NV[mn]->ho;
			gotoxy(X_VT + 46, Y_VT + h + 3);
			cout << p.Node_NV[mn]->ten;
			gotoxy(X_VT + 64, Y_VT + h + 3);
			if(p.Node_NV[mn]->phai == 0)
				cout << "Nam";
			else if (p.Node_NV[mn]->phai == 1) cout << "Nu";
			h++;
			if(h == Max_1_Page || mn == p.n - 1)
			{
				break;
			}
		}
		page = _getch();
		if(page == -32)
		{
			page = _getch();
			if(page == PD)
			{
				if(mn == p.n - 1) 
				{
					mn = temp;
				}
				else
				{
					mn = mn + 1;
					NumPg++;
				}
				for(int q = 0; q < 36; q++)
				{
					gotoxy(X_VT + 1, Y_VT + q + 3);
					cout << "    ";
					gotoxy(X_VT + 6, Y_VT + q + 3);
					cout << "             ";
					gotoxy(X_VT + 21 , Y_VT + q + 3);
					cout << "                    ";
					gotoxy(X_VT + 46, Y_VT + q + 3);
					cout << "                 ";
					gotoxy(X_VT + 64, Y_VT + q + 3);
					cout << "      ";
					gotoxy(X_VT + 8, Y_VT + 40);
					cout << "      ";
				}
			}
			else if (page == PU)
			{
				if(mn == 35)
				{
					mn = temp;
				}
				else
				{
					
					if(mn == p.n - 1)
					{
						if(NumPg == 1)
						{
							mn = temp;
						}
						else 
						{
							NumPg--;
							mn = mn - h - 35;
						}
					}
					else
					{
						mn = mn - 35;
					}
				}
				for(int q = 0; q < 36; q++)
				{
					gotoxy(X_VT + 1, Y_VT + q + 3);
					cout << "    ";
					gotoxy(X_VT + 6, Y_VT + q + 3);
					cout << "             ";
					gotoxy(X_VT + 21, Y_VT + q + 3);
					cout << "                    ";
					gotoxy(X_VT + 46, Y_VT + q + 3);
					cout << "                 ";
					gotoxy(X_VT + 64, Y_VT + q + 3);
					cout << "      ";
					gotoxy(X_VT + 8, Y_VT + 40);
					cout << "      ";
				}
				
			}
			else if(page == RIGHT || page == LEFT || page == UP || page == DOWN)
			{
				if(page == RIGHT)
					key = RIGHT;
				else if(page == LEFT)
					key = LEFT;
				else if (page == UP)
				{
					key = UP;
				}
				else if(page == DOWN)
				{
					key = DOWN;
				}
				thoat = false;
			}
		}
		else if (page == ESC)
		{
			key = ESC;
			thoat = false;
		}
		else mn = temp;
	} while(thoat);
}

void Output_NV1(NODE_NV &p, char &key)
{
	Quicksort_NV(p, 0, p.n - 1);
	for(int q = 0; q < 18; q++)
	{
		gotoxy(X_VT + 1 + 1, Y_VT + q + 3 + 18);
		cout << "    ";
		gotoxy(X_VT + 6 + 1, Y_VT + q + 3 + 18);
		cout << "              ";
		gotoxy(X_VT+1 + 21 , Y_VT+18 + q + 3);
		cout << "                 ";
		gotoxy(X_VT+1 + 46, Y_VT+18 + q + 3);
		cout << "                 ";
		gotoxy(X_VT+1 + 64, Y_VT+18 + q + 3);
		cout << "      ";
	}
	gotoxy(X_VT+1 + 8, Y_VT+18 + 40);
	cout << "      ";
	// xu li chuyen trang
	bool thoat = true;
	int Max_1_Page = 18,
		mn = 0;
	int temp = 0, NumPg = 1;
	VeBang(21, 75, 5, 20, 45, 63, 0, X_VT + 1, Y_VT+18);
	gotoxy(X_VT + 30, Y_VT+17);
	cout << "DANH SACH NHAN VIEN";
	gotoxy(X_VT+1 + 1, Y_VT+18 + 1);
	cout << "STT";  //4
	gotoxy(X_VT+1 + 7, Y_VT+18 + 1);
	cout << "MA NHAN VIEN"; // 14
	gotoxy(X_VT+1 + 30, Y_VT+18 + 1);
	cout << "HO LOT"; //24
	gotoxy(X_VT+1 + 53, Y_VT+18 + 1);
	cout << "TEN"; // 17
	gotoxy(X_VT+1 + 65, Y_VT+18 + 1);
	cout << "PHAI";	// 6
	gotoxy(X_VT + 1, Y_VT + 40);
	cout << "Trang "; //6
	char page;
	do
	{
		int h = 0;
		temp = mn;
		gotoxy(X_VT + 8, Y_VT + 40);
		cout << NumPg;
		for(mn; mn < p.n; mn++)
		{
			gotoxy(X_VT+1 + 1, Y_VT+18 + h + 3);
			cout << mn + 1;
			gotoxy(X_VT+1 + 6, Y_VT+18 + h + 3);
			cout << p.Node_NV[mn]->maNV;
			gotoxy(X_VT+1 + 21, Y_VT+18 + h + 3);
			cout << p.Node_NV[mn]->ho;
			gotoxy(X_VT+1 + 46, Y_VT+18 + h + 3);
			cout << p.Node_NV[mn]->ten;
			gotoxy(X_VT+1 + 64, Y_VT+18 + h + 3);
			if(p.Node_NV[mn]->phai == 0)
				cout << "Nam";
			else if (p.Node_NV[mn]->phai == 1) cout << "Nu";
			h++;
			if(h == Max_1_Page || mn == p.n - 1)
			{
				break;
			}
		}
		page = _getch();
		if(page == -32)
		{
			page = _getch();
			if(page == PD)
			{
				if(mn == p.n - 1) 
				{
					mn = temp;
				}
				else
				{
					mn = mn + 1;
					NumPg++;
				}
				for(int q = 0; q < 18; q++)
				{
					gotoxy(X_VT+1 + 1, Y_VT+18 + q + 3);
					cout << "    ";
					gotoxy(X_VT+1 + 6, Y_VT+18 + q + 3);
					cout << "             ";
					gotoxy(X_VT+1 + 21 , Y_VT+18 + q + 3);
					cout << "                    ";
					gotoxy(X_VT+1 + 46, Y_VT+18 + q + 3);
					cout << "                 ";
					gotoxy(X_VT+1 + 64, Y_VT+18 + q + 3);
					cout << "   ";
					gotoxy(X_VT+1 + 8, Y_VT+18 + 40);
					cout << "      ";
				}
			}
			else if (page == PU)
			{
				if(mn == 17)
				{
					mn = temp;
				}
				else
				{
					
					if(mn == p.n - 1)
					{
						if(NumPg == 1)
						{
							mn = temp;
						}
						else 
						{
							NumPg--;
							mn = mn - h - 17;
						}
					}
					else
					{
						mn = mn - 35;
						NumPg--;
					}
				}
				for(int q = 0; q < 18; q++)
				{
					gotoxy(X_VT+1 + 1, Y_VT+18 + q + 3);
					cout << "    ";
					gotoxy(X_VT+1 + 6, Y_VT+18 + q + 3);
					cout << "             ";
					gotoxy(X_VT+1 + 21, Y_VT+18 + q + 3);
					cout << "                    ";
					gotoxy(X_VT+1 + 46, Y_VT+18 + q + 3);
					cout << "                 ";
					gotoxy(X_VT+1 + 64, Y_VT+18 + q + 3);
					cout << "   ";
					gotoxy(X_VT+1 + 8, Y_VT+18 + 40);
					cout << "      ";
				}
				
			}
			else if(page == RIGHT || page == LEFT || page == UP || page == DOWN)
			{
				if(page == UP)
				{
					key = UP;
				}
				else if (page == DOWN)
				{
					key = DOWN;
				}
				thoat = false;
			}
		}
		else if (page == ESC)
		{
			key = ESC;
			thoat = false;
		}
		else mn = temp;
	} while(thoat);
}
void Delete_NV(NODE_NV &p)
{
	TextColor(MAU_CONSOLE);
	int rong = 15,
		dai = 100,
		posx = X_VT + 95,
		posy = Y_VT + 10;
	string *item = new string[3];
	item[0] = "XOA NHAN VIEN";
	item[1] = "Tim ma nhan vien";
	item[2] = "XOA";
	string s, s1, s2; 
	s = "Xac nhan?";
	s1 = "CO";	
	s2 = "KHONG";	
	VeKhung(rong, posx, posy, dai);
	gotoxy(posx - item[0].length() / 2 + dai / 2, posy);
	cout << item[0];
	gotoxy(posx + 2, posy + 2);
	cout << item[1];
	VeLine(15, posx + item[1].length() + 3, posy + 3);
	VeBangNotif(2, dai, posx, posy + 27);
	char tmpma[14] = {'\0'};
	bool editcontinue = true;
	while(editcontinue)
	{
		char conf;
		VeButton(3,posx + item[1].length() + 3, posy + 5, item[2], MAUNENBT_NSL, MAUTEXTBT_NSL, 17);
		TextColor(MAU_CONSOLE);
		gotoxy(posx + item[1].length() + 3 + strlen(tmpma), posy + 2);
		NhapCHUOISO(tmpma,'U',conf,14);
		if(conf == ESC)
		{
			TextColor(MAU_CONSOLE);
			for(int i = 0; i <= rong; i++)
			{
				for(int j = 0; j <= dai; j++)
				{
					gotoxy(posx + j, posy + i);
					cout << " ";
				}
				cout << endl;
			}
			break;
		}
			
		if(conf == ENTER || conf == DOWN)
		{
			char click;
			int tt = 0;
			bool found = false;
			int vitrixoa;
			for(int i = 0; i < p.n; i++)
			{
				if(strcmp(p.Node_NV[i]->maNV, tmpma) == 0)
				{
					found = true;
					vitrixoa = i;
					break;
				}
			}
			if(found)
			{
				VeButton(3, posx + item[1].length() + 3, posy + 5, item[2], MAUNENBT_SL, MAUTEXTBT_SL, 17); // xoa
				TextColor(MAU_CONSOLE);
				click = _getch();
				if(click == ENTER)
				{
					VeKhung(5,posx - 50 / 2 + dai / 2, posy + 9,50);
					gotoxy(posx - s.length() / 2 + dai / 2, posy + 9);
					cout << s;
					VeButton(1,posx - s.length() / 2 + 50 / 3 + dai / 2 - 1,posy + 12,s2,MAUNENBT_NSL,MAUTEXTBT_NSL); // no
					VeButton(1,posx + s.length() / 2 - 50 / 2 + dai / 2,posy + 12,s1,MAUNENBT_SL,MAUTEXTBT_SL); // yes
					char click1;
					int line1 = 0;
					while(editcontinue)
					{
						click1 = _getch();
						if(click1 == RIGHT)
						{
							VeButton(1,posx - s.length() / 2 + 50 / 3 + dai / 2 - 1,posy + 12,s2,MAUNENBT_SL,MAUTEXTBT_SL); // no
							VeButton(1,posx + s.length() / 2 - 50 / 2 + dai / 2,posy + 12,s1,MAUNENBT_NSL,MAUTEXTBT_NSL); // yes
							line1++;
							if(line1 >= 1)
								line1 = 1;								
						}
						if(click1 == LEFT)
						{
							VeButton(1,posx + s.length() / 2 - 50 / 2 + dai / 2,posy + 12,s1,MAUNENBT_SL,MAUTEXTBT_SL); // yes
							VeButton(1,posx - s.length() / 2 + 50 / 3 + dai / 2 - 1,posy + 12,s2,MAUNENBT_NSL,MAUTEXTBT_NSL); // no
							line1--;
							if(line1 == 0)
								line1 = 0;
						}
						if(click1 == ENTER)
						{
							switch(line1)
							{
								case 0:
									{
										//----xoa nhan vien khoi danh sach
										for (int j = vitrixoa + 1; j < p.n; j++)
										{
											strcpy(p.Node_NV[j - 1]->maNV, p.Node_NV[j]->maNV);
											p.Node_NV[j - 1]->ho = p.Node_NV[j]->ho;
											p.Node_NV[j - 1]->ten = p.Node_NV[j]->ten;
											p.Node_NV[j - 1]->phai = p.Node_NV[j]->phai;
										}
										p.n--;
										//--------------------------------
										gotoxy(posx + 2, posy + 28);
										TextColor(MAUNEN_SUCCESS);
										cout << "XOA THANH CONG!";
										Sleep(700);
										gotoxy(posx + 2, posy + 28);
										TextColor(MAU_STTBAR);
										cout << "               ";
										TextColor(MAU_CONSOLE);
										for(int i = 0; i <= rong; i++)
										{
											for(int j = 0; j <= dai; j++)
											{
												gotoxy(posx + j, posy + i);
												cout << " ";
											}
											cout << endl;
										}
										editcontinue = false;
										break;
									}
								case 1:
									{
										gotoxy(posx + 2, posy + 28);
										TextColor(MAUNEN_SUCCESS);
										cout << "DA HUY!";
										Sleep(700);
										gotoxy(posx + 2, posy + 28);
										TextColor(MAU_STTBAR);
										cout << "       ";
										TextColor(MAU_CONSOLE);
										for(int i = 0; i <= rong; i++)
										{
											for(int j = 0; j <= dai; j++)
											{
												gotoxy(posx + j, posy + i);
												cout << " ";
											}
											cout << endl;
										}
										editcontinue = false;
										break;
									}
							}
							break;
						}
						if(click1 == ESC)
						{
							TextColor(MAU_CONSOLE);
							for(int i = 0; i <= rong; i++)
							{
								for(int j = 0; j <= dai; j++)
								{
									gotoxy(posx + j, posy + i);
									cout << " ";
								}
								cout << endl;
							}
							editcontinue = false;
							break;
						}
							
					}
					
				}
				else if(click == ESC)
				{
					TextColor(MAU_CONSOLE);
					for(int i = 0; i <= rong; i++)
					{
						for(int j = 0; j <= dai; j++)
						{
							gotoxy(posx + j, posy + i);
							cout << " ";
						}
						cout << endl;
					}
					break;
				}
			}
			else
			{
				if(strlen(tmpma) == 0)
				{
					gotoxy(posx + 2, posy + 28);
					TextColor(MAUNEN);
					cout << "VUI LONG NHAP MA NHAN VIEN CAN TIM!";
					Sleep(700);
					gotoxy(posx + 2, posy + 28);
					TextColor(MAU_STTBAR);
					cout << "                                ";
					TextColor(MAU_CONSOLE);
				}
				else if(strlen(tmpma) != 0)
				{
					gotoxy(posx + 2, posy + 28);
					TextColor(MAUNEN);
					cout << "KHONG TIM THAY!";
					Sleep(700);
					gotoxy(posx + 2, posy + 28);
					TextColor(MAU_STTBAR);
					cout << "               ";
					TextColor(MAU_CONSOLE);
				}
				
			}
		}
	}
}

void Fix_NV(NODE_NV &p)
{
	int rong, posx, posy, dai;
	rong = 20;
	dai = 100;
	posx = X_VT + 95;
	posy = Y_VT + 10;
	string *item = new string[4];
	item[0] = "Ho nhan vien";
	item[1] = "Ten nhan vien";
	item[2] = "Phai";
	item[3] = "Tim ma nhan vien";
	string s, s0, s1, s2, s3, s4; 
	s = "Luu thay doi?";
	s0 = "HIEU CHINH NHAN VIEN";
	s1 = "CO";	
	s2 = "KHONG";	
	s3 = "NAM";
	s4 = "NU";	
	char key;
	bool editcontinue = true;
	TextColor(MAU_CONSOLE);
	VeKhung(rong, posx, posy, dai);
	VeLine(15, posx + 1 + item[1].length() + 3, posy + 3);
	VeKhung(2, posx + 1 + item[1].length() + 2, posy + 4, dai - item[1].length() - 5); // khung sua ho
	VeKhung(2, posx + 1 + item[1].length() + 2, posy + 7, dai - item[1].length() - 5); // khung sua ten
	VeButton(1,posx - s.length() / 2 + 50 / 3 + dai / 2 - 30,26,s4,MAUNENBT_NSL,MAUTEXTBT_NSL); // nu
	VeButton(1,posx + s.length() / 2 - 50 / 2 + dai / 2 - 15,26,s3,MAUNENBT_SL,MAUTEXTBT_SL); // nam
	TextColor(MAU_CONSOLE);
	while(editcontinue)
	{
	//	Ve_Giao_Dien();
		char tmpho[24] = {'\0'}, tmpten[17] = {'\0'}, tmpma[14] = {'\0'};
		int tmpphai = -1;
		int jump = 0, line = 0, tt = 5; // jump: xac dinh vi tri tiep theo de ve khung nhap - line: thao tac dang chon - tt: con tro tai khung dang nhap
		
		if(!kbhit())
		{
			gotoxy(posx - s0.length() / 2 + dai / 2, posy);	
			cout << s0;
			TextColor(MAU_CONSOLE);
			gotoxy(posx + 1 + item[1].length() + 3, posy + 5);
			cout << "                                                          ";
			gotoxy(posx + 1 + item[1].length() + 3, posy + 8);
			cout << "                                                          ";
			gotoxy(posx + 1, posy + 2 + jump);
			cout << item[3];
			for(int i = 0; i < 3; i++)
			{
				gotoxy(posx + 1, posy + 5 + i + jump);
				cout << item[i];
				jump+=2;
			}
			
			gotoxy(posx + 1 + item[1].length() + 4, posy + 2);
			cout << "                                              ";
			gotoxy(posx + 1 + item[1].length() + 4, posy + 2);
			NhapCHUOISO(tmpma,'U',key,14); // tim ma vat tu de hieu chinh
			if(key == ESC)
			{
				TextColor(MAU_CONSOLE);
				for(int i = 0; i <= rong; i++)
				{
					for(int j = 0; j <= dai; j++)
					{
						gotoxy(posx + j, posy + i);
						cout << " ";
					}
					cout << endl;
				}
				break;
			}
			if(key == ENTER)
			{
				bool found = false;
				int vitri;
				for(int i = 0; i < p.n; i++)
				{
					if(strcmp(p.Node_NV[i]->maNV, tmpma) == 0)
					{
						found = true;
						vitri = i;
						strcpy(tmpho, STR_to_Char(p.Node_NV[i]->ho));
						strcpy(tmpten, STR_to_Char(p.Node_NV[i]->ten));
						gotoxy(posx + 1 + item[1].length() + 3, posy + 5);
						cout << tmpho;
						gotoxy(posx + 1 + item[1].length() + 3, posy + 8);
						cout << tmpten;
						break;
					}
				}
				if(!found)
				{
						TextColor(MAUNEN);
						gotoxy(X_VT + 97, Y_VT + 38);
						cout << "KHONG TIM THAY MA NHAN VIEN! NHAP LAI!";
						Sleep(700);
						TextColor(MAU_CONSOLE);
						gotoxy(X_VT + 97, Y_VT + 38);
						cout << "                                       ";				
						continue;	
				}
				while(editcontinue)
				{
					TextColor(MAU_CONSOLE);
					XoaKhung(5,posx - 50 / 2 + dai / 2,29,50);
					gotoxy(posx - s.length() / 2 + dai / 2, 29);
					cout << "             ";
					XoaButton(1,posx + s.length() / 2 - 50 / 2 + dai / 2,32,s1,MAUNENBT_NSL,MAUTEXTBT_NSL); // yes
					XoaButton(1,posx - s.length() / 2 + 50 / 3 + dai / 2 - 1,32,s2,MAUNENBT_NSL,MAUTEXTBT_NSL); // no
					char click;
					switch(line)
					{
						case 0:
							
							gotoxy(posx + 1 + item[1].length() + 3 + strlen(tmpho), posy + tt);
							NhapCHUOI_SO(tmpho, click, 24);
							break;
						case 1:
							gotoxy(posx + 1 + item[1].length() + 3 + strlen(tmpten), posy + tt);
							NhapCHUOI(tmpten, click, 17);
							break;
						case 2:
							break;
					}
					if (click == UP)
					{
						
						if (line == 0)
						{
							VeButton(1,posx - s.length() / 2 + 50 / 3 + dai / 2 - 30,26,s4,MAUNENBT_NSL,MAUTEXTBT_NSL); // nu
							VeButton(1,posx + s.length() / 2 - 50 / 2 + dai / 2 - 15,26,s3,MAUNENBT_SL,MAUTEXTBT_SL); // nam
							char click2;
							int line2 = 0;
							while(true)
							{
								click2 = _getch();
								if(click2 == RIGHT)
								{
									VeButton(1,posx - s.length() / 2 + 50 / 3 + dai / 2 - 30,26,s4,MAUNENBT_SL,MAUTEXTBT_SL); // nu
									VeButton(1,posx + s.length() / 2 - 50 / 2 + dai / 2 - 15,26,s3,MAUNENBT_NSL,MAUTEXTBT_NSL); // nam
									line2++;
									if(line2 >= 1)
										line2 = 1;								
								}
								if(click2 == LEFT)
								{
									VeButton(1,posx + s.length() / 2 - 50 / 2 + dai / 2 -15,26,s3,MAUNENBT_SL,MAUTEXTBT_SL); // nam
									VeButton(1,posx - s.length() / 2 + 50 / 3 + dai / 2 - 30,26,s4,MAUNENBT_NSL,MAUTEXTBT_NSL); // nu
									line2--;
									if(line2 == 0)
										line2 = 0;
								}
								if(click2 == UP || click2 == DOWN)
									break;
								if(click2 == ENTER)
								{
									if(line2 == 0)
										tmpphai = 0;
									else if(line2 == 1)
										tmpphai = 1;
									break;
								}
								if(click2 == ESC)
								{
									editcontinue = false;
									break;
								}
							}
							line = 2;
							tt = 11;
						}
						else
						{
							tt-=3;
							line--;
						}
						gotoxy(posx + 1 + item[1].length() + 3, posy + tt);
						
					}
					if(click == DOWN)
					{
						if (line >= 1)
						{
							VeButton(1,posx - s.length() / 2 + 50 / 3 + dai / 2 - 30,26,s4,MAUNENBT_NSL,MAUTEXTBT_NSL); // nu
							VeButton(1,posx + s.length() / 2 - 50 / 2 + dai / 2 - 15,26,s3,MAUNENBT_SL,MAUTEXTBT_SL); // nam
							char click2;
							int line2 = 0;
							while(true)
							{
								click2 = _getch();
								if(click2 == RIGHT)
								{
									VeButton(1,posx - s.length() / 2 + 50 / 3 + dai / 2 - 30,26,s4,MAUNENBT_SL,MAUTEXTBT_SL); // nu
									VeButton(1,posx + s.length() / 2 - 50 / 2 + dai / 2 - 15,26,s3,MAUNENBT_NSL,MAUTEXTBT_NSL); // nam
									line2++;
									if(line2 >= 1)
										line2 = 1;								
								}
								if(click2 == LEFT)
								{
									VeButton(1,posx + s.length() / 2 - 50 / 2 + dai / 2 -15,26,s3,MAUNENBT_SL,MAUTEXTBT_SL); // nam
									VeButton(1,posx - s.length() / 2 + 50 / 3 + dai / 2 - 30,26,s4,MAUNENBT_NSL,MAUTEXTBT_NSL); // nu
									line2--;
									if(line2 == 0)
										line2 = 0;
								}
								if(click2 == UP || click2 == DOWN)
									break;
								if(click2 == ENTER)
								{
									if(line2 == 0)
										tmpphai = 0;
									else if(line2 == 1)
										tmpphai = 1;
									break;
								}
								if(click2 == ESC)
								{
									editcontinue = false;
									break;
								}
							}
							line = 0;
							tt = 5;
						}
						else
						{
							tt+=3;
							line++;
						}	
						gotoxy(posx + 1 + item[1].length() + 3, posy + tt);
						
					}
					if(click == ENTER)
					{	
						if(strlen(tmpho) == 0 || strlen(tmpten) == 0)
						{
							TextColor(MAUNEN);
							gotoxy(X_VT + 97, Y_VT + 38);
							cout << "KHONG DUOC DE TRONG CAC TRUONG!";		
							Sleep(700);
							TextColor(MAU_CONSOLE);
							gotoxy(X_VT + 97, Y_VT + 38);
							cout << "                               ";			
							continue;
						}
						if(tmpphai == -1) 
						{
							TextColor(MAUNEN);
							gotoxy(X_VT + 97, Y_VT + 38);
							cout << "VUI LONG CHON PHAI!";		
							Sleep(700);
							TextColor(MAU_CONSOLE);
							gotoxy(X_VT + 97, Y_VT + 38);
							cout << "                   ";			
							continue;
						}
						VeKhung(5,posx - 50 / 2 + dai / 2,29,50);
						gotoxy(posx - s.length() / 2 + dai / 2, 29);
						cout << s;
						VeButton(1,posx - s.length() / 2 + 50 / 3 + dai / 2 - 1,32,s2,MAUNENBT_NSL,MAUTEXTBT_NSL); // no
						VeButton(1,posx + s.length() / 2 - 50 / 2 + dai / 2,32,s1,MAUNENBT_SL,MAUTEXTBT_SL); // yes
						char click1;
						int line1 = 0;
						while(true)
						{
							click1 = _getch();
							if(click1 == RIGHT)
							{
								VeButton(1,posx - s.length() / 2 + 50 / 3 + dai / 2 - 1,32,s2,MAUNENBT_SL,MAUTEXTBT_SL); // no
								VeButton(1,posx + s.length() / 2 - 50 / 2 + dai / 2,32,s1,MAUNENBT_NSL,MAUTEXTBT_NSL); // yes
								line1++;
								if(line1 >= 1)
									line1 = 1;								
							}
							if(click1 == LEFT)
							{
								VeButton(1,posx + s.length() / 2 - 50 / 2 + dai / 2,32,s1,MAUNENBT_SL,MAUTEXTBT_SL); // yes
								VeButton(1,posx - s.length() / 2 + 50 / 3 + dai / 2 - 1,32,s2,MAUNENBT_NSL,MAUTEXTBT_NSL); // no
								line1--;
								if(line1 == 0)
									line1 = 0;
							}
							if(click1 == ENTER)
							{
								switch(line1)
								{
									case 0:
										{
											//----cap nhat lai nhan vien
											p.Node_NV[vitri]->ho = tmpho;
											p.Node_NV[vitri]->ten = tmpten;
											p.Node_NV[vitri]->phai = tmpphai;
											//-------------------------------
											TextColor(MAU_CONSOLE);
											for(int i = 0; i <= rong; i++)
											{
												for(int j = 0; j <= dai; j++)
												{
													gotoxy(posx + j, posy + i);
													cout << " ";
												}
												cout << endl;
											}
											editcontinue = false;
											break;
										}
									case 1:
										{
											TextColor(MAU_CONSOLE);
											for(int i = 0; i <= rong; i++)
											{
												for(int j = 0; j <= dai; j++)
												{
													gotoxy(posx + j, posy + i);
													cout << " ";
												}
												cout << endl;
											}
											editcontinue = false;
											break;
										}
								}
								break;
							}
							if(click1 == ESC)
							{
								break;
							}
								
						}
						
					}
					if(click == ESC) 
					{
						TextColor(MAU_CONSOLE);
						for(int i = 0; i <= rong; i++)
						{
							for(int j = 0; j <= dai; j++)
							{
								gotoxy(posx + j, posy + i);
								cout << " ";
							}
							cout << endl;
						}
						editcontinue = false;
						break;
					}
				}
			}
			
		}
	}
}
void QLNV(NODE_NV &p)
{
	Ve_Giao_Dien();
	int posxBT = X_VT + 95,
		posyBT = Y_VT + 2;
	string *itemBT = new string[3];
	itemBT[0] = "THEM NHAN VIEN";
	itemBT[1] = "HIEU CHINH NHAN VIEN";
	itemBT[2] = "XOA NHAN VIEN";
	gotoxy(posxBT, posyBT - 2);
	TextColor(MAUOPTION);
	cout << "CHON CHUC NANG";
	gotoxy(X_STTBAR, Y_STTBAR);
	TextColor(MAU_STTBAR);
	cout << "HOT KEY: ESC: Thoat/Huy/Tro ve - ENTER: Chon/Luu - PageUp: Trang truoc - PageDown: Trang sau - F10: Quay ve xem danh sach nhan vien";
	VeButton(3, posxBT, posyBT, itemBT[0], MAUNENBT_NSL, MAUTEXTBT_NSL); // them
	VeButton(3, posxBT + 22, posyBT, itemBT[1], MAUNENBT_NSL, MAUTEXTBT_NSL); // sua
	VeButton(3, posxBT + 50, posyBT, itemBT[2], MAUNENBT_NSL, MAUTEXTBT_NSL); // xoa
	TextColor(MAU_CONSOLE);
	VeBangNotif(2, 100, posxBT, posyBT + 35);
	char key;
	while(true)
	{
		TextColor(MAU_CONSOLE);
		Output_NV(p, key);
		if(key == ESC) break;
		int line1 = -1;
		while(true)
		{
			if(key == RIGHT)
			{
				line1++;
				if(line1 >= 3)
					line1 = 0;		
				if(line1 == 0)
				{
					VeButton(3, posxBT, posyBT, itemBT[0], MAUNENBT_SL, MAUTEXTBT_SL); // them
					VeButton(3, posxBT + 22, posyBT, itemBT[1], MAUNENBT_NSL, MAUTEXTBT_NSL); // sua
					VeButton(3, posxBT + 50, posyBT, itemBT[2], MAUNENBT_NSL, MAUTEXTBT_NSL); // xoa
				}
				else if(line1 == 1)
				{
					VeButton(3, posxBT, posyBT, itemBT[0], MAUNENBT_NSL, MAUTEXTBT_NSL); // them
					VeButton(3, posxBT + 22, posyBT, itemBT[1], MAUNENBT_SL, MAUTEXTBT_SL); // sua
					VeButton(3, posxBT + 50, posyBT, itemBT[2], MAUNENBT_NSL, MAUTEXTBT_NSL); // xoa
				}
				else if(line1 == 2)
				{
					VeButton(3, posxBT, posyBT, itemBT[0], MAUNENBT_NSL, MAUTEXTBT_NSL); // them
					VeButton(3, posxBT + 22, posyBT, itemBT[1], MAUNENBT_NSL, MAUTEXTBT_NSL); // sua
					VeButton(3, posxBT + 50, posyBT, itemBT[2], MAUNENBT_SL, MAUTEXTBT_SL); // xoa
				}
				
									
			}
			if(key == LEFT)
			{
				line1--;
				if(line1 <= -1)
					line1 = 2;
				if(line1 == 0)
				{
					VeButton(3, posxBT, posyBT, itemBT[0], MAUNENBT_SL, MAUTEXTBT_SL); // them
					VeButton(3, posxBT + 22, posyBT, itemBT[1], MAUNENBT_NSL, MAUTEXTBT_NSL); // sua
					VeButton(3, posxBT + 50, posyBT, itemBT[2], MAUNENBT_NSL, MAUTEXTBT_NSL); // xoa
				}
				else if(line1 == 1)
				{
					VeButton(3, posxBT, posyBT, itemBT[0], MAUNENBT_NSL, MAUTEXTBT_NSL); // them
					VeButton(3, posxBT + 22, posyBT, itemBT[1], MAUNENBT_SL, MAUTEXTBT_SL); // sua
					VeButton(3, posxBT + 50, posyBT, itemBT[2], MAUNENBT_NSL, MAUTEXTBT_NSL); // xoa
				}
				else if(line1 == 2)
				{
					VeButton(3, posxBT, posyBT, itemBT[0], MAUNENBT_NSL, MAUTEXTBT_NSL); // them
					VeButton(3, posxBT + 22, posyBT, itemBT[1], MAUNENBT_NSL, MAUTEXTBT_NSL); // sua
					VeButton(3, posxBT + 50, posyBT, itemBT[2], MAUNENBT_SL, MAUTEXTBT_SL); // xoa
				}
				
			}
			if(key == ENTER)
			{
				switch(line1)
				{
					case 0:
						{
							Input_NV(p);
							VeButton(3, posxBT, posyBT, itemBT[0], MAUNENBT_NSL, MAUTEXTBT_NSL); // them
							VeButton(3, posxBT + 22, posyBT, itemBT[1], MAUNENBT_NSL, MAUTEXTBT_NSL); // sua
							VeButton(3, posxBT + 50, posyBT, itemBT[2], MAUNENBT_NSL, MAUTEXTBT_NSL); // xoa
							break;
						}
					case 1:
						{
							Fix_NV(p);
							VeButton(3, posxBT, posyBT, itemBT[0], MAUNENBT_NSL, MAUTEXTBT_NSL); // them
							VeButton(3, posxBT + 22, posyBT, itemBT[1], MAUNENBT_NSL, MAUTEXTBT_NSL); // sua
							VeButton(3, posxBT + 50, posyBT, itemBT[2], MAUNENBT_NSL, MAUTEXTBT_NSL); // xoa
							break;
						}
					case 2:
						{
							Delete_NV(p);
							VeButton(3, posxBT, posyBT, itemBT[0], MAUNENBT_NSL, MAUTEXTBT_NSL); // them
							VeButton(3, posxBT + 22, posyBT, itemBT[1], MAUNENBT_NSL, MAUTEXTBT_NSL); // sua
							VeButton(3, posxBT + 50, posyBT, itemBT[2], MAUNENBT_NSL, MAUTEXTBT_NSL); // xoa
							break;
						}
				}
				break;
			}
			if(key == F10)
			{
				VeButton(3, posxBT, posyBT, itemBT[0], MAUNENBT_NSL, MAUTEXTBT_NSL); // them
				VeButton(3, posxBT + 22, posyBT, itemBT[1], MAUNENBT_NSL, MAUTEXTBT_NSL); // sua
				VeButton(3, posxBT + 50, posyBT, itemBT[2], MAUNENBT_NSL, MAUTEXTBT_NSL); // xoa
				break;
			}
			key = _getch();	
		}
	}
}

//	DANH SACH HOA DON
void InitCTHD(NODE_CTHD* cthd)
{
	cthd->n = 0;
}

void Init_HD(LIST_HD &l)
{
	l.pHead = l.pTail = NULL;
}
void InitNVHD(NODE_HD *hd)
{
	hd = NULL;
}
int isEmpty(NODE_CTHD *cthd)
{
	return(cthd->n == 0 ? TRUE : FALSE);
}

int isFull(NODE_CTHD* cthd)
{
	return(cthd->n == MAX_VT ? TRUE : FALSE);
}
int isAdded(NODE_CTHD *cthd, char *ma)
{
	if(!isEmpty(cthd))
	{
		for(int i = 0; i < cthd->n; i++)
		{
			if(strcmp(cthd->Node_HD[i].maVT, ma) == 0)
			return TRUE;
		}
		return FALSE;
	}
}

void Output_HD(HOA_DON x, TREE_VT t, NHAN_VIEN *q)
{
	char tmptenvt[10] = {'\0'};
	char key;
	int posx = WIDTH / 2,
		posy = Y_VT + 7 - 3;
	string *item = new string[6];
	item[0] = "So hoa don:";
	item[1] = "Ngay lap:";
	item[2] = "Loai hoa don:";
	item[3] = "Nhap";
	item[4] = "Xuat";
	item[5] = "Nhan vien lap:";
	gotoxy(posx - 45, posy + 3);
	cout << "                                                                                                                                                ";
	gotoxy(posx - 45, posy + 4);
	cout << "                                                                                                                                                ";
	gotoxy(posx - 45, posy + 3); // so hoa don - nhay lap
	cout << item[0] << " " << x.soHD  << " - "<< item[1] << x.date.day << "/" << x.date.month << "/" << x.date.year;
	if(strcmp(x.loai, "N") == 0)
	{
		gotoxy(posx - 45, posy + 4);
		cout << item[2] << " " << item[3] << " - NV lap: " << q->ho << " " << q->ten; // loai nhap - nhan vien lap
	}
	else if(strcmp(x.loai, "X") == 0)
	{
		gotoxy(posx - 45, posy + 4);
		cout << item[2] << " " << item[4] << " - NV lap: " << q->ho << " " << q->ten; // loai xuat - nhan vien lap
	}
	gotoxy(posx - 10, posy + 5);
	cout << "BANG CHI TIET HOA DON";
	//-------clear truoc khi in-----------
	for(int i = 0; i < 20; i++)
	{
		gotoxy(posx - 44, posy + 9 + i);
		cout << "    ";
		gotoxy(posx - 38, posy + 9 + i);
		cout << "                    ";
		gotoxy(posx - 23, posy + 9 + i);
		cout << "                     ";
		gotoxy(posx + 2, posy + 9 + i);
		cout << "               ";
		gotoxy(posx + 17, posy + 9 + i);
		cout << "               ";
		gotoxy(posx + 32, posy + 9 + i);
		cout << "               ";;
	}
	//-------------------------
	//--bang chua chi tiet vat tu cua hoa don
	VeBang(23, 90, 5, 20, 45, 60, 75, posx - 45, posy + 6);
	gotoxy(posx - 44, posy + 7);
	cout << "STT";
	gotoxy(posx - 37, posy + 7);
	cout << "MA VAT TU";
	gotoxy(posx - 17, posy + 7);
	cout << "TEN VAT TU";
	if(strcmp(x.loai, "N") == 0)
	{
		gotoxy(posx + 4, posy + 7);
		cout << "SL NHAP";
	}
	else if(strcmp(x.loai, "X") == 0)
	{
		gotoxy(posx + 4, posy + 7);
		cout << "SL XUAT";
	}
	gotoxy(posx + 19, posy + 7);
	cout << "DON GIA";
	gotoxy(posx + 36, posy + 7);
	cout << "VAT";
	unsigned int tong = 0;
	for(int i = 0; i < x.cthd->n; i++)
	{
		TREE_VT y = Search_VT(t, x.cthd->Node_HD[i].maVT);
		gotoxy(posx - 44, posy + 9 + i);
		cout << i + 1;
		gotoxy(posx - 38, posy + 9 + i);
		cout << x.cthd->Node_HD[i].maVT;
		gotoxy(posx - 23, posy + 9 + i);
		cout << y->data.tenVT;
		gotoxy(posx + 2, posy + 9 + i);
		cout << x.cthd->Node_HD[i].soLuong;
		gotoxy(posx + 17, posy + 9 + i);
		cout << x.cthd->Node_HD[i].donGia << " VND";
		gotoxy(posx + 32, posy + 9 + i);
		cout << x.cthd->Node_HD[i].VAT << "%";
		tong = tong + x.cthd->Node_HD[i].donGia*x.cthd->Node_HD[i].soLuong + x.cthd->Node_HD[i].donGia*x.cthd->Node_HD[i].soLuong*(x.cthd->Node_HD[i].VAT/100);
	}
	//-----------------------------------------
	gotoxy(posx - 45, posy + 30);
	cout << "Tri gia hoa don: " << tong << " VND";
	gotoxy(posx - 45, posy + 31);
	cout << "Tong tien bang chu: ";
	docsonguyen(tong);
	cout << "VND";
}

NODE_HD *Get_HD(HOA_DON x)
{

	NODE_HD *p = new NODE_HD; // cap phat vung nho cho p
	if (p == NULL)
	{
		cout << "\nKhong du bo nho de cap phat";
		return NULL;
	}
	p->data = x; // them hoa don x vao node 
	p->pNext = NULL;
	return p;
}

void AddTail(LIST_HD & l, NODE_HD * p)
{
	// danh sach hoa don dang rong
	if (l.pTail == NULL)
	{
		l.pTail = l.pHead = p;
	}
	else
	{
		l.pTail->pNext = p; // cho con tro pTail lien ket voi hoa don p
		l.pTail = p; // bay gio p chinh la node pTail
	}
}
int Search_MaHD(LIST_HD l, char *x)
{
	if(l.pHead != NULL || l.pTail != NULL)
	{
		for(NODE_HD *p = l.pHead; p != NULL; p = p->pNext)
		{
			if(strcmp(p->data.soHD, x) == 0)
				return TRUE;
		}
	}
	
}
HOA_DON Search_HD(LIST_HD l, char *x)
{
	if(l.pHead != NULL || l.pTail != NULL)
	{
		for(NODE_HD *p = l.pHead; p != NULL; p = p->pNext)
		{
			if(strcmp(p->data.soHD, x) == 0)
				return p->data;
		}
	}
	
}
void Input_HD(LIST_HD &l, NODE_NV &p, TREE_VT &t)
{
	Ve_Giao_Dien();
	gotoxy(X_STTBAR + 127, Y_STTBAR);
	TextColor(MAU_STTBAR);
	cout << "- F7: Danh sach nhan vien";
	TextColor(MAU_CONSOLE);
//	tra ve date/time hien tai dua tren system hien tai
   	time_t baygio = time(0);
   	tm *ltm = localtime(&baygio);
	char tmpmanv[21] = {'\0'}, tmpshd[20] = {'\0'}, tmploai[2] = {'\0'}, tmpmavt[10] = {'\0'}, numlensl[11] = {'\0'}, numlendg[20] = {'\0'}, numlenvat[20] = {'\0'}, numlenday[3] = {'\0'}, numlenmonth[3] = {'\0'}, numlenyear[5] = {'\0'};	
	int tmpsl;
	float tmpvat;
	unsigned int tmpdg;
	DAT tmpdate;
	//---------- gan ngay hien tai --------
	tmpdate.day = ltm->tm_mday;
	tmpdate.month = 1 + ltm->tm_mon;
	tmpdate.year = 1900 + ltm->tm_year;
	itoa(tmpdate.day, numlenday, 10);
	itoa(tmpdate.month, numlenmonth, 10);
	itoa(tmpdate.year, numlenyear, 10);
	//-----------------------------
	int	rong = 20,
		dai = 100,
		posx = X_VT + 95,
		posy = Y_VT + 10,
		posxBT = X_VT + 95,
		posyBT = Y_VT + 2;
	string *item = new string[8];
	item[0] = "Ma nhan vien:";
	item[1] = "Ho & ten nhan vien:";
	item[2] = "So hoa don:";
	item[3] = "Ngay lap";
	item[4] = "Loai hoa don";
	item[5] = "LAP HOA DON";
	item[6] = "CHI TIET HOA DON";
	string s, s0, s1, s2, s3, s4; 
	s = "Luu thay doi?";
	s0 = "LAP HOA DON";
	s1 = "CO";	
	s2 = "KHONG";
	s3 = "NHAP";
	s4 = "XUAT";
	string *item1 = new string[6];
	item1[0] = "Ma vat tu:";
	item1[1] = "Don gia:";
	item1[2] = "%VAT:";
	item1[3] = "So luong nhap:";
	item1[4] = "So luong xuat:";
	item1[5] = "THEM VAT TU VAO HOA DON";
	gotoxy(X_VT + 5 + item[1].length(), Y_VT - 2 + 11);
	cout << tmpdate.day;
	gotoxy(X_VT + 14 + item[1].length(), Y_VT - 2 + 11);
	cout << tmpdate.month;
	gotoxy(X_VT + 23 + item[1].length(), Y_VT - 2 + 11);
	cout << tmpdate.year;
	int jump = 5;
	VeKhung(16, X_VT + 1, Y_VT - 2 + 1, 70); // khung hoa don
	gotoxy(X_VT + 2, Y_VT - 2 + 3);
	cout << item[0];
	gotoxy(X_VT + 2, Y_VT - 2 + 6);
	cout << item[1];
	gotoxy(X_VT + 2, Y_VT - 2 + 8);
	cout << item[2];
	gotoxy(X_VT + 2, Y_VT - 2 + 11);
	cout << item[3];
	gotoxy(X_VT + 2, Y_VT - 2 + 14);
	cout << item[4];
	VeLine(21, X_VT + 3 + item[1].length(), Y_VT - 2 + 4); // line nhap ma nhan vien
	VeLine(20, X_VT + 3 + item[1].length(), Y_VT - 2 + 9); // line nhap so hoa don
	VeKhung(2, X_VT + 3 + item[1].length(), Y_VT - 2 + 10, 5); // khung nhap ngay
	gotoxy(getx() + 5, Y_VT - 2 + 11);
	cout << "/";
	VeKhung(2, getx() + 1, Y_VT - 2 + 10, 5); // khung nhap thang
	gotoxy(getx() + 5, Y_VT - 2 + 11);
	cout << "/";
	VeKhung(2, getx() + 1, Y_VT - 2 + 10, 8); // khung nhap nam
	VeButton(1, X_VT + 35, Y_VT - 2 + 14, s4, MAUNENBT_NSL, MAUTEXTBT_NSL); // xuat
	VeButton(1, X_VT + 22, Y_VT - 2 + 14, s3, MAUNENBT_NSL, MAUTEXTBT_NSL); // nhap
	TextColor(MAU_CONSOLE);
	VeBangNotif(2, 100, posxBT, posyBT + 35);
	char key;
	int line = 0, tt;
	bool editcontinue = true;
	bool found = false;
	int vitri;
	HOA_DON tmphd; // khai bao vat tu tam
	bool checkhd = false;
	tmphd.cthd = new NODE_CTHD; // cap vung nho tao chi tiet hoa don
	InitCTHD(tmphd.cthd); // khoi tao so vat tu cua hoa don = 0
	int SaveSL[20]; // mang luu tam so luong ton 20 vat tu
//	int sp = 0;
	while(editcontinue)
	{
		TextColor(MAU_CONSOLE);
		gotoxy(X_VT + 2 + item[0].length(), Y_VT - 2 + 4);
		char click;
		switch(line)
			{
				case 0:
					{
						char *tmpho, *tmpten;
						found = false;
						gotoxy(X_VT + 3 + item[1].length() + strlen(tmpmanv), Y_VT - 2 + 3);
						NhapCHUOISO(tmpmanv,'U', key, 20);
						for(int i = 0; i < p.n; i++)
						{
							if(strcmp(tmpmanv, p.Node_NV[i]->maNV) == 0)
							{
								found = true;
								vitri = i;
								break;
							}
						}
						if(found == true)
						{
							gotoxy(X_VT + 3 + item[1].length(), Y_VT - 2 + 6);
							cout << "                                         ";
							tmpho = STR_to_Char(p.Node_NV[vitri]->ho);
							tmpten = STR_to_Char(p.Node_NV[vitri]->ten);
							strcat(tmpho, " ");
							strcat(tmpho, tmpten);
							gotoxy(X_VT + 3 + item[1].length(), Y_VT - 2 + 6);
							TextColor(MAUCHU_SCC);
							cout << tmpho;
						}
						else if(found == false && key != ESC && key != F7)
						{
							gotoxy(X_VT + 3 + item[1].length(), Y_VT - 2 + 6);
							cout << "                                         ";
							gotoxy(X_VT + 3 + item[1].length(), Y_VT - 2 + 6);
							TextColor(MAUCHU_ERR);
							cout << "Khong tim thay nhan vien nao!";
							TextColor(MAU_CONSOLE);
						}												
						break;	
					}
					
				case 1:
					{
						gotoxy(X_VT + 3 + item[1].length() + strlen(tmpshd), Y_VT - 2 + 8);
						NhapCHUOISO(tmpshd, 'U', key, 20);																	
						break;
					}
				case 2:
					{
						gotoxy(X_VT + 5 + item[1].length() + strlen(numlenday), Y_VT - 2 + 11);
						NhapNGAY(tmpdate.day, numlenday, key, 3);
						break;
					}
				case 3:
					{
						gotoxy(X_VT + 14 + item[1].length() + strlen(numlenmonth), Y_VT - 2 + 11);
						NhapTHANG(tmpdate.month, numlenmonth, key, 3);
						break;	
					}
				case 4:
					{
						gotoxy(X_VT + 23 + item[1].length() + strlen(numlenyear), Y_VT - 2 + 11);
						NhapNAM(tmpdate.year, numlenyear, key, 5);
						break;
					}	
			}
		//-----------danh sach nhan vien
		if(key == F7)
		{
			Output_NV1(p, key);
			if (key == ESC)
			{
				continue;
			}
		}
		if(key == RIGHT)
		{
			if(line >= 4)
			{
				line = 2;
			}
			else
			{
				line++;
			}
		}
		if(key == LEFT)
		{
			if(line == 2)
			{
				line = 4;
			}
			else
			{
				line--;
			}
		}
		if (key == UP)
		{
			
			if (line == 0)
			{
				line = 2;
			}
			else if(line == 3 || line == 4)
			{
				line = 1;
			}
			else
			{
				line--;
			}
		}
		if(key == DOWN)
		{
			if (line >= 2)
			{
				VeButton(1, X_VT + 35, Y_VT - 2 + 14, s4, MAUNENBT_NSL, MAUTEXTBT_NSL); // xuat
				VeButton(1, X_VT + 22, Y_VT - 2 + 14, s3, MAUNENBT_SL, MAUTEXTBT_SL); // nhap
				char click2;
				int line2 = 0;
				while(true)
				{
					click2 = _getch();
					if(click2 == RIGHT)
					{
						VeButton(1, X_VT + 35, Y_VT - 2 + 14, s4, MAUNENBT_SL, MAUTEXTBT_SL); // xuat
						VeButton(1, X_VT + 22, Y_VT - 2 + 14, s3, MAUNENBT_NSL, MAUTEXTBT_NSL); // nhap
						line2++;
						if(line2 >= 1)
							line2 = 1;								
					}
					if(click2 == LEFT)
					{
						VeButton(1, X_VT + 35, Y_VT - 2 + 14, s4, MAUNENBT_NSL, MAUTEXTBT_NSL); // xuat
						VeButton(1, X_VT + 22, Y_VT - 2 + 14, s3, MAUNENBT_SL, MAUTEXTBT_SL); // nhap
						line2--;
						if(line2 == 0)
							line2 = 0;
					}
					if(click2 == UP || click2 == DOWN)
						break;
					if(click2 == ENTER)
					{
						if(line2 == 0)
							strcpy(tmploai, "N");
						else if(line2 == 1)
							strcpy(tmploai, "X");
						break;
					}
				}
				line = 0;
			}
			else
			{
				line++;
			}	
		}
		if(key == ENTER)
		{	
			
			if(strlen(tmpmanv) == 0 || strlen(tmpshd) == 0)
			{
				TextColor(MAUNEN);
				gotoxy(posx + 2, posy + 28);
				cout << "KHONG DUOC DE TRONG CAC TRUONG!";		
				Sleep(700);
				TextColor(MAU_CONSOLE);
				gotoxy(posx + 2, posy + 28);
				cout << "                               ";
				continue;
			}
			if(Search_MaHD(l, tmpshd) == TRUE)
			{
				TextColor(MAUNEN);
				gotoxy(posx + 2, posy + 28);
				cout << "SO HOA DON NAY DA CO! NHAP LAI!";		
				Sleep(700);
				TextColor(MAU_CONSOLE);
				gotoxy(posx + 2, posy + 28);
				cout << "                               ";			
				continue;
			}
			if(strlen(tmploai) == 0)
			{
				TextColor(MAUNEN);
				gotoxy(posx + 2, posy + 28);
				cout << "VUI LONG CHON LOAI HOA DON!";		
				Sleep(700);
				TextColor(MAU_CONSOLE);
				gotoxy(posx + 2, posy + 28);
				cout << "                           ";			
				continue;
			}
			if(strlen(numlenday) == 0 || strlen(numlenmonth) == 0 || strlen(numlenyear) == 0)
			{
				TextColor(MAUNEN);
				gotoxy(posx + 2, posy + 28);
				cout << "VUI LONG NHAP NGAY THANG NAM!";		
				Sleep(700);
				TextColor(MAU_CONSOLE);
				gotoxy(posx + 2, posy + 28);
				cout << "                             ";			
				continue;
			}
			//--------kiem tra ngay
			if(CheckDay(tmpdate) == TRUE)
			{
				continue;
			}
			//---------------------
			if(found == false)
			{
				TextColor(MAUNEN);
				gotoxy(posx + 2, posy + 28);
				cout << "KHONG TIM THAY MA NHAN VIEN! NHAP LAI!";
				Sleep(700);
				TextColor(MAU_CONSOLE);
				gotoxy(posx + 2, posy + 28);
				cout << "                                      ";				
				continue;
			}
			//--------xoa bang nhan vien
			gotoxy(X_VT + 30, Y_VT+17);
			cout << "                                   ";
			for (int i = 1; i <= 22; i++)
			{
				gotoxy(X_VT + 1, Y_VT+17 + i);
				cout << "                                                                             ";
			}
			gotoxy(X_VT + 1, Y_VT + 40);
			cout << "          ";
			gotoxy(X_STTBAR + 127, Y_STTBAR);
			cout << "                                        ";
			TextColor(MAU_CONSOLE);
			//-------bang chua chi tiet hoa don-------
			VeBang(23, 70, 5, 23, 37, 53,0,X_VT + 1,Y_VT - 2 + 19);
			gotoxy(X_STTBAR + 127, Y_STTBAR);
			TextColor(MAU_STTBAR);
			cout << "- F9: Danh sach vat tu";
			TextColor(MAU_CONSOLE);
			gotoxy(X_VT + 2, Y_VT - 2 + 20);
			cout << "STT"; // 4
			gotoxy(X_VT + 11, Y_VT - 2 + 20);
			cout << "MA VAT TU"; // 14
			if(strcmp(tmploai, "N") == 0)
			{
				gotoxy(X_VT + 25, Y_VT - 2 + 20);
				cout << "SO LUONG NHAP"; // 29
			}
			else if(strcmp(tmploai, "X") == 0)
			{
				gotoxy(X_VT + 25, Y_VT - 2 + 20);
				cout << "SO LUONG XUAT"; // 29
			}
			gotoxy(X_VT + 43, Y_VT - 2 + 20);
			cout << "DON GIA"; // 7
			gotoxy(X_VT + 61, Y_VT - 2 + 20);
			cout << "VAT";	// 11
			gotoxy(X_VT + 1 - item[6].length() / 2 + 70 / 2, Y_VT - 2 + 18);
			cout << item[6];
			//--------END--------------
			
			VeKhung(rong,posx,posy,dai);
			gotoxy(posx - item1[5].length() / 2 + dai / 2, posy);	
			cout << item1[5];
			gotoxy(posx + 1, posy + 2);
			cout << item1[0];
			if(strcmp(tmploai, "N") == 0)
			{
				gotoxy(posx + 1, posy + 5);
				cout << item1[3];
			}
			else if(strcmp(tmploai, "X") == 0)
			{
				gotoxy(posx + 1, posy + 5);
				cout << item1[4];
			}
			gotoxy(posx + 1, posy + 8);
			cout << item1[1];
			gotoxy(posx + 1, posy + 11);
			cout << item1[2];
			VeKhung(2,posx + 1 + item1[3].length() + 2,posy + 1,20); // khung nhap ma
			VeKhung(2,posx + 1 + item1[3].length() + 2,posy + 4,dai - item1[3].length() - 4); // khung nhap so luong
			VeKhung(2,posx + 1 + item1[3].length() + 2,posy + 7,dai - item1[3].length() - 4); // khung nhap don gia
			VeKhung(2,posx + 1 + item1[3].length() + 2,posy + 10,dai - item1[3].length() - 4); // khung nhap vat
			int line1 = 0, tt = 2;
			char key1;
			int stt = 0; // so thu tu in cac vat 
			while(true)
			{
				switch(line1)
					{
						case 0:
							{
								gotoxy(posx + 3 + item1[3].length() + 2 + strlen(tmpmavt), posy + tt);
								NhapCHUOISO(tmpmavt,'U', key1, 10);
								if (!kbhit())
								{
									if (key1 == F9)
									{
										gotoxy(X_STTBAR + 127, Y_STTBAR);
										TextColor(MAU_STTBAR);
										cout << "                                       ";
										gotoxy(X_STTBAR + 127, Y_STTBAR);
										cout << "- F9: Thoat DSVT";
										TextColor(MAU_CONSOLE);
										gotoxy(X_VT + 1 - item[6].length() / 2 + 70 / 2, Y_VT - 2 + 18);
										cout << "                                   ";
										for (int i = 1; i <= 24; i++)
										{
											gotoxy(X_VT + 1, Y_VT+16 + i);
											cout << "                                                                             ";
										}
										CopyVT1(t, key1);
										gotoxy(X_VT + 30, Y_VT+17);
										cout << "                                   ";
										for (int i = 1; i <= 22; i++)
										{
											gotoxy(X_VT + 1, Y_VT+17 + i);
											cout << "                                                                             ";
										}
										gotoxy(X_VT + 1, Y_VT + 40);
										cout << "          ";
										VeBang(23, 70, 5, 23, 37, 53,0,X_VT + 1,Y_VT - 2 + 19);
										gotoxy(X_VT + 2, Y_VT - 2 + 20);
										cout << "STT"; // 4
										gotoxy(X_VT + 11, Y_VT - 2 + 20);
										cout << "MA VAT TU"; // 14
										if(strcmp(tmploai, "N") == 0)
										{
											gotoxy(X_VT + 25, Y_VT - 2 + 20);
											cout << "SO LUONG NHAP"; // 29
										}
										else if(strcmp(tmploai, "X") == 0)
										{
											gotoxy(X_VT + 25, Y_VT - 2 + 20);
											cout << "SO LUONG XUAT"; // 29
										}
										gotoxy(X_VT + 43, Y_VT - 2 + 20);
										cout << "DON GIA"; // 7
										gotoxy(X_VT + 61, Y_VT - 2 + 20);
										cout << "VAT";	// 11
										gotoxy(X_VT + 1 - item[6].length() / 2 + 70 / 2, Y_VT - 2 + 18);
										cout << item[6];
										for (int k = 0; k < tmphd.cthd->n; k++)
										{
											gotoxy(X_VT + 2, Y_VT - 2 + 22 + k);
											cout << k + 1;
											gotoxy(X_VT + 7, Y_VT - 2 + 22 + k);
											cout << tmphd.cthd->Node_HD[k].maVT;
											gotoxy(X_VT + 25, Y_VT - 2 + 22 + k);
											cout << tmphd.cthd->Node_HD[k].soLuong;
											gotoxy(X_VT + 39, Y_VT - 2 + 22 + k);
											cout << tmphd.cthd->Node_HD[k].donGia << " VND";
											gotoxy(X_VT + 55, Y_VT - 2 + 22 + k);
											cout << tmphd.cthd->Node_HD[k].VAT << "%";
										}
									}
									else break;
								}
								gotoxy(X_STTBAR + 127, Y_STTBAR);
								cout << "                  ";
								gotoxy(X_STTBAR + 127, Y_STTBAR);
								cout << "- F9: Danh sach vat tu";
								break;
							}
							
						case 1:
							{
								gotoxy(posx + 3 + item1[3].length() + 2 + strlen(numlensl), posy + tt);
								NhapSO(tmpsl, numlensl, key1, 11);							
								break;
							}
							
						case 2:
							{
								gotoxy(posx + 3 + item1[3].length() + 2 + strlen(numlendg), posy + tt);
								NhapSO_U(tmpdg, numlendg, key1, 20);
								break;
							}
						case 3:
							{
								gotoxy(posx + 3 + item1[3].length() + 2 + strlen(numlenvat), posy + tt);
								NhapSO_F(tmpvat, numlenvat, key1, 20);
								if (tmpvat > 100)
								{
									TextColor(MAUNEN);
									gotoxy(posx + 2, posy + 28);
									cout << "THUE(VAT) KHONG QUA 100%!";
									Sleep(700);
									TextColor(MAU_CONSOLE);
									gotoxy(posx + 2, posy + 28);
									cout << "                                      ";				
									continue;
								}
								break;
							}	
					}
				if (key1 == UP)
				{
					if (line1 == 0)
					{
						line1 = 3;
						tt = 11;
					}
					else
					{
						tt-=3;
						line1--;
					}
				}
				if(key1 == DOWN)
				{
					if (line1 >= 3)
					{
						line1 = 0;
						tt = 2;
					}
					else
					{
						tt+=3;
						line1++;
					}	
				}
				if(key1 == ENTER)
				{
					if(strlen(tmpmavt) == 0 || strlen(numlensl) == 0 || strlen(numlendg) == 0 || strlen(numlenvat) == 0)
					{
						TextColor(MAUNEN);
						gotoxy(X_VT + 97, Y_VT + 38);
						cout << "KHONG DUOC DE TRONG CAC TRUONG!";		
						Sleep(700);
						TextColor(MAU_CONSOLE);
						gotoxy(X_VT + 97, Y_VT + 38);
						cout << "                               ";			
						continue;
					}
					if(!isEmpty_VT(t))
					{
						if(Search_NLR(t, tmpmavt) == FALSE)
						{
							TextColor(MAUNEN);
							gotoxy(X_VT + 97, Y_VT + 38);
							cout << "MA VAT TU KHONG TON TAI! NHAP LAI!";
							Sleep(700);
							TextColor(MAU_CONSOLE);
							gotoxy(X_VT + 97, Y_VT + 38);
							cout << "                                  ";				
							continue;	
						}
					}
					if (strcmp(tmploai, "X") == 0)
					{
						TREE_VT x;
						x = Search_VT(t, tmpmavt);
						if (x->data.slTon - tmpsl < 0)
						{
							TextColor(MAUNEN);
							gotoxy(X_VT + 97, Y_VT + 38);
							cout << "KHONG DU SO LUONG XUAT! SO LUONG TON KHO LA: " << x->data.slTon;
							Sleep(700);
							TextColor(MAU_CONSOLE);
							gotoxy(X_VT + 97, Y_VT + 38);
							cout << "                                                                           ";				
							continue;
						}
						else
						{
							x->data.slTon = x->data.slTon - tmpsl; // cap nhat lai sl ton
						}
					}
					else if(strcmp(tmploai, "N") == 0)
					{
						TREE_VT x;
						x = Search_VT(t, tmpmavt);
						x->data.slTon = tmpsl + x->data.slTon; // cap nhat lai sl ton
					}
					//------them vat tu vao ds chi tiet hoa don-----------
					if(!isFull(tmphd.cthd))
					{
						if(!isAdded(tmphd.cthd, tmpmavt))
						{
							strcpy(tmphd.cthd->Node_HD[tmphd.cthd->n].maVT, tmpmavt);
							tmphd.cthd->Node_HD[tmphd.cthd->n].soLuong = tmpsl;
							tmphd.cthd->Node_HD[tmphd.cthd->n].donGia = tmpdg;
							tmphd.cthd->Node_HD[tmphd.cthd->n].VAT = tmpvat;
							SaveSL[tmphd.cthd->n] = tmpsl;
							tmphd.cthd->n++;
						}
						else
						{
							if (strcmp(tmploai, "X") == 0)
							{
								TREE_VT x;
								x = Search_VT(t, tmpmavt);
								x->data.slTon = x->data.slTon + tmpsl; // cap nhat lai sl ton 
								
							}
							else if(strcmp(tmploai, "N") == 0)
							{
								TREE_VT x;
								x = Search_VT(t, tmpmavt);
								x->data.slTon = x->data.slTon - tmpsl; // cap nhat lai sl ton
							}
							TextColor(MAUNEN);
							gotoxy(X_VT + 97, Y_VT + 38);
							cout << "VAT TU NAY DA CO TRONG HOA DON!";
							Sleep(1000);
							TextColor(MAU_CONSOLE);
							gotoxy(X_VT + 97, Y_VT + 38);
							cout << "                               ";
							continue;
						}
					}
					else
					{
						TextColor(MAUNEN);
						gotoxy(X_VT + 97, Y_VT + 38);
						cout << "MOI HOA DON CHI CHUA TOI DA 20 VAT TU!";
						Sleep(1000);
						TextColor(MAU_CONSOLE);
						gotoxy(X_VT + 97, Y_VT + 38);
						cout << "                                      ";	
						line1 = 0; tt = 2;	
						strcpy(tmpmavt, "\0");
						strcpy(numlensl, "\0");
						strcpy(numlendg, "\0");
						strcpy(numlenvat, "\0");		
						continue;
					}
					//---------------------------------------------------
					stt++;
					line1 = 0; tt = 2;
					strcpy(tmpmavt, "\0");
					strcpy(numlensl, "\0");
					strcpy(numlendg, "\0");
					strcpy(numlenvat, "\0");
					gotoxy(posx + 3 + item1[3].length() + 2, posy + 2);
					cout << "            ";
					gotoxy(posx + 3 + item1[3].length() + 2, posy + 5);
					cout << "                    ";
					gotoxy(posx + 3 + item1[3].length() + 2, posy + 8);
					cout << "                    ";
					gotoxy(posx + 3 + item1[3].length() + 2, posy + 11);
					cout << "                    ";
					//------ xuat chi tiet vat tu qua bang chi tiet vat tu------
					gotoxy(X_VT + 2, Y_VT - 2 + 21 + stt);
					cout << stt;
					gotoxy(X_VT + 7, Y_VT - 2 + 21 + stt);
					cout << tmphd.cthd->Node_HD[tmphd.cthd->n - 1].maVT;
					gotoxy(X_VT + 25, Y_VT - 2 + 21 + stt);
					cout << tmphd.cthd->Node_HD[tmphd.cthd->n - 1].soLuong;
					gotoxy(X_VT + 39, Y_VT - 2 + 21 + stt);
					cout << tmphd.cthd->Node_HD[tmphd.cthd->n - 1].donGia << " VND";
					gotoxy(X_VT + 55, Y_VT - 2 + 21 + stt);
					cout << tmphd.cthd->Node_HD[tmphd.cthd->n - 1].VAT << "%";
					//-----------------------------------
				}
				if(key1 == F10)
				{
					if(stt == 0)
					{
						TextColor(MAUNEN);
						gotoxy(X_VT + 97, Y_VT + 38);
						cout << "BAN CHUA THEM VAT TU NAO VAO HAO DON!";
						Sleep(700);
						TextColor(MAU_CONSOLE);
						gotoxy(X_VT + 97, Y_VT + 38);
						cout << "                                     ";				
						continue;	
					}
					int liney = 0, checking = 0;
					char get;
					gotoxy(X_VT + 2, Y_VT - 2 + 21 + liney + 1);
					TextColor(MAUNEN);
					cout << "\xAF ";
					while(true)
					{
						if(kbhit())
						{
							gotoxy(X_VT + 2, Y_VT - 2 + 21 + liney + 1);
							TextColor(MAU_CONSOLE);
							cout << liney + 1 << " ";
							get = _getch();
							if(get == -32)
							{
								get = _getch();
								if(get == UP)
								{
									
									if(liney == 0 && tmphd.cthd->n != 0)
										liney = tmphd.cthd->n - 1;
									else if(liney != 0)
										liney--;
								}
								if(get == DOWN)
								{
									liney++;
									if(liney >= tmphd.cthd->n)
										liney = 0;	
								}
							}
							if(get == ENTER)
							{
								if(tmphd.cthd->n <= 0)
								{
									TextColor(MAUNEN);
									gotoxy(X_VT + 97, Y_VT + 38);
									cout << "KHONG CO VAT TU DE XOA!";
									Sleep(700);
									TextColor(MAU_CONSOLE);
									gotoxy(X_VT + 97, Y_VT + 38);
									cout << "                       ";	
									liney = 0;			
									continue;
								}
								//-----------xoa 1 vat tu khoi chi tiet hoa don-----
								if (strcmp(tmploai, "X") == 0) // tim vat tu do de cap nhat lai sl ton
								{
									TREE_VT x;
									x = Search_VT(t, tmphd.cthd->Node_HD[liney].maVT);
									x->data.slTon = x->data.slTon + SaveSL[liney]; // cap nhat lai sl ton
								}
								else if(strcmp(tmploai, "N") == 0)
								{
									TREE_VT x;
									x = Search_VT(t, tmphd.cthd->Node_HD[liney].maVT);
									x->data.slTon = x->data.slTon - SaveSL[liney]; // cap nhat lai sl ton
								}
								for(int i = liney + 1; i < tmphd.cthd->n; i++) // tien hanh xoa vat tu do khoi dscthd
								{
									tmphd.cthd->Node_HD[i - 1] = tmphd.cthd->Node_HD[i];
								}
								tmphd.cthd->n--;
								stt--;
								//---------------------------------------
								for(int i = 0; i < tmphd.cthd->n + 1; i++)
								{
									gotoxy(X_VT + 2, Y_VT - 2 + 21 + i + 1);
									cout << "    ";
									gotoxy(X_VT + 7, Y_VT - 2 + 21 + i + 1);
									cout << "            ";
									gotoxy(X_VT + 25, Y_VT - 2 + 21 + i + 1);
									cout << "            ";
									gotoxy(X_VT + 39, Y_VT - 2 + 21 + i + 1);
									cout << "            ";
									gotoxy(X_VT + 55, Y_VT - 2 + 21 + i + 1);
									cout << "            ";
								}
								//-----xuat so vat tu con lai sau khi xoa-------
								for(int i = 0; i < tmphd.cthd->n; i++)
								{
									gotoxy(X_VT + 2, Y_VT - 2 + 21 + i + 1);
									cout << i + 1;
									gotoxy(X_VT + 7, Y_VT - 2 + 21 + i + 1);
									cout << tmphd.cthd->Node_HD[i].maVT;
									gotoxy(X_VT + 25, Y_VT - 2 + 21 + i + 1);
									cout << tmphd.cthd->Node_HD[i].soLuong;
									gotoxy(X_VT + 39, Y_VT - 2 + 21 + i + 1);
									cout << tmphd.cthd->Node_HD[i].donGia;
									gotoxy(X_VT + 55, Y_VT - 2 + 21 + i + 1);
									cout << tmphd.cthd->Node_HD[i].VAT;
								}
								//--------------------------------
							}
							if(get == ESC)
								break;
							gotoxy(X_VT + 2, Y_VT - 2 + 21 + liney + 1);
							TextColor(MAUNEN);
							cout << "\xAF ";
						}
					}
				}
				if(key1 == ESC)
				{
					//=======cap nhat lai sl ton khi huy=============
					if(strcmp(tmploai, "X") == 0)
					{
						for(int i = 0; i < tmphd.cthd->n; i++)
						{
							TREE_VT x;
							x = Search_VT(t, tmphd.cthd->Node_HD[i].maVT);
							x->data.slTon = x->data.slTon + SaveSL[i]; // cap nhat lai sl ton
						}
					}
					else if(strcmp(tmploai, "N") == 0)
					{
						for(int i = 0; i < tmphd.cthd->n; i++)
						{
							TREE_VT x;
							x = Search_VT(t, tmphd.cthd->Node_HD[i].maVT);
							x->data.slTon = x->data.slTon - SaveSL[i]; // cap nhat lai sl ton
						}
					}
					//===================================================
					gotoxy(X_VT + 97, Y_VT + 38);
					TextColor(MAUNEN);
					cout << "DA HUY!";
					Sleep(700);
					editcontinue = false;
					break;
				}
				if(key1 == F2)
				{
					if(strlen(tmpmanv) != 0 && strlen(tmpshd) != 0 && strlen(tmploai) != 0 && strlen(numlenday) != 0 && strlen(numlenmonth) != 0 && strlen(numlenyear) != 0 && tmphd.cthd->n >= 0)
					{
						if(tmphd.cthd->n == 0)
						{
							gotoxy(X_VT + 97, Y_VT + 38);
							TextColor(MAUNEN_SUCCESS);
							cout << "CHUA CO VAT TU NAO!";
							Sleep(700);
							gotoxy(X_VT + 97, Y_VT + 38);
							TextColor(MAU_CONSOLE);
							cout << "                   ";
							continue;
						}
						//-----them hoa don------
						strcpy(tmphd.soHD, tmpshd);
						strcpy(tmphd.loai, tmploai);
						tmphd.date.day = tmpdate.day;
						tmphd.date.month = tmpdate.month;
						tmphd.date.year = tmpdate.year;
						
						NODE_HD *k = new NODE_HD;
						k->data = tmphd;
						k->pNext = p.Node_NV[vitri]->dshd;
						p.Node_NV[vitri]->dshd = k;
						
						NODE_HD *q = Get_HD(tmphd);
						AddTail(l, q);
						//-------------------------------
						gotoxy(X_VT + 97, Y_VT + 38);
						TextColor(MAUNEN_SUCCESS);
						cout << "DA LAP HOA DON!";
						Sleep(700);
						gotoxy(X_VT + 97, Y_VT + 38);
						TextColor(MAU_CONSOLE);
						cout << "               ";
					}
					editcontinue = false;
					break;
				}
			}
		}
		if(key == ESC)
		{
			gotoxy(X_VT + 97, Y_VT + 38);
			TextColor(MAUNEN);
			cout << "DA HUY!";
			Sleep(700);
			editcontinue = false;
			break;
		}
	}
	//----xoa khung lap hoa don----------
	gotoxy(X_VT + 97, Y_VT + 38);
	TextColor(MAU_CONSOLE);
	cout << "       ";
	for(int i = 0; i <= rong; i++)
	{
		for(int j = 0; j <= dai; j++)
		{
			gotoxy(posx + j, posy + i);
			cout << " ";
		}
		cout << endl;
	}
	XoaKhung(16, X_VT + 1, Y_VT - 2 + 1, 70);
	gotoxy(X_VT + 2, Y_VT - 2 + 3);
	cout << "                                            ";
	gotoxy(X_VT + 2, Y_VT - 2 + 6);
	cout << "                                                   ";
	gotoxy(X_VT + 2, Y_VT - 2 + 8);
	cout << "                                            ";
	gotoxy(X_VT + 2, Y_VT - 2 + 11);
	cout << "                                                ";
	gotoxy(X_VT + 2, Y_VT - 2 + 10);
	cout << "                                                ";
	gotoxy(X_VT + 2, Y_VT - 2 + 12);
	cout << "                                                ";
	gotoxy(X_VT + 2, Y_VT - 2 + 14);
	cout << "                                            ";
	gotoxy(X_VT + 3 + item[1].length(), Y_VT - 2 + 4);
	cout << "                        ";
	gotoxy(X_VT + 3 + item[1].length(), Y_VT - 2 + 9);
	cout << "                        ";
	gotoxy(X_VT + 1, Y_VT - 2 + 18);
	cout << "                                              ";
	for(int i = 0; i < 24; i++)
	{
		for(int j = 0; j < 71+5; j++)
		{
			gotoxy(X_VT + 1 + j, Y_VT + 17 + i);
			cout << " ";
		}
	}
	gotoxy(X_STTBAR + 127, Y_STTBAR);
	cout << "                                        ";
}

void Output_lHD(LIST_HD l, TREE_VT t, NODE_NV p)
{
	TextColor(MAU_CONSOLE);
	int temp = 0;
	char tmpshd[20] = {'\0'};
	char key;
	int posx = WIDTH / 2,
		posy = Y_VT + 7 - 2;
	string item = "So hoa don can in:";
	gotoxy(posx - item.length() - 27, posy);
	cout << item;
	VeLine(item.length() + 25, posx - item.length() - 27, posy + 1);
	while(true)
	{
		gotoxy(posx - item.length() - 8 + strlen(tmpshd), posy);
		NhapCHUOISO(tmpshd, 'U', key, 20);
		gotoxy(posx - 45, posy + 29);
		cout << "                                                                                                             ";
		gotoxy(posx - 45, posy + 30);
		cout << "                                                                                                                                                     ";
		if(key == ENTER)
		{
			if(Search_MaHD(l, tmpshd) == TRUE)
			{
				HOA_DON x;
				NHAN_VIEN *q = new NHAN_VIEN;
				x = Search_HD(l, tmpshd);
				q = Search_NVHD(p, tmpshd);
				Output_HD(x, t, q);
			}
			else
			{
				TextColor(MAUNEN);
				gotoxy(X_VT + 97, Y_VT + 38);
				cout << "KHONG TIM THAY SO HOA DON!";
				Sleep(700);
				TextColor(MAU_CONSOLE);
				gotoxy(X_VT + 97, Y_VT + 38);
				cout << "                          ";
				continue;
			}
		}
		if(key == ESC)
		{
			//----clear------
			gotoxy(posx - item.length() - 27, posy);
			cout << "                                             ";
			gotoxy(posx - item.length() - 27, posy  + 1);
			cout << "                                             ";
			gotoxy(posx - 45, posy - 1 + 7);
			cout << "                                                                                                             ";
			gotoxy(posx - 45, posy - 1 + 8);
			cout << "                                                                                                             ";
			gotoxy(posx - 45, posy - 1 + 3);
			cout << "                                                                                                                                                ";
			gotoxy(posx - 45, posy - 1 + 4);
			cout << "                                                                                                                                                ";
			gotoxy(posx - 45, posy - 1 + 5);
			cout << "                                                        ";
			gotoxy(posx - 45, posy - 1 + 6);
			cout << "                                                                                              ";
			gotoxy(posx - 45, posy - 1 + 30);
			cout << "                                                                                                                        ";
			gotoxy(posx - 45, posy - 1 + 31);
			cout << "                                                                                                                        ";
			gotoxy(posx - 45, posy - 1 + 29);
			cout << "                                                                                              ";
			gotoxy(posx - 45, posy - 1 + 28);
			cout << "                                                                                              ";
			for(int i = 0; i < 21; i++)
			{
				gotoxy(posx - 45, posy - 1 + 7 + i);
				cout << " ";
				gotoxy(posx - 40, posy - 1 + 7 + i);
				cout << " ";
				gotoxy(posx - 25, posy - 1 + 7 + i);
				cout << " ";
				gotoxy(posx, posy - 1 + 7 + i);
				cout << " ";
				gotoxy(posx + 15, posy - 1 + 7 + i);
				cout << " ";
				gotoxy(posx + 30, posy - 1 + 7 + i);
				cout << " ";
				gotoxy(posx + 45, posy - 1 + 7 + i);
				cout << " ";
			}
			for(int i = 0; i < 20; i++)
			{
				gotoxy(posx - 44, posy - 1 + 9 + i);
				cout << "    ";
				gotoxy(posx - 38, posy - 1 + 9 + i);
				cout << "                    ";
				gotoxy(posx - 23, posy - 1 + 9 + i);
				cout << "                     ";
				gotoxy(posx + 2, posy - 1 + 9 + i);
				cout << "               ";
				gotoxy(posx + 17, posy - 1 + 9 + i);
				cout << "               ";
				gotoxy(posx + 32, posy - 1 + 9 + i);
				cout << "               ";;
			}
			break;
		}
			
	}
}
int DemSOHD(LIST_HD l)
{
	int i = 0;
	if(l.pHead != NULL || l.pTail != NULL)
	{
		for(NODE_HD *p = l.pHead; p != NULL; p = p->pNext)
		{
			i++;
		}
	}
	return i;
}
void Statistical(LIST_HD l, NODE_NV p)
{
	time_t baygio = time(0);
   	tm *ltm = localtime(&baygio);
	DAT y1;
	DAT y2;
	y2.day = ltm->tm_mday;
	y2.month = 1 + ltm->tm_mon;
	y2.year = 1900 + ltm->tm_year;
	int rong, posx, posy, dai;
	rong = 2;
	dai = 5;
	posx = X_VT + 95;
	posy = Y_VT + 10;
	string *item = new string[6];
	item[0] = "CHON KHOANG THOI GIAN";
	item[1] = "Tu ngay:";
	item[2] = "Den ngay:";
	item[3] = "BANG LIET KE CAC HOA DON TRONG KHOANG THOI GIAN";
	item[4] = "Tu";
	item[5] = "den";
	TextColor(MAU_CONSOLE);
	VeKhung(rong + 4, posx - 2, posy - 3, 76);
	gotoxy(posx, posy);
	cout << item[1];
	VeKhung(rong, posx + item[1].length() + 1, posy - 1, dai);
	gotoxy(getx() + 5, posy);
	cout << "/";
	VeKhung(rong, getx() + 1, posy - 1, dai);
	gotoxy(getx() + 5, posy);
	cout << "/";
	VeKhung(rong, getx() + 1, posy - 1, dai + 2);
	gotoxy(getx() + 6, posy);
	cout << item[2];
	VeKhung(rong, getx() + 1, posy - 1, dai);
	gotoxy(getx() + 5, posy);
	cout << "/";
	VeKhung(rong, getx() + 1, posy - 1, dai);
	gotoxy(getx() + 5, posy);
	cout << "/";
	VeKhung(rong, getx() + 1, posy - 1, dai + 2);
	char key;
	int line = 0;
	char numlenday1[3] = {'\0'}, numlenday2[3] = {'\0'}, numlenmonth1[3] = {'\0'}, numlenmonth2[3] = {'\0'}, numlenyear1[4] = {'\0'}, numlenyear2[4] = {'\0'};
	itoa(y2.day, numlenday2, 10);
	itoa(y2.month, numlenmonth2, 10);
	itoa(y2.year, numlenyear2, 10);
	//---- hien ngay thang hien tai-----
	gotoxy(posx + item[1].length() + 40, posy);
	cout << y2.day;
	gotoxy(posx + item[1].length() + 49, posy);
	cout << y2.month;
	gotoxy(posx + item[1].length() + 58, posy);
	cout << y2.year;
	while(true)
	{
		switch(line)
		{
			case 0:
				{
					gotoxy(posx + item[1].length() + 3 + strlen(numlenday1), posy);
					NhapNGAY(y1.day, numlenday1, key, 2);
					break;
				}
			case 1:
				{
					gotoxy(posx + item[1].length() + 12 + strlen(numlenmonth1), posy);
					NhapTHANG(y1.month, numlenmonth1, key, 2);
					break;
				}
			case 2:
				{
					gotoxy(posx + item[1].length() + 21 + strlen(numlenyear1), posy);
					NhapNAM(y1.year, numlenyear1, key, 4);
					break;
				}
			case 3:
				{
					gotoxy(posx + item[1].length() + 40 + strlen(numlenday2), posy);
					NhapNGAY(y2.day, numlenday2, key, 2);
					break;
				}
			case 4:
				{
					gotoxy(posx + item[1].length() + 49 + strlen(numlenmonth2), posy);
					NhapTHANG(y2.month, numlenmonth2, key, 2);
					break;
				}
			case 5:
				{
					gotoxy(posx + item[1].length() + 58 + strlen(numlenyear2), posy);
					NhapNAM(y2.year, numlenyear2, key, 4);
					break;
				}
		}
		if(key == LEFT)
		{
			if(line == 0)
			{
				line = 5;
			}
			else line--;
		}
		if(key == RIGHT)
		{
			if(line >= 5)
			{
				line = 0;
			}
			else line++;
		}
		if(key == ENTER)
		{
			if(strlen(numlenday1) == 0 || strlen(numlenday2) == 0 || strlen(numlenmonth1) == 0 || strlen(numlenmonth2) == 0 || strlen(numlenyear1) == 0 || strlen(numlenyear2) == 0)
			{
				gotoxy(posx + 2, posy + 28);
				TextColor(MAUNEN);
				cout << "KHONG DUOC DE TRONG CAC TRUONG!";
				Sleep(700);
				gotoxy(posx + 2, posy + 28);
				TextColor(MAU_CONSOLE);
				cout << "                               ";
				continue;
			}
			//----kiem tra ngay thang
			if(CheckDay(y1) == TRUE)
			{
				continue;
			}
			if(CheckDay(y2) == TRUE)
			{		
				continue;
			}
			NODE_HD *q;
			//-------copy tu dslk qua mang tt------
			int tong = 0, sumhd = 0;
			tong = DemSOHD(l);
			HOA_DON *temp[tong];
			if(l.pHead != NULL || l.pTail != NULL)
			{
				for(q = l.pHead; q != NULL; q = q->pNext)
				{
					temp[sumhd] = new HOA_DON;
					strcpy(temp[sumhd]->soHD, q->data.soHD);
					temp[sumhd]->date.day = q->data.date.day;
					temp[sumhd]->date.month = q->data.date.month;
					temp[sumhd]->date.year = q->data.date.year;
					strcpy(temp[sumhd]->loai, q->data.loai);
					temp[sumhd]->cthd = new NODE_CTHD;
					InitCTHD(temp[sumhd]->cthd);
					for(int i = 0; i < q->data.cthd->n; i++)
					{
						strcpy(temp[sumhd]->cthd->Node_HD[i].maVT, q->data.cthd->Node_HD[i].maVT);
						temp[sumhd]->cthd->Node_HD[i].soLuong = q->data.cthd->Node_HD[i].soLuong;
						temp[sumhd]->cthd->Node_HD[i].donGia = q->data.cthd->Node_HD[i].donGia;
						temp[sumhd]->cthd->Node_HD[i].VAT = q->data.cthd->Node_HD[i].VAT;
						temp[sumhd]->cthd->n++;
					}
					sumhd++;
				}
			}
			else
			{
				TextColor(MAUNEN);
				gotoxy(X_VT + 97, Y_VT + 38);
				cout << "KHONG CO HOA DON NAO!";
				Sleep(700);
				TextColor(MAU_CONSOLE);
				gotoxy(X_VT + 97, Y_VT + 38);
				cout << "                     ";
				continue;
			} 
			//---------------------------------------------
			gotoxy(X_VT + 20, Y_VT - 1);
			cout << item[3];
			gotoxy(X_VT + 24, Y_VT);
			cout << "Tu ngay " << y1.day << "/" << y1.month << "/" << y1.year << " den ngay " << y2.day << "/" << y2.month << "/" << y2.year; 
			VeBang(39, 90, 23, 36, 43, 73, 0, X_VT, Y_VT + 1);
			gotoxy(X_VT + 7, Y_VT + 2);
			cout << "SO HOA DON";
			gotoxy(getx() + 9, Y_VT + 2);
			cout << "NGAY LAP";
			gotoxy(getx() + 4, Y_VT + 2);
			cout << "LOAI";
			gotoxy(getx() + 7, Y_VT + 2);
			cout << "HO TEN NHAN VIEN LAP";
			gotoxy(getx() + 8, Y_VT + 2);
			cout << "TRI GIA HD";
			gotoxy(X_VT + 1, Y_VT + 40);
			cout << "Trang "; //6
			bool thoat = true;
			int Max_1_Page = 36,
				mn = 0;
			int tempmn = 0, NumPg = 1;
			while(thoat)
			{
				int f = 0;
				tempmn = mn;
				cout << NumPg;
				for(mn; mn < sumhd; mn++)
				{
					NHAN_VIEN *k = new NHAN_VIEN;
					k = Search_NVHD(p, temp[mn]->soHD);
					unsigned int sum = 0;
					if (Totime(y1) <= Totime(temp[mn]->date) && Totime(temp[mn]->date) <= Totime(y2))
					{
						gotoxy(7, Y_VT + 4 + f);
						cout << temp[mn]->soHD; 
						gotoxy(30 , Y_VT + 4 + f);
						cout << temp[mn]->date.day << "/" << temp[mn]->date.month << "/" << temp[mn]->date.year;
						if(strcmp(temp[mn]->loai, "N") == 0)
						{
							gotoxy(43, Y_VT + 4 + f);
							cout << "Nhap";
						}
						else if(strcmp(temp[mn]->loai, "X") == 0)
						{
							gotoxy(43, Y_VT + 4 + f);
							cout << "Xuat";
						}
						gotoxy(50, Y_VT + 4 + f);
						cout << k->ho << " " << k->ten;
						if(temp[mn]->cthd->n > 0)
						{
							for (int i = 0; i < temp[mn]->cthd->n; i++)
							{
								sum = sum + (temp[mn]->cthd->Node_HD[i].donGia * temp[mn]->cthd->Node_HD[i].soLuong) + ((temp[mn]->cthd->Node_HD[i].VAT / 100) * temp[mn]->cthd->Node_HD[i].donGia * temp[mn]->cthd->Node_HD[i].soLuong);
							}
						}
						gotoxy(80, Y_VT + 4 + f);
						cout << sum;
					}
					else
					{
						continue;
					}
					f++;
					if(f == Max_1_Page || mn == sumhd - 1)
					{
						break;
					}
				}
				char page = _getch();
				if(page == -32)
				{
					page = _getch();
					if(page == PD || page == RIGHT || page == DOWN)
					{
						if(mn == sumhd - 1)
						{
							mn = tempmn;
						}
						else
						{
							mn = mn + 1;
							NumPg++;
						}
						for(int q = 0; q < 36; q++)
						{
							gotoxy(7, Y_VT + 4 + q);
							cout << "                     ";
							gotoxy(30 , Y_VT + 4 + q);
							cout << "           ";
							gotoxy(43, Y_VT + 4 + q);
							cout << "     ";
							gotoxy(50, Y_VT + 4 + q);
							cout << "                            ";
							gotoxy(80, Y_VT + 4 + q);
							cout << "              ";
							gotoxy(X_VT + 1, Y_VT + 40);
							cout << "      ";
						}
					}
					else if (page == PU || page == LEFT || page == UP)
					{
						if(mn == 35)
						{
							mn = tempmn;
						}
						else
						{
							if(mn == sumhd - 1)
							{
								if(NumPg == 1)
								{
									mn = tempmn;
								}
								else
								{
									NumPg--;
									mn = mn - f - 35;
								}
							}
							else
							{
								mn = mn - 35;
							}
						}
						for(int q = 0; q < 36; q++)
						{
							gotoxy(7, Y_VT + 4 + q);
							cout << "                     ";
							gotoxy(30 , Y_VT + 4 + q);
							cout << "           ";
							gotoxy(43, Y_VT + 4 + q);
							cout << "     ";
							gotoxy(50, Y_VT + 4 + q);
							cout << "                            ";
							gotoxy(80, Y_VT + 4 + q);
							cout << "              ";
							gotoxy(X_VT + 1, Y_VT + 40);
							cout << "      ";
						}
					}
				}
				else if (page == ESC || page == ENTER)
				{
					for(int q = 0; q < 36; q++)
					{
						gotoxy(7, Y_VT + 4 + q);
						cout << "                     ";
						gotoxy(30 , Y_VT + 4 + q);
						cout << "           ";
						gotoxy(43, Y_VT + 4 + q);
						cout << "     ";
						gotoxy(50, Y_VT + 4 + q);
						cout << "                            ";
						gotoxy(80, Y_VT + 4 + q);
						cout << "              ";
					}
					gotoxy(X_VT + 20, Y_VT - 1);
					cout << "                                               ";
					gotoxy(X_VT + 24, Y_VT);
					cout << "                                      ";
					gotoxy(X_VT, Y_VT + 1);
					cout << "                                                                                           ";
					gotoxy(X_VT, Y_VT + 3);
					cout << "                                                                                           ";
					gotoxy(X_VT, Y_VT + 2);
					cout << "                                                                                           ";
					gotoxy(X_VT, Y_VT + 40);
					cout << "                                                                                           ";
					for(int i = 0; i < 39; i++)
					{
						gotoxy(X_VT, Y_VT + 2 + i);
						cout << " ";
						gotoxy(X_VT + 23, Y_VT + 2 + i);
						cout << " ";
						gotoxy(X_VT + 36, Y_VT + 2 + i);
						cout << " ";
						gotoxy(X_VT + 43, Y_VT + 2 + i);
						cout << " ";
						gotoxy(X_VT + 73, Y_VT + 2 + i);
						cout << " ";
						gotoxy(X_VT + 90, Y_VT + 2 + i);
						cout << " ";
					}
				//	key = ESC;
					thoat = false;
				}
				else mn = tempmn;
			}
		}
		if(key == ESC)
		{
			//--------xoa -----------
			TextColor(MAU_CONSOLE);
			XoaKhung(rong + 4, posx - 2, posy - 3, 76);
			gotoxy(posx, posy);
			cout << "                                                                                       ";
			gotoxy(posx, posy + 1);
			cout << "                                                                                       ";
			gotoxy(posx, posy + 2);
			cout << "                                                                                       ";
			gotoxy(posx, posy - 1);
			cout << "                                                                                       ";
			XoaKhung(rong, getx() + 1, posy - 1, dai + 2);
			gotoxy(X_VT + 20, Y_VT - 1);
			cout << "                                               ";
			gotoxy(X_VT + 24, Y_VT);
			cout << "                                      ";
			gotoxy(X_VT + 20, Y_VT - 1);
			cout << "                                               ";
			gotoxy(X_VT + 24, Y_VT);
			cout << "                                      ";
			gotoxy(X_VT, Y_VT + 1);
			cout << "                                                                                           ";
			gotoxy(X_VT, Y_VT + 3);
			cout << "                                                                                           ";
			gotoxy(X_VT, Y_VT + 2);
			cout << "                                                                                           ";
			gotoxy(X_VT, Y_VT + 40);
			cout << "                                                                                           ";
			for(int i = 0; i < 39; i++)
			{
				gotoxy(X_VT, Y_VT + 2 + i);
				cout << " ";
				gotoxy(X_VT + 23, Y_VT + 2 + i);
				cout << " ";
				gotoxy(X_VT + 36, Y_VT + 2 + i);
				cout << " ";
				gotoxy(X_VT + 43, Y_VT + 2 + i);
				cout << " ";
				gotoxy(X_VT + 73, Y_VT + 2 + i);
				cout << " ";
				gotoxy(X_VT + 90, Y_VT + 2 + i);
				cout << " ";
			}
				//	key = 
			break;
		}
	}
	
}
void QLHD(LIST_HD &l, TREE_VT &t, NODE_NV &p)
{
	Ve_Giao_Dien();
	int posxBT = X_VT + 95,
		posyBT = Y_VT + 2;
	string *itemBT = new string[3];
	itemBT[0] = "LAP HOA DON";
	itemBT[1] = "IN HOA DON";
	itemBT[2] = "THONG KE HOA DON";
	gotoxy(posxBT, posyBT - 2);
	TextColor(MAUOPTION);
	cout << "CHON CHUC NANG";
	gotoxy(X_STTBAR, Y_STTBAR);
	TextColor(MAU_STTBAR);
	cout << "HOT KEY: ESC: Thoat/Huy/Tro ve - ENTER: Chon - F2: Luu - F10: Xoa vat tu dang them vao hoa don - PageUp/PageDown: Chuyen trang";
	VeButton(3, posxBT, posyBT, itemBT[0], MAUNENBT_NSL, MAUTEXTBT_NSL); // lap hoa don
	VeButton(3, posxBT + 22, posyBT, itemBT[1], MAUNENBT_NSL, MAUTEXTBT_NSL); // in hoa don
	VeButton(3, posxBT + 43, posyBT, itemBT[2], MAUNENBT_NSL, MAUTEXTBT_NSL); // thong ke
	TextColor(MAU_CONSOLE);
	VeBangNotif(2, 100, posxBT, posyBT + 35);
	bool editcontinue = true;
	while(editcontinue)
	{
		char key;
		TextColor(MAU_CONSOLE);
		if(key == ESC) break;
		int line1 = -1;
		while(true)
		{
			key = _getch();
			if(key == RIGHT)
			{
				line1++;
				if(line1 >= 3)
					line1 = 0;		
				if(line1 == 0)
				{
					VeButton(3, posxBT, posyBT, itemBT[0], MAUNENBT_SL, MAUTEXTBT_SL); // lap hoa don
					VeButton(3, posxBT + 22, posyBT, itemBT[1], MAUNENBT_NSL, MAUTEXTBT_NSL); // in hoa don
					VeButton(3, posxBT + 43, posyBT, itemBT[2], MAUNENBT_NSL, MAUTEXTBT_NSL); // thong ke
				}
				else if(line1 == 1)
				{
					VeButton(3, posxBT, posyBT, itemBT[0], MAUNENBT_NSL, MAUTEXTBT_NSL); // lap hoa don
					VeButton(3, posxBT + 22, posyBT, itemBT[1], MAUNENBT_SL, MAUTEXTBT_SL); // in hoa don
					VeButton(3, posxBT + 43, posyBT, itemBT[2], MAUNENBT_NSL, MAUTEXTBT_NSL); // thong ke
				}
				else if(line1 == 2)
				{
					VeButton(3, posxBT, posyBT, itemBT[0], MAUNENBT_NSL, MAUTEXTBT_NSL); // lap hoa don
					VeButton(3, posxBT + 22, posyBT, itemBT[1], MAUNENBT_NSL, MAUTEXTBT_NSL); // in hoa don
					VeButton(3, posxBT + 43, posyBT, itemBT[2], MAUNENBT_SL, MAUTEXTBT_SL); // thong ke
				}
				
									
			}
			if(key == LEFT)
			{
				line1--;
				if(line1 <= -1)
					line1 = 2;
				if(line1 == 0)
				{
					VeButton(3, posxBT, posyBT, itemBT[0], MAUNENBT_SL, MAUTEXTBT_SL); // lap hoa don
					VeButton(3, posxBT + 22, posyBT, itemBT[1], MAUNENBT_NSL, MAUTEXTBT_NSL); // in hoa don
					VeButton(3, posxBT + 43, posyBT, itemBT[2], MAUNENBT_NSL, MAUTEXTBT_NSL); // thong ke
				}
				else if(line1 == 1)
				{
					VeButton(3, posxBT, posyBT, itemBT[0], MAUNENBT_NSL, MAUTEXTBT_NSL); // lap hoa don
					VeButton(3, posxBT + 22, posyBT, itemBT[1], MAUNENBT_SL, MAUTEXTBT_SL); // in hoa don
					VeButton(3, posxBT + 43, posyBT, itemBT[2], MAUNENBT_NSL, MAUTEXTBT_NSL); // thong ke
				}
				else if(line1 == 2)
				{
					VeButton(3, posxBT, posyBT, itemBT[0], MAUNENBT_NSL, MAUTEXTBT_NSL); // lap hoa don
					VeButton(3, posxBT + 22, posyBT, itemBT[1], MAUNENBT_NSL, MAUTEXTBT_NSL); // in hoa don
					VeButton(3, posxBT + 43, posyBT, itemBT[2], MAUNENBT_SL, MAUTEXTBT_SL); // thong ke
				}
				
			}
			if(key == ENTER)
			{
				switch(line1)
				{
					case 0:
						{
							Input_HD(l, p, t);
							VeButton(3, posxBT, posyBT, itemBT[0], MAUNENBT_NSL, MAUTEXTBT_NSL); // lap hoa don
							VeButton(3, posxBT + 22, posyBT, itemBT[1], MAUNENBT_NSL, MAUTEXTBT_NSL); // in hoa don
							VeButton(3, posxBT + 43, posyBT, itemBT[2], MAUNENBT_NSL, MAUTEXTBT_NSL); // thong ke
							break;
						}
					case 1:
						{
							Output_lHD(l, t, p);
							VeButton(3, posxBT, posyBT, itemBT[0], MAUNENBT_NSL, MAUTEXTBT_NSL); // lap hoa don
							VeButton(3, posxBT + 22, posyBT, itemBT[1], MAUNENBT_NSL, MAUTEXTBT_NSL); // in hoa don
							VeButton(3, posxBT + 43, posyBT, itemBT[2], MAUNENBT_NSL, MAUTEXTBT_NSL); // thong ke
							break;
						}
					case 2:
						{
							Statistical(l, p);
							VeButton(3, posxBT, posyBT, itemBT[0], MAUNENBT_NSL, MAUTEXTBT_NSL); // lap hoa don
							VeButton(3, posxBT + 22, posyBT, itemBT[1], MAUNENBT_NSL, MAUTEXTBT_NSL); // in hoa don
							VeButton(3, posxBT + 43, posyBT, itemBT[2], MAUNENBT_NSL, MAUTEXTBT_NSL); // thong ke
							break;
						}
				}
				break;
			}
			if(key == F10)
			{
				VeButton(3, posxBT, posyBT, itemBT[0], MAUNENBT_NSL, MAUTEXTBT_NSL); // lap hoa don
				VeButton(3, posxBT + 22, posyBT, itemBT[1], MAUNENBT_NSL, MAUTEXTBT_NSL); // in hoa don
				VeButton(3, posxBT + 43, posyBT, itemBT[2], MAUNENBT_NSL, MAUTEXTBT_NSL); // thong ke
				break;
			}
			if(key == ESC)
			{
				TextColor(MAU_CONSOLE);
				editcontinue = false;
				break;
			}
				
		}
	}
}
void LoadHD(LIST_HD &l, NODE_NV &p)
{
	fstream inFileHD;
	fstream inFileCTHD;
	inFileHD.open("D:/Dev-Cpp/New Update Project 3/Do_an_moi-master5/DATA/DS_HoaDon.txt", ios::in);
	char temp1[5];
	string ho, ten;
	int num = 0;
	HOA_DON hd;
	if(inFileHD.is_open())
	{
		inFileHD.getline(temp1, 3);
		while(!inFileHD.eof())
		{
			int vitri = 0;
			inFileHD.getline(hd.soHD, 20);
			inFileHD.getline(hd.loai, 2);
			inFileHD >> hd.date.day;
			inFileHD >> hd.date.month;
			inFileHD >> hd.date.year;
			inFileHD.getline(temp1, 3);
			NODE_HD *q = Get_HD(hd);
			AddTail(l, q);
			getline(inFileHD, ho);
			getline(inFileHD, ten);
			if(!isEmpty(p))
			{
				for(int i = 0; i < p.n; i++)
				{
					if(p.Node_NV[i]->ho == ho && p.Node_NV[i]->ten == ten)
					{
						vitri = i;
						break;
					}
				}
			}
			NODE_HD *tmp;
			tmp = new NODE_HD;
			tmp->data = hd;
			tmp->pNext = p.Node_NV[vitri]->dshd;
			p.Node_NV[vitri]->dshd = tmp;
			if(inFileHD == NULL)
			{
				break;
			}
		}
	}
	else cout << "\nMo file that bai";
	inFileHD.close();
	if(l.pHead != NULL || l.pTail != NULL)
	{
		for(NODE_HD *q = l.pHead; q != NULL; q = q->pNext)
		{
			char s[100];
			strcpy(s, "D:/Dev-Cpp/New Update Project 3/Do_an_moi-master5/DATA/CTHD/");
			strcat(s, q->data.soHD);
			strcat(s, ".txt");
			inFileCTHD.open(s, ios::in);
			char temp2[5];
			if(inFileCTHD.is_open())
			{
				q->data.cthd = new NODE_CTHD;
				InitCTHD(q->data.cthd);
				inFileCTHD.getline(temp2, 3);
				
				while(!inFileCTHD.eof())
				{
					
					inFileCTHD.getline(q->data.cthd->Node_HD[q->data.cthd->n].maVT, 10); 
					inFileCTHD >> q->data.cthd->Node_HD[q->data.cthd->n].soLuong; 
					inFileCTHD >> q->data.cthd->Node_HD[q->data.cthd->n].donGia; 
					inFileCTHD >> q->data.cthd->Node_HD[q->data.cthd->n].VAT; 
					q->data.cthd->n++;
					inFileCTHD.getline(temp2, 3);
					if(inFileCTHD == NULL)
					{
						break;
					}
				}
			}
			else cout << "\nMo file that bai";
			inFileCTHD.close();
		}
	}
}
void SaveHD(LIST_HD l, NODE_NV p)
{
	fstream outFileHD;
	fstream outFileCTHD;
	outFileHD.open("D:/Dev-Cpp/New Update Project 3/Do_an_moi-master5/DATA/DS_HoaDon.txt", ios::out);
	if(outFileHD.is_open())
	{
		for(NODE_HD *q = l.pHead; q != NULL; q = q->pNext)
		{
			outFileHD << endl << q->data.soHD;
			outFileHD << endl << q->data.loai ;
			outFileHD << endl << q->data.date.day;
			outFileHD << endl << q->data.date.month;
			outFileHD << endl << q->data.date.year;
			
			NHAN_VIEN *k = new NHAN_VIEN;
			k = Search_NVHD(p, q->data.soHD);
			outFileHD << endl << k->ho;
			outFileHD << endl << k->ten;
			
		}
	}
	outFileHD.close();
	if(l.pHead != NULL || l.pTail != NULL)
	{
		for(NODE_HD *q = l.pHead; q != NULL; q = q->pNext)
		{
			char s[100];
			strcpy(s, "D:/Dev-Cpp/New Update Project 3/Do_an_moi-master5/DATA/CTHD/");
			strcat(s, q->data.soHD);
			strcat(s, ".txt");
			outFileCTHD.open(s, ios::out);
			if(outFileCTHD.is_open())
			{
				for(int i = 0; i < q->data.cthd->n; i++)
				{
					outFileCTHD << endl << q->data.cthd->Node_HD[i].maVT;
					outFileCTHD << endl << q->data.cthd->Node_HD[i].soLuong;
					outFileCTHD << endl << q->data.cthd->Node_HD[i].donGia;
					outFileCTHD << endl << q->data.cthd->Node_HD[i].VAT;
				}
			}
			outFileCTHD.close();
		}
	}
}
