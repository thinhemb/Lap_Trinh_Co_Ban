#include <bits/stdc++.h>
using namespace std;

int main()
{
     ios_base::sync_with_stdio(false);cin.tie(0);
    int t;
    cin>>t;
    while (t--)
    {
       int n;
       cin>>n;
       int a[n];
       long long sum=0;
       for (int i = 0; i < n; i++)
       {
           cin>>a[i];
            
       }
       for (int i = 0; i <n-1 ; i++)
       {
           sum+=max(a[i]-a[i+1],0);
       }
       cout<<sum<<"\n";
       
      
       
    }
    

    
   
    return 0;
}
