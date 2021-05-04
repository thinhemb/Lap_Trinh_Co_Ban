#include <bits/stdc++.h>
using namespace std;
int ans[201]={0};
int check[201]={0};
vector <int> cnt;
int n,k;
int main()
{
    //ios_base::sync_with_stdio(false);cout.tie(0);
    cin>>n>>k;
    vector <pair<int,int>> seg(n+1);
    int minn=201,maxn=0;
    for (int i = 1; i <= n; i++)
    {
        cin>> seg[i].first >>seg[i].second;
        minn=min(seg[i].first,minn);
        maxn=max(seg[i].second,maxn);
        for (int j = seg[i].first; j <=seg[i].second ; j++)
        {
            ans[j]++;
        }
        
    }
    for (int i = minn; i <= maxn; i++)
    {
        while(ans[i] > k)
        {  
            int max1=0,sev;
            for(int j = 1;j <= n;j++)
            {
                if(check[j]==0)
                {
                    if(i>=seg[j].first && i<=seg[j].second)
                    {
                        if(seg[j].second > max1)
                        {
                            max1=seg[j].second;
                            sev=j;
                           
                        }
                    }
                }
            }
            check[sev]=1;
            for (int j = i; j <= max1; j++)
            {
                ans[j]--;
            }
             //cout<<sev<<endl;
            cnt.push_back(sev); 
        } 
    }
        cout<<cnt.size()<<"\n";
        sort(cnt.begin(),cnt.end());
        for ( int j: cnt)
        {
            cout<<j<<" ";
        }
    
    
    return 0;
}
