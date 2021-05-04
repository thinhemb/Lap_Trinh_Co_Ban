#include <bits/stdc++.h>
using namespace std;
class phieu;
class  ncc
{
 char mancc[20];
 char tenncc[20];
 char dc[20];
 char sdt[20];
public:
    void nhap(/* args */);
    void xuat();
};

void ncc::nhap(/* args */)
{
    cout<<" Ma NCC: ";cin.getline(mancc,20);
    cout<<" Ten NCC: ";cin.getline(tenncc,20);
    cout<<" Dia chi: ";cin.getline(dc,20);
    cout<<" Sdt: ";cin.getline(sdt,20);
}
void ncc::xuat()
{
    cout<<"Ma nha cung cap:   "<<mancc<<setw(20)<<"       Ten nha cung cap: "<<tenncc<<endl;
    cout<<"Dia chi:           "<<dc<<setw(20)<<" SDT:"<<sdt<<endl;
}
class sp
{
    char masp[20];
    char tensp[20];
    int sl;
    int dg;
    friend class phieu;
public:
    void nhap(/* args */);
    void xuat();
     friend void loc(phieu y);
     friend void sap(phieu y);
};

void sp::nhap(/* args */)
{
    cout<<"Ma sp: ";fflush(stdin);cin.getline(masp,20);
    cout<<"Tensp: ";cin.getline(tensp,20);
    cout<<"So luong: ";cin>>sl;
    cout<<"Don gia: ";cin>>dg;
}

void sp::xuat()
{
    cout<<setw(10)<<masp<<setw(20)<<tensp<<setw(20)<<sl<<setw(20)<<dg<<setw(20)<<sl*dg<<endl;
}
class phieu
{
    char maph[20];
    char nl[20];
    ncc x;
    int n;
    sp *a;
    friend class sp;
public:
    void nhap(/* args */);
    void xuat();
    friend void loc(phieu y);
    friend void sap(phieu y);
};

void phieu::nhap(/* args */)
{
    cout<<"Ma phieu: ";cin.getline(maph,20);
    cout<<"Ngay lap: ";cin.getline(nl,20);
    x.nhap();
    cout<<"So luong sp: ";cin>>n;
    a=new sp[n];
    for (int i = 0; i < n; i++)
    {
        a[i].nhap();
    }
    
}

void phieu::xuat()
{   cout<<"                PHIEU NHAP VAN PHONG KHAM "<<endl;
    cout<<"Ma phieu:       "<<maph<<setw(20)<<"         Ngay lap:"<<nl<<endl;
    x.xuat();
    int sumn=0;
    for (int i = 0; i < n; i++)
    {
        a[i].xuat();
        sumn+=a[i].sl*a[i].dg;
    }
    cout<<" Tong  "<<sumn<<endl;
    cout<<"           Hieu truong             Phong tai chinh            Nguoi lap "<<endl; 
    
}
void loc(phieu y)
{
    int cnt=0;
    for (int i = 0; i < y.n; i++)
    {
       if(y.a[i].sl<80)cnt++;
    }
    cout<<" So luong nho hon 80 co :"<<cnt<<endl;
}
void sap(phieu y)
{
    for (int i = 0; i < y.n; i++)
    {
        for (int j =i+1; j <y.n; j++)
        {
           if(y.a[i].dg>y.a[j].dg)
           {
               sp temp=y.a[i];
                y.a[i]=y.a[j];
                y.a[j]=temp;
           }
        }
        
    }
    
}
int main()
{
    phieu y;
    y.nhap();
    y.xuat();
    loc(y);
    sap(y);
    y.xuat();
   
    return 0;
}
