#include <stdio.h>
#define MAX 100
typedef int elem;
#include "list.cpp"


void print(list l)
{
	int i, x, n=no_item(l);

	for (i=0; i<n; i++)
	{
		getdata(l, i, x);
		printf("%4d",x);
    }
}

void main()
{
	list l;
	int x;
	init(l);
	printf("\nNhap day:");
	do {
		scanf("%d", &x);
		if (x>0)
			insert(l, 0, x);
	} while (x>0);
	printf("\nDay nhap:");
	print(l);
}





















