#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<dos.h>

typedef struct DIEM
{
	int x,y,c;
	char v;
}             ;
void taoDiem(DIEM &p)
{
	p.x=random(80);
	p.y=random(50);
	p.c=random(15)+1;
	p.v=random(26)+65;
}
void xuatDiem(DIEM p)
{
	gotoxy(p.x,p.y);
	textcolor((p.c)-128);
	cprintf("%c",p.v);
}
void main()
{
	clrscr();
        DIEM d;
	randomize();
	do
	{
		taoDiem(d);
		xuatDiem(d);
		delay(100);
	}
	 while(!kbhit());
         getch();
}
