#include"stdio.h"
#include"conio.h"
#include"ctype.h"
main()
{
char kytu;
clrscr();
printf("nhap kytu:");
scanf("%c",&kytu);
if(isupper(kytu))
printf("day la chu hoa la %c",kytu);
	else
{		if(islower(kytu))
			printf("day la chu thuong %c",kytu);
		else
		  {
			kytu=("%d",kytu);
			if((kytu>=48)&&(kytu<=57))
			printf("day la chu so %c",kytu);
			else
			printf("Khong phai la nhung loai tren");
		  }
}
getch();
}
