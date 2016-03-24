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
/* int t2(int n)
 {
  int tong=0 ;
  for(int i=1 ;i<=n;i++)
   tong+=pow(i,i);
  return tong;
 }*/
 /*
 float t3(int n)
  {
   float tong=0;
   for(int i=1;i<=n;i++)
    tong+=1.0/i;
   return tong;
  }  */
 float t4(int n)
  {
   float tong=0  ;
   for (int i=1;i<=n;i++)
    { if(i%2==0)
       tong-=1.0/i;
      else
       tong+=1.0/i;
    }
   return tong;
  }
void main ()
{
  clrscr();
  float a;
  printf("nhap so a= ");
  scanf("%f",&a);
  a=t4(a);
  printf("ket qua =%f",a);

  getch();
}


