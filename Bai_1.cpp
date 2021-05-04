#include <iostream>
using namespace std;

void Nhap(int &n)
{
    do
    {
        cout<<"\n Nhap so nguyen n= ";
        cin>>n;
    } while (n<1);
    
}
void NhapMang(int *a,int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<"\n Nhap phan tu thu "<<i+1<<" la:";cin>>*(a+i);
    }
    
}
void HienThiMang(int *a,int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<"  "<<*(a+i);
    }
}
bool KTSNT(int n)
{
    if (n<2)
    {
        return 0;
    }
    
    for (int i = 2; i <= n/2; i++)
    {
        if (n%i==0)
        {
            return 0;
        }
        
    }
    return 1;
}
void SNT(int *a,int n)
{
    int s=0;
    for (int i = 0; i < n; i++)
    {
        if (KTSNT(*(a+i))==1)
        {
            s+=*(a+i);
        }
        
    }
    cout<<"\nTong so nguyen to trong mang la: S= "<<s;
}
void Tach(int *a,int n,int b[],int c[],int &count,int &count1)
{
    
    for (int i = 0; i < n; i++)
    {
        if(*(a+i)%2==0)
        {
            b[count++]=*(a+i);
            
        }
        else
        {
            c[count1++]=*(a+i);
        }
    }
    cout<<"\n Hai mang chan va le duoc tach la: ";
    cout<<"\n Mang chan la:";HienThiMang(b,count);cout<<endl;
    cout<<"\n Mang le la:";HienThiMang(c,count1);cout<<endl;
}
int main()
{
    int *a,n;
    a=new int[n];
    Nhap(n);
    NhapMang(a,n);
    cout<<" Mang vua nhap la: ";
    HienThiMang(a,n);
    SNT(a,n);
    int b[1000],c[1000],count=0,count1=0;
    Tach(a,n,b,c,count,count1);
    delete[] a;
    system("pause");
    return 0;
}
