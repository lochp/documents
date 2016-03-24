

//////// Danh sach dac
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

