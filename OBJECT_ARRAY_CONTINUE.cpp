#include <bits/stdc++.h>
using namespace std;
class Sach
{
    char masach[20];
    char tensach[30];
    char nxb[30];
    int sotrang;
    float giatien;
    public:
    void nhap();
    void xuat();
};
void Sach:: nhap()
{
    cout<<"Ma sach  :";fflush(stdin);gets(masach);
    cout<<"Ten sach :";fflush(stdin);gets(tensach);
    cout<<"Nha xb   :";fflush(stdin);gets(nxb);
    cout<<"So trang :";cin>>sotrang;
    cout<<"Gia tien :";cin>>giatien;
}
void Sach:: xuat()
{
    cout<<setw(10)<<masach<<setw(15)<<tensach<<setw(10)<<nxb<<setw(15)<<sotrang<<setw(20)<<giatien<<endl<<endl;
}
int main()
{
    int n;
    cout<<"n= ";cin>>n;
    Sach *x= new Sach[n];
    for (int i = 0; i < n; i++)
    {
        x[i].nhap();
    }
    for (int i = 0; i < n;i++)
    {
        x[i].xuat();
    }
    
    
    
    
    return 0;
}
