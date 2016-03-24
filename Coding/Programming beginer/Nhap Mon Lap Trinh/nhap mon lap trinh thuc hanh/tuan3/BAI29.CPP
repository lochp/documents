#include "conio.h"
#include "stdio.h"
#include "math.h"
void main()
{
	int x;
	clrscr();
	printf("Nhap vao so nguyen x:");scanf("%d",&x);
	if (x%2==0)
		printf("%d la so chia het cho 2",x);
	else
		printf("%d la so ko chia het cho 2",x);
	getch();
}