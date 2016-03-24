#include <stdio.h>
#include <conio.h>
long int gtdq (int n)
{
	if (n==0)
		return 1;
	return n*gtdq (n-1);
}

long int tong (int n)
{
	if (n==0)
		return 0;
	return n+tong (n-1);
}

long int fibo (int n)
{
	if (n==0||n==1)
		return 1;
	return fibo (n-1) + fibo (n-2);
}

long int mu (int x,int n)
{
	if (n==0)
		return 1;
	return x* mu (x,n-1);
}

long int tong1 (int x,int n)
{
	if (n==1)
		return x;
	return (mu (x,n)/tong (n))+tong1 (x,n-1);
}







void main ()
{
	clrscr ();
	int n,x;
	long int kq1,kq2,kq3,kq4,kq5;
	printf ("hay nhap vao n:");
	scanf ("%d",&n);
	printf ("hay nhap vao x:");
	scanf ("%d",&x);
	kq1=gtdq (n);
	printf ("\nket qua 1: %ld",kq1);
	kq2=tong (n);
	printf ("\nket qua 2: %ld",kq2);
	kq3=fibo (n);
	printf ("\nket qua 3: %ld",kq3);
	kq4=mu (x,n);
	printf ("\nket qua 4: %ld",kq4);
	kq5=tong1 (x,n);
	printf ("\nket qua 5: %ld",kq5);
	getch ();
}