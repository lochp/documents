#include "conio.h"
#include "stdio.h"
void main ()
{
	int n;
	clrscr();
	printf("Nhap vao so he 10:");
	scanf("%d",&n);
	printf("\nChuyen qua he 8 = %o",n);
	printf("\nChuyen qua he 16 =%x",n);
	getch();
}