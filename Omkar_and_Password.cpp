#include <bits/stdc++.h>
using namespace std;
const int maxn=2e5 +5;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t; 
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
       long long a[maxn];
        int check=0;
       a[0]=0;
        for (int i = 1; i <=n; i++)
        {
            cin>>a[i];
            if(a[i]!=a[i-1])check++;
            
        }
        if(check !=1) cout<<1<<"\n";
        else cout<<n<<"\n";
        
        
    }
    
    return 0;
}
