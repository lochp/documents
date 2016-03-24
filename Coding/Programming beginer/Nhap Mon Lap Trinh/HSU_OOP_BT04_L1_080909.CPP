#include<iostream.h>
#include<conio.h>
#include<stdio.h>

class Phao
{
	private:
		char *DonVi, *LoaiDan;
		float Size;
	public:
		Phao()
		{
			DonVi="ly";
			LoaiDan="dan pha va dan chong tang";
			Size=120;
		}
		void SetSize(float s){Size=s;}
		char *GetDonVi(){return DonVi;}
		char *GetLoaiDan(){return LoaiDan;}
		float GetSize(){return Size;}
};

class SungMay
{
	private:
		char *DonVi, *SatThuong;
		float Size;
		int TamSatThuong;
	public:
		SungMay()
		{
			DonVi="ly";
			SatThuong="bo binh va may bay";
			Size=12.7;
			TamSatThuong=4000;
		}
		void SetSize(float s)
		{
			Size=s;
		}
		void SetTamSatThuong(int t)
		{
			TamSatThuong=t;
		}
		char *GetDonVi()
		{
			return DonVi;
		}
		char *GetSatThuong()
		{
			return SatThuong;
		}
		float GetSize()
		{
			return Size;
		}
		int GetTamSatThuong()
		{
			return TamSatThuong;
		}
};

class DaiLien
{
	private:
		char *DonVi, *SatThuong;
		float Size;
		int TamSatThuong;
	public:
		DaiLien()
		{
			DonVi="ly";
			SatThuong="bo binh";
			Size=6.72;
			TamSatThuong=2000;
		}
		void SetSize(float s)
		{
			Size=s;
		}
		void SetTamSatThuong(int t)
		{
			TamSatThuong=t;
		}
		char *GetDonVi()
		{
			return DonVi;
		}
		char *GetSatThuong()
		{
			return SatThuong;
		}
		float GetSize()
		{
			return Size;
		}
		int GetTamSatThuong()
		{
			return TamSatThuong;
		}
};

class OngPhongLuu
{
	private:
		char *DonVi;
		float Size;
		int SoLuong;
	public:
		OngPhongLuu()
		{
			DonVi="ly";
			SoLuong=2;
			Size=81;
		}
		void SetSize(float s)
		{
			Size=s;
		}
		void SetSoLuong(int sl)
		{
			SoLuong=sl;
		}
		char *GetDonVi()
		{
			return DonVi;
		}
		int GetSoLuong()
		{
			return SoLuong;
		}
		float GetSize()
		{
			return Size;
		}
};

class T1
{
	protected:
		int SucChiuLuc;
		char *DonVi, *LoaiGiap;
	public:
		T1(int s=500, char *l="composite")
		{
			SucChiuLuc=s;
			DonVi="mm";
			LoaiGiap=l;
		}
		Phao phao;
		SungMay sungmay;
		DaiLien dailien;
		int GetSucChiuLuc()
		{
			return SucChiuLuc;
		}
		char *GetDonVi()
		{
			return DonVi;
		}
		char *GetLoaiGiap()
		{
			return LoaiGiap;
		}
};

class T11:public T1
{
	public:
		T11(int s=650, char *l="composite")
		{
			SucChiuLuc=s;
			DonVi="mm";
			LoaiGiap=l;
		}
};

class T2:public T11
{
	public:
		T2(int s=750, char *l="hon hop composite va cam ung kich no")
		{
			SucChiuLuc=s;
			DonVi="mm";
			LoaiGiap=l;
            phao.SetSize(125);
		}
		OngPhongLuu ongphongluu;
};

void main()
{
	clrscr();
	T1 t1;
	T11 t11;
    	T2 t2;
	cout << "\nThe he T1: duoc trang bi loai giap " << t1.GetLoaiGiap()  << " co suc chiu luc "
		 << t1.GetSucChiuLuc() << t1.GetDonVi();

	cout << "\n\n - Phao: "
		 << t1.phao.GetSize() << t1.phao.GetDonVi()
		 << ". Co the ban duoc cac loai dan: " << t1.phao.GetLoaiDan();

	cout << "\n\n - Sung may: "
		 << t1.sungmay.GetSize() << t1.sungmay.GetDonVi()
		 << ". Co the sat thuong: " << t1.sungmay.GetSatThuong()
		 << " o tam xa: " << t1.sungmay.GetTamSatThuong() << "m";

	cout << "\n\n - Dai lien: "
		 << t1.dailien.GetSize() << t1.dailien.GetDonVi()
		 << ". Co the sat thuong: " << t1.dailien.GetSatThuong()
		 << " o tam xa: " << t1.dailien.GetTamSatThuong() << "m";

	cout << "\n\nThe he T11: duoc trang bi loai giap " << t11.GetLoaiGiap()  << " co suc chiu luc "
		 << t11.GetSucChiuLuc() << t11.GetDonVi()
		 << "\n\n - Bao gon cac loai vu khi va suc cong pha nhu the he T1";

	cout << "\n\nThe he T2: duoc trang bi loai giap " << t2.GetLoaiGiap()  << " co suc chiu luc "
		 << t2.GetSucChiuLuc() << t2.GetDonVi();

	cout << "\n\n - Phao " << t11.phao.GetSize() << t11.phao.GetDonVi() << " duoc nang cap len "
		 << t2.phao.GetSize() << t2.phao.GetDonVi();

	cout << "\n\n - Duoc trang bi them " << t2.ongphongluu.GetSoLuong() << " Ong phong luu "
    	 << t2.ongphongluu.GetSize() << t2.ongphongluu.GetDonVi();

	getch();
}