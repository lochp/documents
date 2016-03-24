#include "conio.h"
#include "stdio.h"
#include "math.h"
void main()
{
	long a,b,tg;
	clrscr();
	printf("Nhap vao so a:");scanf("%ld",&a);
	printf("Nhap vao so b:");scanf("%ld",&b);
	tg=pow(a+b,2);
	printf("( %ld + %ld ) ^2 = %ld ",a,b,tg);
	getch();
}