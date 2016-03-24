#include <conio.h>
#include <stdio.h>
void main ()
{
	clrscr ();
	char kt;
	printf ("Nhap ky tu: ");
	scanf ("%c",&kt);
	if(kt>=97&&kt<=112)
	{
		kt=kt-32;
		printf("Ky tu sau khi viet hoa la %c",kt);
	}
	else//
	{
		kt=kt+32;
		printf("Ky tu sau khi viet thuong la %c",kt);
	}
        getch ();

}