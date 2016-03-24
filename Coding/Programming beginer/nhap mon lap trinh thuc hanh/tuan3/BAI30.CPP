#include "conio.h"
#include "stdio.h"
#include "math.h"
void main()
{
	int x;
	clrscr();
	printf("Nhap vao so nguyen x:");scanf("%d",&x);
	if (x%9==0)
		printf("%d la so chia het cho 9",x);
	else
		printf("%d la so ko chia het cho 9",x);
	getch();
}