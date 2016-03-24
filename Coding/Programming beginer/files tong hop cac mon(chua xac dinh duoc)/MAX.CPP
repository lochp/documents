#include <stdio.h>

int max(int a[], int n)
{
	int i, m;
	m = a[0];
	for (i=1; i<n; i++)
		if (m<a[i])
			m = a[i];
	return m;
}

void main()
{
	int b[3][2] = {	{ 9, 3},
					{ 7,12},
					{4, 10}};
	int c[10]={119, 118, 3, 34, 12, 21, 8, 4, 7, 2};
	printf("\nMax mang b: %d", max(b[0], 6));
	printf("\nMax mang c: %d", max(c, 10));
	printf("\nMax : %d", max(c+1, 5));
}

