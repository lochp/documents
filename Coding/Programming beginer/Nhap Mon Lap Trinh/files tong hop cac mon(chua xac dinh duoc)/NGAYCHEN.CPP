//xay dung lop data voi cac bien thanh phan,ngay,thang,nam va 1 bien static count;de dem so doi tuong dc tao cua lop,lop co cac chuc nang sau;ham khoi tao de khoi tao cac gia tri cho cac thuoc tinh:ngay=1.thang=1,nam=2800 va cap nhat bien count;viet phuong thuc tinh gia tri count de lay vao gia tri cua bien count;ham reset(int,int,int) cap nhat cac gia tri cho cac thuoc tinh;

#include<conio.h>
#include<stdio.h>
#include<iostream.h>
class date
{
	private:
		int ngay,thang,nam;
		static int count;
	public:
		date();
		static int getcount();
		void print();
		void reset(int,int,int);
};
int date::count=0;
 date::date()
 {
	ngay=1;
	thang=1;
	nam=2000;
	count++;
 }
int date::getcount()
{
	return count;
}
void date::print()
{
	cout<<ngay<<"/";
	cout<<thang<<"/";
	cout<<nam<<endl;
}
void date::reset(int x,int y,int z)
{
	ngay=x;
	thang=y;
	nam=z;

}
void main()
{
	clrscr();
	date t, k;
	t.print();
        cout<<"\n";
	t.reset(2,2,2002);
	t.print();
	k.reset(3,3,2003);
        k.print();
	cout<<date::getcount();
	getch();


}
