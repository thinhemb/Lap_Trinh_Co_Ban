#include<bits/stdc++.h>
using namespace std;
int N,maTran[(int)1e2][(int)1e2],maTran2[(int)1e2][(int)1e2],start;
int MAX=1000000000;
int nxt[(int)1e2][(int)1e2];
void input(){
	cin>>N;
	for (int i(1);i<=N;i++)
	{
		for (int j(1);j<=N;j++)
		{
			cin>>maTran[i][j];
			if (!maTran[i][j])
				maTran[i][j]=MAX;
			if (i==j) maTran[i][j]=0;
			maTran2[i][j]=maTran[i][j];
			if (maTran[i][j]!=MAX) nxt[i][j]=j;
			else nxt[i][j]=MAX;
		}
	}
}
void Floyd()
{
	for (int k=1;k<=N;k++)
	{
		for (int i=1;i<=N;i++)
		{
			for (int j=1;j<=N;j++)
			{
				if (maTran2[i][j]>maTran2[i][k]+maTran2[k][j]&&maTran2[i][k]<MAX)
				{
					maTran2[i][j]=maTran2[i][k]+maTran2[k][j];
					nxt[i][j]=nxt[i][k];
				}
			}
		}
	}
}
void output()
{
	for (int i(1);i<=N;i++)
	{
		for (int j(1);j<=N;j++)
		{
			vector<int>v;
			bool ok=true;
			if (i!=j){
				cout<<"Duong di tu "<<i<<" den "<<j<<": ";
				int u=i;
				while (u!=j)
				{
					if (nxt[u][j]>=MAX) 
					{
						cout<<"Khong co duong di ";
						ok=false;
						break;
					}
					v.push_back(u);
					u=nxt[u][j];
				}
				v.push_back(u);
				if (ok)
				{
					for (auto x:v)
					{
						cout<<x<<" ";
					}
					cout<<", Tong trong so : "<<maTran2[i][j];
				}
				cout<<endl;
			}
			
		}
	}
	
}
int main()
{
	input();
	Floyd();
	output();
	return 0;
}

