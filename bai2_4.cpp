#include <bits/stdc++.h>
using namespace std;
//bai 2.4
class doanhn
{
   char Tendn[50];
   char diatri[199];
   int sonv;
   double doanhthu;

public:
    void  nhap();
   void xuat();
};

void doanhn::nhap()
{
    cout<<"Ten doanh nghiep :"; fflush(stdin); gets(Tendn);
    cout<<"Dia chi doanh nghiep :";fflush(stdin);gets(diatri);
    cout<<"So nhan vien :";cin>>sonv;
    cout<<"Doanh thu: ";cin>>doanhthu;
}

 void doanhn::xuat()
{
    cout<<"Ten doanh nghiep :"<< Tendn<<endl;
    cout<<"Dia chi doanh nghiep :"<<diatri<<endl;
    cout<<"So nhan vien :"<<sonv<<endl;
    cout<<"Doanh thu: "<<doanhthu<<endl;
}

int main()
{
    int n;
    cout<<"n=";
    cin>>n;
    doanhn *a=new doanhn[n];
    for (int i = 0; i < n; i++)
    {
        a->nhap();
    }
    cout<<"\n\nDoanh nghiep vua nhap la: \n";
    for (int i = 0; i <n; i++)
    {
        a->xuat();
        cout<<endl;
    }
    
    
    
    
    return 0;
}
