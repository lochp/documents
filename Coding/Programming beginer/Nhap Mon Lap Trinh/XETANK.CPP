#include<conio.h>
#include<iostream.h>
class phao
{
	private:
		float kthuoc;
	public:
		phao(){};
		phao(float);
		void set(float);
		float getset();
};
phao::phao(float a)
{
	kthuoc=a;
}
void phao::set(float a)
{
	kthuoc=a;
}
//--------tra ve gia tri phao---------
float phao:: getset()
{
	return kthuoc;
}
//--------- khoi tao class sung may------------------
class sungmay
{
	private:
		float kthuoc;
		double x;
	public: sungmay(){};
		sungmay(float b);
		void set(float);
		float getset();
};

sungmay:: sungmay(float b)
{       kthuoc=b;
	x=4000;
}
void sungmay::set(float b)
{
	kthuoc=b;

}
//-------tra ve gia tri-------
float sungmay:: getset()
{
	return kthuoc;
}
//----------------class dai lien----------------
class dailien
{
	private:
		float kthuoc;
		double y;
	public:
		dailien(){};
		dailien(float);
		void set(float);
		float getset();

};
dailien::dailien(float c)
{       kthuoc=c;
	y=2000;

}
void dailien:: set(float c)
{
	kthuoc=c;

}
// -------tra ve gia tri dai lien ---------
float dailien::getset()
{
	return kthuoc;
}
//----------------class T1-------------------
class t1:public phao,public dailien,public sungmay
{
	protected:
		float kthuoc;

	public:
		t1(){};
		t1(float);
		void set(float);
		float getset();
		void xuatT1();

};
t1::t1(float e)
{

	kthuoc=e;
}
void t1::set(float e)
{
	kthuoc=e;
}
float t1::getset()
{
	return kthuoc;
}
void t1::xuatT1()
{       phao p;
	dailien d;
	sungmay s;
	p.set(120) ;
	d.set(6.27) ;
	s.set(12.7);


	cout<<"\n+ Phao nong:"<<p.getset()<<" ly\n";
	cout<<"\n      -Ban dc cac loai dan pha va dan chong tang loi cung xuyen giap";
	cout<<"\n\n+ Dailien :"<<d.getset()<<" ly "<<endl;
	cout<<"\n      -Tieu diet bo binh tam khoang 2000m";
	cout<<"\n\n+ Sungmay :"<<s.getset()<<"ly"<<endl;
	cout<<"\n      -Tieu diet bo binh va may bay dich trong khoang 4000m";

}
//-----------------class T11------------------------
class T11:public t1
{
	public:
		T11(){};
		void xuatT11();

};
void T11:: xuatT11()
{
	t1 t;
	t.xuatT1();
	t.set(650);
	cout<<"\n\n+ Giap T11 "<<t.getset()<<"mm\n";
	cout<<"\n      -Dc nag cap tu T1 de tang kha nag chiu dung cho xe tang T11"<<endl;
}
//-------------- class ong phong luu phao----------
class ongphao
{
	protected:
		float kthuoc;
		int n;
	public:
		ongphao(){};
		ongphao(int,float);
		void set(int,float);
		float getset();
		int getn();

};
ongphao::ongphao(int i,float f)
{
	n=i;
	kthuoc=f;
}
void ongphao::set(int i,float f)
{

	n=i;
	kthuoc=f;
}
float ongphao::getset()
{
	return kthuoc;
}
int ongphao::getn()
{
	return n ;
}

//--------------class T2----------
class T2: public T11
{
	public:
		T2(){};
		void xuat();

};
void T2:: xuat()
{       ongphao o;
	phao p;
	dailien d;
	sungmay s;
	t1 t;
	o.set(2,80);
	t.set(750);

	p.set(125);
	d.set(6.27);
	s.set(12.7);
	cout<<"\n+ Phao nong" <<p.getset()<<" ly\n";
	cout<<"\n      -Ban dc cac loai dan pha va dan chong tang loi cung xuyen giap";
	cout<<"\n\n+ Dailien :"<<d.getset()<<" ly "<<endl;
	cout<<"\n      -Tieu diet bo binh tam khoang 2000m";
	cout<<"\n\n+ Sungmay :"<<s.getset()<<"ly"<<endl;
	cout<<"\n      -Tieu diet bo binh va may bay dich trong khoang 4000m\n";

	cout<<"\n+ Giap "<<t.getset()<<"mm\n";
        cout<<"\n      -Dc nag cap tu T11 de tang kha nag chiu dung cho T2\n";            
	cout<<"\n+ "<<o.getn()<<" Ong phong luu phao "<<o.getset()<<" ly"<<endl;
        
}
void main()
{
	clrscr();
	int menu,kt;

	t1 t;
	T11 u;
	T2 m;
	do{
	cout<<"           GAME GIA TUONG CHIEN TRANH"<<endl;
	cout<<"\n\n                          MENU    "<<endl;
	cout<<" 0--thoat"<<endl;

	cout<<" 1--the he xe tank T1:"<<endl;
	cout<<" 2--the he xe tank T11 da dc nang cap tu xe tank T1:"<<endl;
	cout<<" 3--the he xe tank T2 dc nang cap tu T11"<<endl;

	cout<<"\n\nnhap chuc nang vao:";
	cin>>menu;
	cout<<endl;
	switch(menu)

	{
		case 1: clrscr();
			cout<<" -----The he xe tank T1 duoc trang bi vu khi nhu sau:"<<endl;
			t.xuatT1();
			t.set(500);
			kt=1 ;
			cout<<"\n\n+ Giap composite chiu dc suc cong pha "<<t.getset()<<" mm"<<endl;break;
		case 2: clrscr();
			if(kt==1)
			{	cout<<" -----The he xe tank T11:"<<endl;
				u.xuatT11();
			}
			else cout<<"nhap lai chuc nang thu 1:";
			break;
		case 3:clrscr();
		if(kt==1)
		{	cout<<" -----The he xe tank T2:"<<endl;
			m.xuat();break;
		}
		else cout<<"Ban pai chon chuc nang thu 1:";
                break;
	 }
	 }while(menu);


	getch();
}