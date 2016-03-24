void insertionsort(elem a[], int n, int (*comp)(elem, elem))
{
	int i, j, sz = sizeof(elem);
    elem x;
	for (i=1; i<n; i++)
	{
		memcpy(&x, &a[i], sz);
		j = i-1;
		while (j>=0 && comp(x, a[j])<0)
		{
			memcpy(&a[j+1], &a[j], sz);
			j--;
		}
		memcpy(&a[j+1], &x, sz);
	}
}
