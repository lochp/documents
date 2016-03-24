#include"stdio.h"
#include"conio.h"
#include"math.h"
main()
{
float k,a,b,c;
float x,x1,x2;
float d;
clrscr();
giaipt:printf("nhap vao a:");
scanf("%f",&a);
printf("nhap vao b:");
scanf("%f",&b);
printf("nhap vao c:");
scanf("%f",&c);
if(a==0)
{  if(b==0)
		{if (c==0)
		printf("\nphuong trinh vo so nghiem");
		else
		printf("\nphuong trinh vo nghiem");}
	else
		printf("phuong trinh co nghiem la:x=%.2f",-c/b);}
else
 {  d=b*b-4*a*c;
  if(d<0)
  printf("\nphuong trinh vo nghiem");
  else
  if(d==0)
  printf("phuong trinh co nghiem kep =%.2f",-b/(2*a));
  else
  { x1=(-b+sqrt(d))/(2*a);
    x2=(-b-sqrt(d))/(2*a);
  printf("phuong trinh co nghiem x1=%.2f x2=%.2f",x1,x2);}
  }
getch();
}
