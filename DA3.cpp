# include "Thu-vien-3.h"
#include<time.h>
int main()
{
	resizeConsole(1920, 1080);
	remove_scrollbar();
	TREE_VT t;
	NODE_NV p;
	LIST_HD l;

	Init_VT(t);
	InitNV(p);
	Init_HD(l);
	
	Screenload(t, p);
	LoadHD(l, p);
	Ve_Giao_Dien();
	TextColor(MAU_CONSOLE);
	inMenu(t, p, l);
	return 0;
}
