#include <bits/stdc++.h>
using namespace std;
// bai2.3
class arr
{
    float *a;
    int n;
    float maxn,minn;
public:
    void nhap();
    void xuat();
    void maxmin();
};

void arr::nhap()
{
   
    cout<<"n= ";cin>>n;
    a=new float[n];
    for (int i = 0; i <n; i++)
    {
      cout<<"a["<<i<<"]= ";cin>>a[i];
    }
    
}

 void arr::xuat()
{
    for (int i = 0; i <n; i++)
    {
        cout<<a[i]<<"  ";
    }
    
}
void arr:: maxmin()
{
     maxn=a[0],minn=a[0];
    for (int i = 1; i <n; i++)
    {
        if(minn>a[i])minn=a[i];
        if(maxn<a[i])maxn=a[i];  
    }
    cout<<"\nmax = "<<maxn;
    cout<<"\nmin = "<<minn;
}
int main()
{
    arr x;
    x.nhap();
    cout<<"mang vua nhap la: ";
    x.xuat();
    x.maxmin();
    
    
    
    
    return 0;
}
