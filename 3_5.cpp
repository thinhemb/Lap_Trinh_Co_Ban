#include<bits/stdc++.h>
using namespace std;
class SINHVIEN
{
	char MASV[30];
	char HOTEN[30];
	float TOAN, LI, HOA;
	public:
		void nhap();
		void xuat();
	 friend void SAPXEP(SINHVIEN *a, int n);
	
};
void SINHVIEN::nhap()
{
	cout<<"MA SINH VIEN: "; fflush(stdin); gets(MASV);
	cout<<"HO TEN: "; fflush(stdin); gets(HOTEN);
	cout<<"DIEM TOAN: "; cin>>TOAN;
	cout<<"DIEM LI: "; cin>>LI;
	cout<<"DIEM HOA: "; cin>>HOA;
}
void SINHVIEN::xuat()
{
	cout<<setw(20)<<MASV<<setw(20)<<HOTEN<<setw(20)<<TOAN<<setw(20)
	<<LI<<setw(20)<<HOA<<setw(20)<<TOAN+LI+HOA<<endl;
	
}
void SAPXEP(SINHVIEN *a, int n)
{
	
	for(int i=0; i<n; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			if(a[i].TOAN + a[i].LI + a[i].HOA > a[j].TOAN + a[j].LI + a[j].HOA)
			{
				SINHVIEN temp= a[i];
				a[i]= a[j];
				a[j]= temp;
			}
		}
	}
}
int main()
{
	SINHVIEN *a; int n;
	cout<<" NHAP DANH SACH SINH VIEN: "; cin>>n;
	a= new SINHVIEN[n];
	for(int i=0; i<n; i++)
    {
        a[i].nhap();
    }
		

	cout<<setw(20)<<"MA SINH VIEN"<<setw(20)<<"HO TEN"<<setw(20)
	<<"DIEM TOAN"<<setw(20)<<"DIEM LI"<<setw(20)<<"DIEM HOA"<<setw(20)<<"TONG"<<endl;
	SAPXEP(a,n);
	for (int i = 0; i < n; i++)
	{
		a[i].xuat();
	}
	return 0;
}
