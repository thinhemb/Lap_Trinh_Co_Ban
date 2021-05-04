#include<bits/stdc++.h>
using   namespace std;
void NhapSoNguyenduong(int *n)
{
    do
    {
        cout<<"nhap so nguyen duong 0 < n < 50, n= ";cin>>*n;
    } while (*n < 0 || *n >50);
}
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
int main()
{
    int n,a[51];
    NhapSoNguyenduong(&n);
    cout<<"nhap mang co "<<n<<" nhap tu ";
    NhapMang(a,n);
    cout<<"mang vua nhap la: ";
    HienThiMang(a,n);
}
