#include <bits/stdc++.h>
using namespace std;
class  ncc
{
    char mancc[20];
    char tenncc[20];
    char dc[40];
public:
    void nhap(/* args */);
    void xuat();
};

void ncc::nhap(/* args */)
{
    cout<<"Ma ncc: ";cin.getline(mancc,20);
    cout<<"Ten ncc: ";cin.getline(tenncc,20);
    cout<<"Dia chi: ";cin.getline(dc,50);
}

void ncc::xuat()
{
    cout<<"Ma NCC:  ";cout<<mancc<<"           Ten NCC: "<<tenncc<<endl;
    cout<<"Dia chi: "<<dc<<endl;
}

class hang
{
    char tenhang[20];
    float dg;
    int sl;
    friend class phieu;
public:
    void nhap(/* args */);
    void xuat();
};

void hang::nhap(/* args */)
{
    cout<<"Ten hang: ";fflush(stdin);cin.getline(tenhang,20);
    cout<<"Don gia: ";cin>>dg;
    cout<<"So luong: ";cin>>sl;
}
void hang::xuat()
{
    cout<<setw(20)<<tenhang<<setw(20)<<dg<<setw(20)<<sl<<setw(20)<<dg*sl<<endl;
}
class phieu
{
    char maph[20];
    char nl[20];
    ncc x;
    int n;
    hang *a;
public:
    void nhap(/* args */);
    void xuat();
};

void phieu::nhap(/* args */)
{
    cout<<"Ma phieu: ";cin.getline(maph,20);
    cout<<"Ngay lap: ";cin.getline(nl,20);
    x.nhap();
    cout<<"So luong hang: ";cin>>n;
    a=new hang[n];
    for (int i = 0; i <n; i++)
    {
        a[i].nhap();
    }
    
}

void phieu::xuat()
{
    cout<<"                 PHIEU NHAP HANG "<<endl;
    cout<<"Ma NCC:  "<<maph<<"          Ngay lap:    "<<nl<<endl;
    x.xuat();
    cout<<endl;
    float sumn=0;
    cout<<setw(20)<<"Ten hang"<<setw(20)<<"Don gia"<<setw(20)<<"So luong"<<setw(20)<<"Thanh tien"<<endl;
    for (int i = 0; i<n; i++)
    {
        a[i].xuat();
        sumn+=a[i].sl*a[i].dg;
    }
    cout<<endl;
    cout<<" Tong: "<<sumn<<endl;
}

int main()
{
    phieu ab;
    ab.nhap();
    ab.xuat();
    
    
    return 0;
}
