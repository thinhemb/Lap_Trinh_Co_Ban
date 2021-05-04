#include<bits/stdc++.h>
using namespace std;
void NhapMang(int a[],int n)
{
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
}
void HienThiMang(int a[],int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
}
void Chen(int a[],int n,int x,int vitri)
{
    int i=n-1;
    while (vitri-2<i)
    {
        a[i+1]=a[i];
        i--;
    }
    a[vitri-1]=x;
}
int main()
{
    int n;
    cin>>n;
    int a[1000];
    NhapMang(a,n);
    int x,vitri;
    cin>>x;
    cin>>vitri;
    Chen(a,n,x,vitri);
    HienThiMang(a,n+1);
}