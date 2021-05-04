#include<iostream>
using namespace std;
class truong
{
protected:
	char matr[20];
	char tent[20];
	char dc[20];
public:
	void nhap();
	void xuat();
};
void truong::nhap()
{
	cout<<"Ma truong: ";fflush(stdin);gets(matr);
	cout<<"Ten truong: ";fflush(stdin);gets(tent);
	cout<<"Dia chi: ";fflush(stdin);gets(dc);

}
void truong ::xuat()
{
	cout<<"Ma truong: "<<matr<<endl;
	cout<<"Ten truong: "<<tent<<endl;
	cout<<"Dia chi: "<<dc<<endl;

}
class khoa
{
	char mak[20];
	char tenk[20];
	char trk[20];
	friend class truongdh;
};
class ban
{
	char mab[20];
	char tenb[20];
	char ntl[20];
	friend class truongdh;
};
class truongdh:public truong
{
	int n;
	khoa *a;
	int m;
	ban *b;
public:
	void nhap();
	void xuat();
};
void truongdh::nhap()
{
	truong::nhap();
	cout<<"n=";cin>>n;
	a=new khoa[n];
	for(int i=0;i<n;i++)
	{
		cout<<"Ma khoa:";fflush(stdin);gets(a[i].mak);
		cout<<"Ten khoa:";fflush(stdin);gets(a[i].tenk);
		cout<<"truong khoa:";fflush(stdin);gets(a[i].trk);
	}
	cout<<"m=";cin>>m;
	b=new ban[m];
	for(int i=0;i<m;i++)
	{
		cout<<"Ma ban:";fflush(stdin);gets(b[i].mab);
		cout<<"Ten khoa:";fflush(stdin);gets(b[i].tenb);
		cout<<"Ngay thanh lap:";fflush(stdin);gets(b[i].ntl);
	}
}
void truongdh::xuat()
{
	truong::xuat();
	for(int i=0;i<n;i++)
	{
		cout<<"Ma khoa:"<<a[i].mak<<endl;
		cout<<"Ten khoa:"<<a[i].tenk<<endl;
		cout<<"truong khoa:"<<a[i].trk<<endl;
	}
	for(int i=0;i<m;i++)
	{
		cout<<"Ma ban:"<<b[i].mab<<endl;
		cout<<"Ten khoa:"<<b[i].tenb<<endl;
		cout<<"Ngay thanh lap:"<<b[i].ntl<<endl;
	}
}

int main()
{
	truongdh k;
	k.nhap();
	k.xuat();

	return 0;
}
