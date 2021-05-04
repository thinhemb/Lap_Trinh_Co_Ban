#include <bits/stdc++.h>
using namespace std;
#define N 100000
int snt_temp[N];
vector<int> snt;
int main()
{
    ios_base::sync_with_stdio(false);cout.tie(0);cin.tie(0);
    for(int i=2;i<N;++i)
    {
        if(snt_temp[i] == 0)
        {
            snt.push_back(i);
            for(int j=2*i;j<N;j+=i)
            {
                snt_temp[j] = 1;
            }
        }
    }
    sort(snt.begin(), snt.end());
    long long n;
    cin>>n;
    while (n--)
    {
        int x;
        cin>>x;
        if(x%2==0)cout<<x/2<<" "<<x/2<<"\n";
        else
        {
            int ans=1;
            for (int i = 1; i < snt.size(); i++)
            {
                if(snt[i]>x)
                {
                    break;
                }
                if(x%snt[i]==0)
                {
                    ans=x/snt[i];
                    break;
                }
            }
            cout<<ans<<" "<<x-ans<<"\n ";
            
        }
        
    }
    

   
    return 0;
}
