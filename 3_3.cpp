#include <bits/stdc++.h>
using namespace std;
class  Hang
{
    char mahang[20];
    char tenhang[20];
    double dongia;
public:
    void nhap(/* args */);
    void xuat();
};

void Hang::nhap(/* args */)
{
    cout<<"\n Ma hang :";fflush(stdin);gets(mahang);
    cout<<"\n Ten hang:";fflush(stdin);gets(tenhang);
    cout<<"\n Don gia :";cin>>dongia;
}

void Hang::xuat()
{
    cout<<setw(20)<<mahang<<setw(20)<<tenhang<<setw(20)<<dongia<<endl;
}
class Phieu
{
    char maphieu[20];
    int n;
    Hang *x;
public:
    void nhap(/* args */);
    void xuat();
};

void Phieu::nhap(/* args */)
{
    cout<<"\n Ma phieu :";fflush(stdin);gets(maphieu);
    cout<<"\n so mat hang: ";cin>>n;
    x=new Hang[n];
    for (int i = 0; i <n; i++)
    {
        x[i].nhap();
    }
    
}

void Phieu::xuat()
{
    cout<<setw(20)<<maphieu<<endl;
    cout<<setw(20)<<"MA HANG"<<setw(20)<<"TEN HANG"<<setw(20)<<"DONGIA"<<endl;
    for (int i = 0; i <n; i++)
    {
        x[i].xuat();
    }
    
}

int main()
{
    Phieu a;
    a.nhap();
    cout<<endl<<setw(30)<<"PHIEU NHAP HANG"<<endl;
    a.xuat();
    
    
    return 0;
}
