#include<bits/stdc++.h>
using namespace std;
void sx_luachon(int x[])
{
	for(int i=0;i<8;i++)
		for(int j=i+1;j<9;j++)
		{
			if(x[i]>x[j])swap(x[i],x[j]);
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
