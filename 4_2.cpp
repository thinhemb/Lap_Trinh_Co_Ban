#include <bits/stdc++.h>
using namespace std;
class hang;
class  NSX
{
    char mansx[20];
    char tennsx[20];
    char dcnsx[20];
    friend class hang;
};
class hang
{
    char mahang[20];
    char tenhang[20];
    float dongia;
    float trongluong;
     NSX x;
public:
    void nhap(/* args */);
    void xuat();
};

void hang::nhap(/* args */)
{
    cout<<"Ma hang:";   fflush(stdin);gets(mahang);
    cout<<"Tenhang:";   fflush(stdin);gets(tenhang);
    cout<<"Don gia:";               cin>>dongia;
    cout<<"Trong luong: ";          cin>>trongluong;
    cout<<"Ma nsx:";    fflush(stdin);gets(x.mansx);
    cout<<"Ten nsx:";   fflush(stdin);gets(x.tennsx);
    cout<<"Dc nsx:";    fflush(stdin);gets(x.dcnsx);
    
}

void hang::xuat()
{
    cout<<setw(20)<<mahang<<setw(20)<<tenhang<<setw(20)<<dongia<<setw(20)<<trongluong;
    cout<<setw(20)<<x.mansx<<setw(20)<<x.tennsx<<setw(20)<<x.dcnsx<<endl;
}

int main()
{
    hang a;
    a.nhap();
    cout<<setw(20)<<"Ma hang"<<setw(20)<<"Ten hang"<<setw(20)<<"Don gia"<<setw(20)<<"Trong luong"<<setw(20)<<"Ma nsx"<<setw(20)<<"Ten nsx"<<setw(20)<<" DC NSX"<<endl;
    a.xuat();
    
    
    return 0;
}
