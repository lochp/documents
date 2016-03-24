#include "stdio.h"
#include "conio.h"
#include "math.h"
void main ()
{
	int n,d,t;
	clrscr();
	printf("Nhap vao so n:");
	scanf("%d",&n);
	t=0;
	do
	{
		d=n%10;
		t=t+d;
		n=n/10;
	}
	while (n!=0);
	printf("Tong cac chu so %d",t);
	getch();
}