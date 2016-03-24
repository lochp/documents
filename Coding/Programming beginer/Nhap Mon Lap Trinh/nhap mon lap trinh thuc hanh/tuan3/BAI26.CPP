#include "stdio.h"
#include "conio.h"
void main ()
{
	int a;
	clrscr();
	printf("Nhap vao so nguyen a:");scanf("%d",&a);
	if (a>0)
		printf("%d la so duong",a);
	else
		printf("%d la so am",a);
	if (a%2==0)
		printf("\n%d la so chan",a);
	else
		printf("\n%d la so le",a);
	getch();
}
