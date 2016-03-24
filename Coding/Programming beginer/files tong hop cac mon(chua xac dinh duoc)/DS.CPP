#include<stdio.h>
#include<conio.h>
#define MAX 100
typedef int elem;
/////// Danh sach dac
typedef struct {
			elem a[MAX];
			int n;
		} list;

void init(list &l)
{
	l.n = 0;
}
void insert(list &l, int pos, elem x)
{
	int i;
	if (pos>l.n) pos=l.n;
	for (i=l.n; i>pos; i--)
		l.a[i] = l.a[i-1];
	l.a[i]=x;
	l.n++;
}
int no_item(list l)
{
	return l.n;
}
int getdata(list l, int pos, elem &x)
{
	if (pos<0 || pos>=l.n) return 0;
	x = l.a[pos];
	return 1;
}
void del(list &l)
{
	  int i,k;
	  printf("\n\nNhap vi tri can xoa: ");
	  scanf("%d",&k);
	  for(int i=k;i<l.n;i++)
	    {
				 l.a[i]=l.a[i+1];
       }
	 l.n--;
}

void search(list l)
{
	  int i, k, t;
	  printf("\n\nNhap pt can tim: ");
	  scanf("%d",&k);
	  for(i=0;i<l.n-1;i++)
	  {
		  if(l.a[i]==k)
		  printf("\n\nPt duoc tim o vt: %3d",i+1);
		  t++;
		  }
		  if(t==l.n)
		  printf("Khong co pt %d can tim.",k);
}
void print(list l)
{
	int i, x, n=no_item(l);

	for (i=0; i<n; i++)
	{
		getdata(l, i, x);
		printf("%4d",x);
   }
}
main()
{
	list l;
	int x;
	init(l);
	printf("\nNhap day:");
	do {
		scanf("%d", &x);
		if (x>0)
			insert(l, 6, x);
	} while (x>0);
	printf("\nDay nhap:");
	print(l);
	del(l);
	printf("\nDs sau khi xoa: ");
	print(l);
	search(l);
	getch();
}





















