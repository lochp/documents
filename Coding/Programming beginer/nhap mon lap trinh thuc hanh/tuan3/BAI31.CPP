#include"stdio.h"
#include"conio.h"
void main()
{
      int a,b;
      clrscr();
      printf("nhap vao thang:");
      scanf("%d",&a);
      printf("nhap vao nam:");
      scanf("%d",&b);
if((b%4==0&&b%100==0)||b%400==0)
{
                     if(a==1||a==3||a==5||a==7||a==8||a==10||a==12)
                     {
                     printf("\n nam %d do la nam nhuan co 366 ngay",b);
                     printf("\nthang %d co 31 ngay",a);
                     }
                     else 
                     {
                          if(a==2)
                          {
                                  printf("\n nam %d do la nam nhuan co 366 ngay",b);
                                  printf("\nthang co 29 ngay.");
                          }
                          else 
                          {
                               printf("\n nam %d do la nam nhuan co 366 ngay",b);
                               printf("\nthang co 30 ngay");          
                          }
                     }
}
else
{
                     if(a==1||a==3||a==5||a==7||a==8||a==10||a==12)
                     {
                     printf("\n nam do khong la nam nhuan co 365 ngay",b);
                     printf("\nthang %d co 31 ngay",a);
                     }
                     else 
                     {
                          if(a==2)
                          {
				  printf("\n nam do khong la nam nhuan co 365 ngay",b);
				  printf("\nthang co 28 ngay.");
			  }
			  else
			  {
			      printf("\n nam do khong la nam nhuan co 365 ngay",b);
			      printf("\nthang co 30 ngay");
			  }
		     }

}
getch();
}
