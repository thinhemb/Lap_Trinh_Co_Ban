// Do Viet Tinh 
// B19DCAT161
#include <bits/stdc++.h>
using namespace std;
int n,u,A[15][15];
void nhap()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin>>A[i][j];
		}
	}
	
}
bool kiemtra()
{
	int s=0,d=0;
	for(int i=1;i<=n;i++)
	{
		s=0;
		for(int j=1;j<=n;j++)
		{
			s+=A[i][j];
		}
		if(s%2)	 
		{
			d++;
			
		}
	}
	if(d!=2&&d!=0)	return false;
	return true;
}
void Euler_cycle(int u)
{
	stack <int> Stack;
	int dCE=0,v,x,CE[20];
	Stack.push(u);
	do
	{
		v= Stack.top();
		x=1;
		while(x<=n&&A[v][x]==0)
		{
			x++;
		}
		if(x>n)
		{
			dCE++;
			CE[dCE]=v;
			Stack.pop();
		}
		else
		{
			Stack.push(x);
			A[v][x]=0;
			A[x][v]=0;
		}
	}
	while(!Stack.empty());
	cout<<"\n co duong di Euler: "<<endl;
	for(x=dCE;x>0;x--)
	{
		cout<<CE[x]<<" ";
	}
}
int main()
{
	nhap();
	if(kiemtra())
		{
			Euler_cycle(1);
		}
		else cout<<"khomg co duong di "<<endl;
}

