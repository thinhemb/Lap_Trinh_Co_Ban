#include<bits/stdc++.h>
using namespace std;
void NhapMang(int a[],int n)
{
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
}
void Xoa(int a[],int n,int vitri)
{
    for (int i = 0; i < n; i++)
    {
        if (vitri==i+1)
        {
            for (int j = i+1; j < n; j++)
            {
                a[j-1]=a[j];
            }

        }  
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
    int n;
    cin>>n;
    int a[1000];
    NhapMang(a,n);
    int vitri;cin>>vitri;
    Xoa(a,n,vitri);
    HienThiMang(a,n-1);
}
