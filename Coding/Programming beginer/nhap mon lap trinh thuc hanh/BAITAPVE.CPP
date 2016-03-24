#include<stdio.h>
#include<conio.h>
#include<math.h>

 void vehinhsao (int n)
  {
   for(int i=0;i<=n;i++)
    {
     for(int j=0;j<=i;j++)
      printf("*");
     printf ("\n");
    }
  }
 void vehinhvuong(int n)
  {
   for(int i=1; i<=n;i++)
    {
     for (int j=1;j<=n;j++)
      printf("*");
     printf("\n");
    }
   }
  void hinhtamgiaccan(int n)
   {
    int x=30, y=15;
    for( int i=1 ;i<=n;i++)
     {
      gotoxy(x-i,y+i);
      for(int j=1;j<=2*i-1;j++)
      printf("*");
     }
   }
/*  void hinhchunhat(int n,int m)
  {
   for(int i=0;i<=n;i++)
    {
     for(int j=0;j<=m;j++)
	printf("*");
     printf("\n");
    }
  }*/

  void tamgiaccanrong(int n)
   {
     for(int i=0;i<=n;i++)
      {
       for(int j=1;j<=n+i-1;j++)
	 if(i==n||j==n-i+1||j==n+i-1)
	  printf("*");
	 else
	  printf(" ");
       printf("\n");
       }
    }
  void hinhbh (int n)
   {
    for (int i=1;i<=2*n-1;i++)
     {
      for (int j=1; j<=n;j++)
       if(i<n)
	{
	 if(j==i||i==n||j==1)
	  printf("*");
	 else
	  printf(" ");
	 }
	else
	 {
	  if(j==n||j==i-n+1)
	   printf("*");
	  else
	   printf(" ");
         }
      printf("\n");
     }
   }



 void main ()
  {
   clrscr();
   int n,m;
   printf("nhap so n");
   scanf("%d",&n);
 /*  printf("nhap so m=");
   scanf("%d",&m);      */
   vehinhsao(n);
   vehinhvuong(n);
   hinhtamgiaccan(n);
  /* hinhchunhat(n,m);*/
   tamgiaccanrong(n);
   hinhbh(n);
   getch();

  }

 

