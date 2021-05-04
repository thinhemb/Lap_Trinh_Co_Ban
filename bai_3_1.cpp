#include <bits/stdc++.h>
using namespace std;
class date
{

   int d,m,y;    
public:
    void nhap(/* args */);
    void xuat();
};
void date::nhap(/* args */)
{
    cout<<"Day=";cin>>d;
    cout<<"Month=";cin>>m;
    cout<<"Year=";cin>>y;
}
void date:: xuat()
{
    cout<<setw(20)<<d<<"/"<<m<<"/"<<y<<endl;
}
class nhansu
{
    char mans[12];
    char hoten[50];
    date ns;
public:
 void nhap();
  void xuat();
};
 void nhansu:: nhap()
{
    cout<<"ma nhan su :";cin>>mans;
    cout<<"ho ten :";fflush(stdin);gets(hoten);
    ns.nhap();
}
void nhansu:: xuat()
{
    cout<<endl<<setw(20)<<mans<<setw(20)<<hoten;
    ns.xuat();
}
int main()
{
    nhansu x;
    x.nhap();
    cout<<"nhan xu vua nhap la:";x.xuat();
    
    
    return 0;
}
