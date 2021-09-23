#include<bits/stdc++.h>
#define max 100
using namespace std;

class dothi
{
	int n, a[max][max];
	public:
		int s, x[max];
		void readdata();
		bool chuaxet[max];
		void init();
		void hmt(int k);
};
void dothi::readdata()
{
	cin>>n>>s;
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=n; j++)
			cin>>a[i][j];
	}
}
void dothi::init()
{
	for(int i=1; i<=n; i++)
	{
		chuaxet[i]=true;
	}
}
void dothi::hmt(int k)
{
	for(int y=1; y<=n; y++)
	{
		if(a[x[k-1]][y]==1)
		{	//y ke voi x[k-1]
			if(k==n+1 && y==x[1])
			{
				for(int i=1; i<=n; i++)
					cout<<x[i]<<" ";
					cout<<x[1]<<endl;
			}
			else{
				if(chuaxet[y]==true)
				{
					x[k]=y; 
					chuaxet[y]=false;
					hmt(k+1); 
					chuaxet[y]=true;
				}
			}
		}
	}
}
int main(){
	dothi g;
	g.readdata();
	g.init();
	g.x[1]=g.s;
	g.chuaxet[g.x[1]]=false;
	g.hmt(2);
}
