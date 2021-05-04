#include<bits/stdc++.h>
using namespace std;
void sx_luachon(int x[])
{
	for(int i=0;i<9;i++)
	{
		int temp=x[i];
		int j=i-1;
		while(j>-1 and x[j]>temp)
		{
			x[j+1]=x[j];
			j--;
		}
		x[j+1]=temp;
	}
}
int main()
{
	int x[]= {34, 14, 24, 54, 84, 64, 94, 74, 04};
	sx_luachon(x);
	for(int i=0;i<9;i++)
	{
		cout<<x[i]<<" ";
	}
}

