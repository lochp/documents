#include "conio.h"
#include "stdio.h"
#include "math.h"
void main()
{
	float a,b;
	clrscr();
	printf("Nhap vao so a:");scanf("%f",&a);
	printf("Nhap vao so b:");scanf("%f",&b);
	printf("%f / %f = %.2f ",a,b,a/b);
	getch();
}