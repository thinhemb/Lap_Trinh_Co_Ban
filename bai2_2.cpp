#include <bits/stdc++.h>
using namespace std;
// bai 2.1
class arr
{
    int *a;
    int n;
public:
    void nhap();
    void xuat();
    void sx();
};

void arr::nhap()
{
   
    cout<<"n= ";cin>>n;
    a=new int[n];
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
void arr:: sx()
{
    for (int i = 0; i <n; i++)
    {
        for (int j = i+1; j <n; j++)
        {
            if(a[i]>a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
        
    }
    
}
int main()
{
    arr x;
    x.nhap();
    cout<<"mang vua nhap la: ";
    x.xuat();
    x.sx();
    cout<<"\nmang sau khi sap xep la :";
    x.xuat();
    
    
    return 0;
}
