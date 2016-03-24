#include "stdio.h"
#include "conio.h"
void main ()
{
	clrscr();
	int a,b,c,d,max,min;
	printf("Nhap vao so a:");scanf("%d",&a);
	printf("Nhap vao so b:");scanf("%d",&b);
	printf("Nhap vao so c:");scanf("%d",&c);
	printf("Nhap vao so d:");scanf("%d",&d);
	max=a;
	min=a;
	if (max<b)
		max=b;
	if (max<c)
		max=c;
	if (max<d)
		max=d;
	if (min>b)
		min=b;
	if (min>c)
		min=c;
	if (min>d)
		min=d;
	printf("So lon nhat la %d",max);
	printf("\nSo nho nhat la %d",min);
	getch();
}