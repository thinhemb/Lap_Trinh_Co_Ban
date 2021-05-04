#include <bits/stdc++.h>
using namespace std;
class hang;
class  date
{
    int d,m,y;
    friend void xuat2017(hang *a,int n);
    friend class hang;
};
class  hang
{
    char mahang[20];
    char tenhang[20];
    date x;
public:
    void nhap(/* args */);
    void xuat();
    friend void xuat2017(hang *a,int n);
};

void hang:: nhap()
{
    cout<<"Ma hang: ";  fflush(stdin);  gets(mahang);
    cout<<"Ten hang: "; fflush(stdin);  gets(tenhang);
    cout<<"Ngay: ";cin>>x.d;
    cout<<"Thang: ";cin>>x.m;
    cout<<"Nam :";cin>>x.y;

}

void hang::xuat()
{
    cout<<setw(20)<<mahang<<setw(20)<<tenhang<<setw(20)<<x.d<<"-"<<x.m<<"-"<<x.y<<endl;
}
void xuat2017(hang *a,int n)
{
    for (int i = 0; i < n; i++)
    {
        if(a[i].x.y==2017)a[i].xuat();
    }
    
}


int main()
{
    hang *a;
    int n;
    cout<<"So mat hang la: ";
    cin>>n;
    a= new hang[n];
    for (int i = 0; i < n; i++)
    {
        a[i].nhap();
    }
    xuat2017(a,n);
    

    
    system("pause");
    return 0;
}
