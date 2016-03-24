#include "conio.h"
#include "stdio.h"
#include "math.h"
void fibo(int n)
{
	int i,x,y,tg;
	x=0;
	y=1;
	printf("0");
	printf(" 1");;
	for (i=1;i<=n-2;i++)
	{
		tg=y;
		y=y+x;
		printf(" %d",y);
		x=tg;
	}
}
void main ()
{
	int n;
	clrscr();
	printf("Nhap vao 1 so :");
	scanf("%d",&n);
	fibo(n);
	getch();
}
