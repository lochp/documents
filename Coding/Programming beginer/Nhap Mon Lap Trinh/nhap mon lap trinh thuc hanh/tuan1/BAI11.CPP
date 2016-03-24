#include "conio.h"
#include "stdio.h"
#include "math.h"
void main()
{
	int g,p,s;
	long t;
	clrscr();
	printf("Nhap vao gio : :");
	scanf("%d",&g);
	printf("Nhap vao phut :");
	scanf("%d",&p);
	printf("Nhap vao giay :");
	scanf("%d",&s);
	t=(g*60+p)*60+s;
	printf("Tong so giay tuong ung = %ld ",t);
	getch();
}