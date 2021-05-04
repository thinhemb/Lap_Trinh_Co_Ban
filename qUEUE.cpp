#include <bits/stdc++>
using namespace std;
const maxn=1e5+1;
int main()
{
    int n;
    cin>>n;
    int a[maxn];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int cnt=0;
    for(int i=1;i<n;i++)
    {
        if(a[i]<a[i-1])cnt++;
        a[i]+=a[i-1];
    }
    cout<<n-cnt;
    
    return 0;
}
