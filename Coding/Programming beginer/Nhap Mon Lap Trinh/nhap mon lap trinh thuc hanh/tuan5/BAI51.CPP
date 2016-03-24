#include <stdio.h>
#include <conio.h>
long gth (int n)
{
	long gt=1;
	for (int i=1;i<=n;i++)
		gt=gt*i;
	return gt;
}
void main ()
{
	clrscr ();
	int n;
	long gt;
	printf ("nhap vao n:");
	scanf ("%d",&n);
	gt= gth (n);
	printf ("giai thua cua n la: %ld",gt);
	getch ();
}
