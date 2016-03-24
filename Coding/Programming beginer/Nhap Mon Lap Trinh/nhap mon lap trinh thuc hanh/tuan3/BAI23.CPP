#include "conio.h"
#include "stdio.h"
#include "math.h"
void main ()
{
	int a,b,c;
	clrscr();
	printf("Nhap vao canh thu 1:");
	scanf("%d",&a);
	printf("Nhap vao canh thu 2:");
	scanf("%d",&b);
	printf("Nhap vao canh thu 3:");
	scanf("%d",&c);
	if ((a+b>c)&&(a+c>b)&&(c+b>a))
	{
		if(((a==b)||(a==c)||(b==c))&&((a*a==b*b+c*c)||(b*b==c*c+a*a)||(c*c==b*b+a*a)))
			printf("Tam giac vuong can");
		else if ((a*a==b*b+c*c)||(b*b==c*c+a*a)||(c*c==b*b+a*a))
			printf("Tam giac vuong");
	        else if ((a==b)&&(a==c)&&(c==b))
			printf("Tam giac deu");
		else if((a==b)||(a==c)||(b==c))
			printf("Tam giac can");
		else
                	printf("Tam giac thuong");
	}
	else
        	printf("Khong phai la tam giac");

	getch();
}