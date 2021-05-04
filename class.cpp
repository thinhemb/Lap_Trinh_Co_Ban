#include <bits/stdc++.h>
using namespace std;
class SACH
{
    char Masach[20];
    char Tensach[25];
    int Sotrang;
    int NamXb;
public:
    void Nhap();
    void Xuat();
};
void SACH:: Nhap()
{
    cout<<" Ma Sach  ";cin>>Masach;
    cout<<" Tensach  ";fflush(stdin);gets(Tensach);
    cout<<" So trang ";cin>>Sotrang;
    cout<<" Nam xb   ";cin>>NamXb;
}
void SACH :: Xuat()
{
    cout<<setw(20)<<Masach<<setw(20)<<Tensach<<setw(10)<<Sotrang<<setw(5)<<NamXb<<endl;
}
int main()
{
    SACH *x;
    int n;
    cout<<"n= ";cin>>n;
    x= new SACH[n];
    for (int i = 0; i < n; i++)
    {
        x[i].Nhap();
    }
    cout<<setw(20)<<"Masach"<<setw(20)<<"Ten sach"<<setw(10)<<"So trang"<<setw(4)<<"Nam Xb"<<endl;
    for (int i = 0; i < n; i++)
    {
        x[i].Xuat();
    }
    return 0;
}
