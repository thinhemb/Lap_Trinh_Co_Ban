#include <bits/stdc++.h>
using namespace std;
class NSX
{
    char mansx[20];
   char tennsx[20];
   char dcnsx[20];
public:
     void nhap();
     void xuat();
};
void  NSX::nhap()
{
    cout<<"\nMa nha sx :";fflush(stdin);gets(mansx);
    cout<<"\nTen nha sx: ";fflush(stdin);gets(tennsx);
    cout<<"\nDia chi nha sx :";fflush(stdin);gets(dcnsx);
}
void NSX ::xuat()
{
    cout<<setw(20)<<mansx;
    cout<<setw(20)<<tennsx;
    cout<<setw(20)<<dcnsx;
}
class  Hang
{
    char mahang[20];
    char tenhang[20];
    NSX sx;
public:
    void nhap();
    void xuat();
};

void Hang::nhap()
{
    cout<<"\nMa hang :";fflush(stdin);gets(mahang);
    cout<<"\nTen hang:";fflush(stdin);gets(tenhang);
    sx.nhap();
}
void Hang::xuat()
{
    cout<<setw(20)<<mahang<<setw(20)<<tenhang;
    sx.xuat();
}
int main()
{
    Hang x;
    x.nhap();
    x.xuat();
    
    
    return 0;
}
