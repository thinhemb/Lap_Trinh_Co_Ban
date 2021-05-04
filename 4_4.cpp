#include <bits/stdc++.h>
using namespace std;
class  PTB2
{
    float a,b,c;

public:
    void nhap(/* args */);
    void xuat();
    void giai();
     PTB2();
     PTB2(float a,float b, float c);
};

void PTB2::nhap(/* args */)
{
    cout<<"a=";cin>>a;
    cout<<"b=";cin>>b;
    cout<<"c=";cin>>c;
}

void PTB2::xuat()
{
    cout<<a<<"x^2 +"<<b<<"x + "<<c<<" =0"<<endl;
}
void PTB2:: giai()
{
    if(a==0)cout<<"\n Phuong trinh khong la phuong trinh bac 2"<<endl;
    else
    {
        float del=b*b-4*a*c;
        if(del<0)cout<<"Phuong trinh vo nghiem"<<endl;
        else if(del ==0)cout<<"Phuong trinh co nghiem kep x1= x2= "<<float(-b)/2/a;
        else 
        {
            cout<<"Phuong trinh co 2 nghiem rieng biet: \n";
            cout<<"\nx1= "<<(-b+sqrt(del))/2/a;
            cout<<"\nx1= "<<(-b-sqrt(del))/2/a;
        }
    }
    
}
PTB2::PTB2()
{
    a=b=c=0;
}
PTB2::PTB2(float x,float y,float z)
{
    a=x;b=y;c=z;
}
int main()
{
    PTB2 p;
    p.nhap();p.xuat();
    cout<<endl;
    p.giai();
    cout<<endl;
    PTB2 P(1,2,1);
   P.giai() ;cout<<endl;P.xuat();

    
   
    return 0;
}
