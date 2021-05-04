#include <bits/stdc++.h>
using namespace std;
// bai 2.1
class PTB2
{
    float a,b,c;

public:
    void nhap();
    void xuat();
    void giai();
};
 void PTB2::nhap()
{
    cout<<" nhap he so cua phuong trinh bac 2\n";
    cout<<"a=";cin>>a;
    cout<<"b=";cin>>b;
    cout<<"c="; cin>>c;
}
void PTB2::xuat()
{
    cout<<"phuong trinh "<<a<<"x^2 +"<<b<<"x +"<<c<<"= 0\n";
}
void PTB2:: giai()
{
    if(a==0)cout<<" phuong trinh khong la phuong trinh bac 2\n";
    else
    {
        float del=b*b-4*a*c;
        if(del<0)cout<<" phuonng trinh vo nghiem\n";
        else if(del==0)
        {
            cout<<" phuong trinh co nghiem kep x1= x2 = "<<float(-b)/2/a;
        }
        else
        {
            cout<<" phuong trinh co 2 nghiem phan biet \n";
            cout<<"x1= "<<(-b+sqrt(del))/2/a<<endl;
            cout<<"x2= "<<(-b-sqrt(del))/2/a<<endl;
        }
        
        
    }
}
int main()
{
    PTB2 x;
    x.nhap();
    x.xuat();
    x.giai();
    
    
    
    return 0;
}
