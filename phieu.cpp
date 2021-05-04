#include <bits/stdc++.h>
using namespace std;
class phieu;
class  sinhvien
{
 char masv[20];
 char tensv[20];
 char lop[10];
 char khoa[20];
public:
    void nhap(/* args */);
    void xuat();
    
};

void sinhvien::nhap(/* args */)
{
    cout<<"Ma sinh vien: ";cin.getline(masv,20);
    cout<<"Ten sinh vien :";cin.getline(tensv,20);
    cout<<"Lop :";cin.getline(lop,10);
    cout<<"Khoa: ";cin.getline(khoa,20);

}
void sinhvien::xuat()
{
    cout<<setw(20)<<" Ma sinh vien: "<<masv<<setw(20)<<"Ten sinh vien: "<<tensv<<endl<<setw(20)<<"Lop: "<<lop<<setw(20)<<"Khoa: "<<khoa<<endl;
}
class  mon
{
    char tenm[20];
    int sotrinh;
    float diem;
    friend class phieu;
public:
    void nhap(/* args */);
    void xuat();
    friend void Dtb(phieu ab);
    friend void sap(phieu ab);
};

void mon::nhap(/* args */)
{
    cout<<"Ten mon: ";fflush(stdin);cin.getline(tenm,20);
    cout<<"So trinh: ";cin>>sotrinh;
    cout<<"Diem: "; cin>>diem;
}
void mon::xuat()
{
    cout<<setw(20)<<tenm<<setw(20)<<sotrinh<<setw(20)<<diem<<endl;
}
class  phieu
{
     sinhvien x;
     int n;
     mon *a;
public:
    void nhap(/* args */);
    void xuat();
    friend void Dtb(phieu ab);
    friend void sap(phieu ab);
};

void phieu::nhap(/* args */)
{
    x.nhap();
    cout<<"So mon: ";cin>>n;
    a= new mon[n];
    for (int i = 0; i <n; i++)
    {
        a[i].nhap();
    }
    
}
void phieu::xuat()
{
    cout<<setw(20)<<"PHIEU BAO DIEM\n ";
    x.xuat();
    cout<<"Bang diem:\n ";
    cout<<setw(20)<<"Ten mon"<<setw(20)<<"So trinh"<<setw(20)<<"Diem"<<endl;
    for (int i = 0; i <n; i++)
    {
        a[i].xuat();
    }
    
}
void Dtb(phieu ab)
{
    float sumd=0,sumt=0;
    for (int i = 0; i <ab.n; i++)
    {
        sumd+=ab.a[i].sotrinh*ab.a[i].diem;
        sumt+=ab.a[i].sotrinh;
    }
    cout<<"Diem trung binh: "<<float(sumd)/sumt<<endl;
    
}
void sap(phieu ab)
{
    
    for (int i = 0; i <ab.n; i++)
    {
        
        if(strcmp(ab.a[i].tenm,"csdl")==0)
        {
            strcpy(ab.a[i].tenm,"htcsdl");
        }
    }
    
}
int main()
{
    phieu ab;
    ab.nhap();
    ab.xuat();
    Dtb(ab);
    sap(ab);
    ab.xuat();
    return 0;
}
