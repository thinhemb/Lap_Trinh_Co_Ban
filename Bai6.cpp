#include<bits/stdc++.h>
using   namespace std;
void NhapMang(int a[],int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<"\n phan tu thu "<<i+1<<" la: ";cin>>a[i];
    } 
}
void HienThiMang(int a[],int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
}
void SapXepTangDan(int a[],int n)
{
    
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (a[i]>a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }   
    }
}
void SapXepGiamDan(int a[],int n)
{
    
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (a[i]<a[j])
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
    int n;
    cout<<"nhap so phan tu cua mang n=";cin>>n;
    int a[n];
    NhapMang(a,n);
    cout<<"mang vua nhap la :";
    HienThiMang(a,n);
    SapXepTangDan(a,n);
    cout<<"\nmang sau khi sap xep la: ";
    HienThiMang(a,n);
    SapXepGiamDan(a,n);
    cout<<"\nmang sau khi sap xep la: ";
    HienThiMang(a,n);
}