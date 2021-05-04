#include<bits/stdc++.h>
using namespace std;
void NhapMang(int a[],int n)
{
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
}
int main()
{
    int n;cin>>n;
    int a[n];
    NhapMang(a,n);
    int tong=0;
    for (int i = 0; i < n; i++)
    {
        if (n%a[i]==0)
        {
            tong+=a[i];
        }
        
    }
    cout<<tong;
    
}