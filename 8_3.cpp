#include <bits/stdc++.h>
using namespace std;
class phieu;
class  nv
{
    char tennv[20];
    char cvu[20];
    
public:
    void nhap(/* args */);
    void xuat();
};

void nv::nhap(/* args */)
{
    cout<<"Nhan vien kiem ke: ";cin.getline(tennv,20);
    cout<<"Chuc vu: ";cin.getline(cvu,20);
    
}

void nv::xuat()
{
    cout<<"Nhan vien kiem ke: "<<tennv<<"          Chuc vu: "<<cvu<<endl;
    
}
class phong
{
    char phong[20];
    char maphong[20];
    char truongp[20];
public:
 void nhap(/* args */);
     void xuat();
};
 void phong:: nhap(/* args */)
{
    cout<<"Kiem ke tai phong: ";cin.getline(phong,20);
    cout<<"Ma phong: ";cin.getline(maphong,20);
    cout<<"Truong phong: ";cin.getline(truongp,20);
}
 void phong:: xuat()
{
    cout<<"Kiem ke tai phong: "<<phong<<"          Ma phong: "<<maphong<<endl;
    cout<<"Truong phong: "<<truongp<<endl;
}

class  taisan
{
    char tents[20];
    int sl;
    char tt[20];
    friend class phieu;
public:
    void nhap(/* args */);
    void xuat();
    friend void sua(phieu ab);
    friend void sap(phieu ab);
};

void taisan::nhap(/* args */)
{
    cout<<"Ten tai san:";fflush(stdin);cin.getline(tents,20);
    cout<<"So luong : ";cin>>sl;
    cout<<"Trang thai: ";fflush(stdin);cin.getline(tt,20);
}

void taisan::xuat()
{
    cout<<setw(20)<<tents<<setw(20)<<sl<<setw(20)<<tt<<endl;
}
class phieu
{
    char maph[20];
    char ngay[20];
    nv x;
    phong y;
    int n;
    taisan *a;
public:
    void nhap(/* args */);
    void xuat();
    friend void sua(phieu ab);
    friend void sap(phieu ab);
};

void phieu::nhap(/* args */)
{
    cout<<"Ma phieu: ";cin.getline(maph,20);
    cout<<"Ngay kiem ke: ";cin.getline(ngay,20);
    x.nhap();
    y.nhap();
    cout<<" so tai san: ";cin>>n;
    a=new taisan[n];
    for (int i = 0; i <n; i++)
    {
        a[i].nhap();
    }
    
}

void phieu::xuat()
{
    cout<<"                         PHIEU KIEM KE TAI SAN "<<endl;
    cout<<"Ma phieu: "<<maph<<"              Ngay kiem ke:   "<<ngay<<endl;
    x.xuat();
    y.xuat();
    cout<<endl;
    cout<<setw(20)<<"Ten tai san"<<setw(20)<<"So luong" <<setw(20)<<"Trang thai "<<endl;
    int s=0;

    for (int i = 0; i <n; i++)
    {
        a[i].xuat();
        s+=a[i].sl;
    } 
    cout<<endl;
    cout<<" So tai san da kiem ke: "<<n<<"                Tong so luong: "<<s<<endl; 
}
void sua(phieu ab)
{
    for (int i = 0; i <ab.n; i++)
    {
        if(strcmp(ab.a[i].tents,"may vi tinh")==0)
        {
            ab.a[i].sl=20;
        }
    }
    
}
void sap(phieu ab)
{
    for (int i = 0; i <ab.n; i++)
    {
        for (int j = i+1; j < ab.n; j++)
        {
            if(ab.a[i].sl>ab.a[j].sl)
            {
                taisan temp=ab.a[i];
                ab.a[i]=ab.a[j];
                ab.a[j]=temp;
            }
        }
        
    }
    
}
int main()
{
    phieu ab;
    ab.nhap();
    ab.xuat();
    cout<<endl;
    sua(ab);
    ab.xuat();
    cout<<endl;
    sap(ab);
    ab.xuat();
    return 0;
}
