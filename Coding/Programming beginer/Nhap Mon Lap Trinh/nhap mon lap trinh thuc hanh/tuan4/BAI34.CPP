#include "stdio.h"
#include "conio.h"
void main ()
{
	int n;
	clrscr();

	do
	{
	printf("Nhap vao n:");
	scanf("%d",&n);
	}
	while ((n>7)||(n<0));
        
	switch (n)
	{
	case 1:
        	printf("Chu Nhat");break;
	case 2:
		printf("Thu 2");break;
	case 3:
		printf("Thu 3");break;
	case 4:
		printf("Thu 4");break;
	case 5:
		printf("Thu 5");break;
	case 6:
		printf("Thu 6");break;
	case 7:
		printf("Thu 7");break;
        }
	getch();
}

