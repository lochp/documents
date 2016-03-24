#include <conio.h>
#include <stdio.h>
#include <math.h>
void GiaiPTBN (float a, float b, float x)
{
	if(a==0)
	{
		if(b==0)
			printf ("PT VSN");
		else//b!=0
			printf ("PT VN");
	}
	else//a!=0
	x=-b/a;
	printf ("Nghiem cua PT la x=%f",x);
}
void main ()
{
	clrscr ();
	float a,b,c,delta,x1,x2,x;
	printf ("Nhap a: ");
	scanf ("%f",&a);
	printf ("Nhap b: ");
	scanf ("%f",&b);
	printf ("Nhap c: ");
	scanf ("%f",&c);
	if(a==0)
		GiaiPTBN(a,b,x);
	else//a!=0
		delta=pow(b,2)-4*a*c;
	if(delta<0)
		printf ("PT VN");
	else if(delta==0)
		{
		x1=x2=-b/(2*a);
		printf ("PT co nghiem kep x=%f",x1);
		}
		else//delta>0
		{
		x1=(-b+sqrt(delta))/(2*a);
		x2=(-b-sqrt(delta))/(2*a);
		printf ("PT co 2 nghiem:\n");
		printf ("x1=%f\n",x1);
		printf ("x2=%f",x2);
		}
	getch ();

}