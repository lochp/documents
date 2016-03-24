#include "stdio.h"
#include "conio.h"
#include "math.h"
void btp(float a,float b)
{
	if (a==0)
		if (b>0)
			printf("BPT co VSN");
		else
			printf("BPT VN");
	else
	{       float x;
		x=-b/a;
		if (a>0)
		printf("Vay BFT co nghiem x > %.2f",x);
		if (a<0)
		printf("Vay BFT co nghiem x < %.2f",x);
	}
}
void main ()
{
	int a,b;
	clrscr();
	printf("Nhap so a:");
	scanf("%d",&a);
	printf("Nhap so b:");
	scanf("%d",&b);
	btp(a,b);
	getch();
}
