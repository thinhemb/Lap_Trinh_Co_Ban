#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int k=int(n/2)*int(m/2);
	if(k!=0)
	{
		cout<<k<<" manh bia 2cm * 2cm"<<endl;

	}
	if(((n >=2)or (m>=2) )and ((n%2==1)or (m%2==1)))cout<<int(n/2)+int (m/2)<<" manh bia 2cm * 1cm"<<endl;
	if( n*m%2==1)cout<<1<<" manh bia 1cm * 1cm"<<endl;

}
