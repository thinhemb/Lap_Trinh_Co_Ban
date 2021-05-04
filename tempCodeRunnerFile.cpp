#include <bits/stdc++.h>
using namespace std;


int main()
{
    int a,b;
    cin>>a>>b;
    int cnt=0,cnt1=0,a1[7]={0},b1[7]={0},c[7];
    while(a!=0)
    {
         a1[cnt++]=a%10;
        a/=10;
    }
    while(b!=0)
    {
         b1[cnt1++]=b%10;
        b/=10;
    }
    for (int i = 0; i <max(cnt1,cnt); i++)
    {
        c[i]=(b1[i]+a1[i])%10;
    }
    for (int i = max(cnt1,cnt)-1; i >=0 ; i--)
    {
        cout<<c[i];
    }
    
    
    
   
    return 0;
}
