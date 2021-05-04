#include <bits/stdc++.h>
using namespace std;
class Hang
{
    char mahang[10];
    char tenhang[20];
    float dongia;
    int soluong;
    public:
    void xuat();
    void nhap();
};
void Hang:: xuat()
{
    cout<<setw(20)<<mahang<<setw(20)<<tenhang<<setw(20)<<dongia<<setw(20)<<soluong<<endl<<endl;
}
void Hang:: nhap()
{
    cout<<"Ma hang  :";fflush(stdin);gets(mahang);
    cout<<"Ten hang :";fflush(stdin);gets(tenhang);
    cout<<"Don gia  :";cin>>dongia;
    cout<<"So luong :";cin>>soluong;
}
int main()
{
    int n;
    cout<<" n= ";
    cin>>n;
    Hang *x=new Hang[n];
    for (int i = 0; i < n; i++)
    {
        x[i].nhap();
    }
    for (int i = 0; i < n; i++)
    {
        x[i].xuat();
    }
    
    
    
    return 0;
}
