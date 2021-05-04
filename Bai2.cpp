#include<iostream>
#include<bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
const int maxn =1e5+5;
vector <int> a[maxn];
queue <int> q;
int check[maxn];
long long good=1;
int n,k;
int bfs(int x)
{
    long long dem=1;
    check[x]=1;
    q.push(x);
    while(!q.empty())
    {
        int e=q.front();
        q.pop();
        vector<int >::iterator it;
        for(it=a[e].begin();it!=a[e].end();it++)
        {
            if(check[*it]==0)
            {
                ++dem;
                check[*it]=1;
                q.push(*it);
            }
        }
    }
    long long  old=1;
    for(int i=1;i<=k;i++)
    {
        old=(long long)(old*dem)%mod;
    }
    if(good>=mod)
        good=good-old;
    else
        good=(long long)(good+mod-old)%mod;
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);
    int u,v;
    cin>>n>>k;
    for(int i =1;i<n;i++  )
    {
        cin>>u>>v;
        int x;cin>>x;
        if(x==0)
        {
            a[u].push_back(v);
            a[v].push_back(u);
        }
    }
    for(int i=1;i<=n;i++)check[i]=0;
    for(int i=1;i<=k;i++)
    {
        good=(long long )(good*n)%mod;
    }
    for(int i=1;i<=n;i++)
    {
        if(check[i]==0)
        {
            bfs(i);
        }
    }
    cout<<good;
}