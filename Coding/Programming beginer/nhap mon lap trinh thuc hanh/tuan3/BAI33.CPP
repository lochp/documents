#include "conio.h"
#include "stdio.h"
#include "math.h"
void main ()
{
	float tt,use;
	clrscr();
	printf("Nhap vao so dien tieu thu:");
	scanf("%f",&use);
	if (use<=100)
		tt=use*600;
	else if (use<=150)
		tt=(use-100)*700+60000;
	else if (use<=200)
		tt=(use-150)*900+35000+60000;
	else
		tt=(use-200)*1100+45000+35000+60000;
	printf("So tien phai tra :%.f ngan",tt);
	getch();
}