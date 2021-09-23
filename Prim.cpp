#include<bits/stdc++.h>
#define MAX 100000
using namespace std;
int main()
{
    int n,k,kq=0,x;
    // nhap so dinh va so canh
    cin>>n>>k;
    int a[100][100];
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++) 
			{
				cin>>a[i][j];
				if(a[i][j]==-1)
					a[i][j]=MAX;
			}
    vector <int>b,c;
    vector<vector<int> > res;
    for(int i=2;i<=n;i++) 
		c.push_back(i);
    int check[100]; memset(check,0,sizeof(check));
    b.push_back(1);
    check[1]=1;
    while(b.size()<=n-1)
	{
        sort(b.begin(),b.end());
        int ok=0,u,v,min=1e9+7;
        for(int i=0;i<b.size();i++)
		{
            for(int j=1;j<=n;j++)
			{
                if(check[j]==0&&a[b[i]][j]&&a[b[i]][j]<min)
				{
                    u=b[i]; v=j ; ok=1;
                    min=a[b[i]][j];
                }
            }
        }
        if(ok==0)break;
        kq+=min;
        vector<int> d;
        d.push_back(u); d.push_back(v);
        res.push_back(d);
        check[u]=1;check[v]=1;
        b.push_back(v);
    }
    cout<<"dH = "<<kq<<endl;
    for(int i=0;i<res.size();i++)
	{
        for(int j=0;j<res[i].size();j++)
		{
            cout<<res[i][j]<<' ';
        }
		cout<<endl;
    }
}

