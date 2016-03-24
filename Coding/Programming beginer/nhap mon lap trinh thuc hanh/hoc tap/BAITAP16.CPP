#include <conio.h>
#include <stdio.h>
void main()
{
	clrscr ();
	float a,b,x;
	printf ("Nhap a: ");
	scanf("%f",&a);
	printf ("Nhap b: ");
	scanf("%f",&b);
	if (a==0)
	{
		if(b==0)
			printf ("PT VSN");
		else//b!=0
			printf ("PT VN");
	}
	else//a!=0
	x=-b/a;
	printf("Nghiem cua PT la %f",x);
        getch ();
}