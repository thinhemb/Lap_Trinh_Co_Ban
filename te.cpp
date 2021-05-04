#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n,k;
    cin>>n>>k;
    long long ans=0;
    if(k<=n)
    {
        ans=k/2;    
        if(k%2==0)ans-=1;
    }
    else if(k>n*2-1)ans=0;
    else 
    {
        long long a=k-n,b=n;
        if(k%2==1)
        {
            ans=(k+1)/2-a;
        }
        else ans=k/2-a;
        
        
    }
    cout<<ans;
    
    return 0;
}
