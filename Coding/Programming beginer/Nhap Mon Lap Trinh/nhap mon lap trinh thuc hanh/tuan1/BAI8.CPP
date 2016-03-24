#include "conio.h"
#include "stdio.h"
#include "math.h"
void main()
{
	char ch;
	clrscr();
	printf("Nhap vao 1 ky tu :");
	scanf("%c",&ch);
	printf("Ky tu o truoc %c \n",ch-1);
	printf("Ky tu o sau %c ",ch+1);
	getch();
}