#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        long long n,k;
        cin>>n>>k;
        long long a[n];
        long long maxa=-1e9-2;
        for (int i = 0; i <n; i++)
        {
            cin>>a[i];
            if(a[i]>maxa)maxa=a[i];
        }
        long long maz=-1e9-5;
        
        int check=0;
        for (int j = 1; j >=0; j--)
        {
           for(int i=0;i<n;i++)
            {
                a[i]=maxa-a[i];
                if(a[i]>maz)maz=a[i];
                //cout<<maz<<"xx \n";
                if(j==k%2) 
                {
                    check=1;
                   cout<<a[i]<<" "; 
                }
            }
            maxa=maz;
            
            if(check==1)break;
            
        }
        
        
            
        
        cout<<"\n";
        
    }
    
    
    return 0;
}
