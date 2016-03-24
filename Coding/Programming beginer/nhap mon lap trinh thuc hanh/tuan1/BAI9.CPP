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
{ kytu=tolower(kytu);
 printf("kytu thuong la %c",kytu);
 }
 else
 {
 kytu=toupper(kytu);
 printf("kytu hoa la %c", kytu);
 }
 getch();

}
