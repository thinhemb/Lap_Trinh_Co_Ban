#include <bits/stdc++.h>
#define ll long long
#define INF 1e7

using namespace std;
const int maxn = INF;
string s;
struct node
{
    int val;
    int op;
    int cl;
    node (int v=0,int o=0,int c=0)
    {
        val = v;
        op = o;
        cl = c;
    }
} a[maxn];
node cacl(node x, node y)
{
    node res;
    res.val = x.val+y.val +min(x.op,y.cl)*2;
    res.op  = x.op +y.op - min(x.op,y.cl);
    res.cl = x.cl +y.cl -min(x.op,y.cl);
    return res;
}
void buil(int m,int l,int r)
{
    if(l==r)
    {
        if(s[l]=='(')
        {
            a[m]=node(0,1,0);
        }
        else
        {
            a[m] = node(0,0,1);
        }
        return;
    }
    int mid = (l+r)/2;
    buil(2*m,l,mid);
    buil(2*m+1,mid+1,r);
    a[m] = cacl(a[m*2],a[m*2+1]);
    //cout<<m<<" "<<a[m].val<<" "<<a[m].op<<" "<<a[m].cl<<l<<" "<<r<<endl;
}
node ans(int m,int l,int r,int x,int y)
{
    if(y<l || x>r)
    {
        return node(0,0,0);
    }

    if(l>=x && r<=y)
    {
        return a[m];
    }
    int mid = (l+r)/2;
    //cout <<"tru "<<l<<" "<<r<<" "<<m<<endl;
    return cacl(ans(2*m,l,mid,x,y),ans(2*m+1,mid+1,r,x,y));
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>s;
    s= " "+s;
    buil(1,1,s.size());
    //cout<<s<<endl;
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;//cout<<" Fiixx"<<x<<" "<<y<<endl;
        cout<<ans(1,1,s.size(),x,y).val<<"\n";
    }
}

