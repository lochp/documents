#include<conio.h>
#include<stdio.h>
#include<math.h>
/*
long tongso(long n)
 {
  long m=0,tong=0;
   while (n>0)
    { long du ;
     du=n%10;
     n=n/10  ;
     tong=tong+du;
    }
   return tong;
   }
 void main()
  {
   clrscr ();
   long  a ;
   printf("so can nhap a=");
   scanf("%ld",&a);
  a=tongso(a);
   printf("tongso  = %ld",a);
   getch();
  }
*/
/*
int t1(int n)
 {
  int tong=0  ;
  for(int i=1;i<=n;i++)
   tong+=i;
  return tong;
 }*/
 int t2(int n)
 {
  int tong=0 ;
  for(int i=1 ;i<=n;i++)
   tong+=pow(i,i);
  return tong;
 }
void main ()
{
  clrscr();
  int a;
  printf("nhap so a= ");
  scanf("%d",&a);
  a=t2(a);
  printf("ket qua =%d",a);
  getch();
}


