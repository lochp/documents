#include "conio.h"
#include "stdio.h"
#include "math.h"
void main()
{
	float r,cv,dt;
	clrscr();
	printf("Nhap vao so ban kinh :");scanf("%f",&r);
	cv=2*3.14*r;
	dt=3.14 *r*r;
	printf("Chu vi : %.2f \n",cv);
	printf("Dien tich : %.2f",dt);
	getch();
}