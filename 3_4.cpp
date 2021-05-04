    #include <bits/stdc++.h>
    using namespace std;
    class  may
    {
        char mamay[20];
        char kieumay[20];
        char tinhtrang[20];
    public:
        void nhap();
        void xuat();
    };
    
    void may::nhap()
    {
        cout<<"\n Ma may:";fflush(stdin);gets(mamay);
        cout<<"\n Kieu may:";fflush(stdin);gets(kieumay);
        cout<<"\n Tinh trang: ";fflush(stdin);gets(tinhtrang);
    }
    void may::xuat()
    {
        cout<<setw(20)<<mamay<<setw(20)<<kieumay<<setw(20)<<tinhtrang<<endl;
    }
    class quanly
    {
        char maql[20];
        char tenql[20];
    public:
        void nhap();
        void xuat();
    };
    void quanly::nhap()
    {
       cout<<"\n Ma quan ly: ";fflush(stdin);gets(maql);
       cout<<"\n Ten quan ly:";fflush(stdin);gets(tenql);

    }
    
    void quanly::xuat()
    {
        cout<<setw(20)<<"Ma ql"<<setw(20)<<"Ten ql"<<endl;
         cout<<setw(20)<<maql<<setw(20)<<tenql<<endl;
    }
    class  Phongmay
    {
        char maphong[20];
        char tenphong[20];
        double dt;
        int n;
        quanly x;
        may *a;
    public:
        void nhap(/* args */);
        void xuat();
    };
    
    void Phongmay::nhap(/* args */)
    {
        cout<<"\n Ma phong: ";fflush(stdin);gets(maphong);
        cout<<"\n Ten phong: ";fflush(stdin);gets(tenphong);
        cout<<"\n dien tich: ";cin>>dt;
        x.nhap();
        cout<<"\n Nhap so may: ";cin>>n;
        a=new may[n];
        
        for (int i = 0; i < n; i++)
        {
            a[i].nhap();
        }
        
    }
    
    void Phongmay::xuat()
    {
        cout<<setw(20)<<"Ma phong"<<setw(20)<<"Ten phong"<<setw(20)<<"Dien tich"<<endl;
        cout<<endl;
        cout<<setw(20)<<maphong<<setw(20)<<tenphong<<setw(10)<<dt<<endl;
        x.xuat();
        cout<<endl;
        cout<<setw(20)<<"Ma may"<<setw(20)<<"Kieu may"<<setw(20)<<"Tinh trang"<<endl;
        for (int i = 0; i < n; i++)
        {
            a[i].xuat();
        }
        
    }
    
    int main()
    {
        Phongmay b;
        b.nhap();
        b.xuat();
        
        return 0;
    }
    