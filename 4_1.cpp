#include <bits/stdc++.h>
using namespace std;
class  sinhvien
{
    char masv[20];
    char hoten[20];
    float toan,ly,hoa;

public:
    void nhap();
    void xuat();
    friend void sap(sinhvien *a,int n);
};

void sinhvien::nhap(/* args */)
{
    cout<<"Ma sv:";fflush(stdin);gets(masv);
    cout<<"Ho ten:";fflush(stdin);gets(hoten);
    cout<<"Diem toan: ";cin>>toan;
    cout<<"Diem ly: ";cin>>ly;
    cout<<"Diem hoa:";cin>>hoa;
}
void sinhvien::xuat()
{
    cout<<setw(20)<<masv<<setw(20)<<hoten<<setw(20)<<toan<<setw(20)<<ly<<setw(20)<<hoa<<setw(20)<< toan+ly+hoa<<endl;
}
void sap(sinhvien *a,int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j <n; j++)
        {
            if(a[i].toan+a[i].ly+a[i].hoa>a[j].hoa+a[j].toan+a[j].ly)
            {
                sinhvien temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
        
    }
    
}
int main()
{
    sinhvien *a;
    int n;
    cout<<"\n Nhap so hoc sinh :";cin>>n;
    a=new sinhvien[n];
    for (int i = 0; i <n; i++)
    {
        a[i].nhap();
    }
    sap(a,n);
    for (int i = 0; i <n; i++)
    {
        a[i].xuat();
    }
    

    
    
    return 0;
}
