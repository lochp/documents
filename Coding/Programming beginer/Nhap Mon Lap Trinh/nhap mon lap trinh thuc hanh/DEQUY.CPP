#include <stdio.h>
#include <conio.h>

float von(int nam,int goc)
{
	if (nam==0)
		return goc;

		return (1.12)*von(nam-1,goc);
}

void main()
{
clrscr();
int nam,goc;
float lai;
printf("nhap nam ");
scanf("%d",&nam);
printf("nhap von ");
scanf("%d",&goc);
lai= von(nam,goc);
printf("%f",lai);
getch();

}