#include <bits/stdc++.h>
using namespace std;
int A[20][20],B[20],C[20]={0},d=0,n;
void nhap()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{	C[i]=0;
		for(int j=1;j<=n;j++)
		{
			cin>>A[i][j];
		}
	}
	
}
void Result()
{
	for(int i=n;i>=0;i--)
	{
		cout<<B[i]<<" ";
	}
	cout<<endl;
	d++;
}
void Hamilton(int k)
{
	for(int j=1;j<=n;j++)
	{
		if(A[B[k-1]][j]==1&&C[j]==0)
		{
			B[k]=j;
			C[j]=1;
			if(k<n)	Hamilton(k+1);
			else Result();
			C[j]=0;
		}
	}
}
int main()
{
	nhap();
	B[0]=1;d=0;
	Hamilton(1);
	if(d==0)	cout<<"\n khong co duong di Hamilton "<<endl;

}

