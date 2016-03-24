#include "conio.h"
#include "stdio.h"
#include "math.h"
void main()
{
	int a,b;
	clrscr();
	printf("Nhap vao so a:");scanf("%d",&a);
	printf("Nhap vao so b:");scanf("%d",&b);
	printf("%d + %d = %d ",a,b,a+b);
	getch();
}