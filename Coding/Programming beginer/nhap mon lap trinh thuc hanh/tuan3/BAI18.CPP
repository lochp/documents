#include"stdio.h"
#include"conio.h"
void giaiPTbacnhat(float a, float b)
{
if (a==0)
      {
	 if(b==0)

	printf("PT co vo so nghiem ");

		else

	printf("PT vo nghiem ");
	}
else
	printf("PT co 1 nghiem duy nhat x= %.2f",-b/a);
}
void main()
{
  clrscr();
  float a,b;
  printf("nhap vao gia tri cua a:");
  scanf("%f",&a);
  printf("nhap vao gia tri cua b:");
  scanf("%f",&b);
  giaiPTbacnhat(a,b);
  getch();


}