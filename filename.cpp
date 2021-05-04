#include<bits/stdc++.h>
using namespace std;
void xoa( char s[], int k)
{
	
}
int main()
{
	char s[101];
	int n;
	cin>>n;
	cin>>s;
	int dem= 0;
	for( int i=0; i<strlen(s);i++ )
	{
		if( s[i] == 'x' && s[i+1] == 'x' && s[i+2] == 'x')
		{
			dem++;
		}
		
	}
	cout<<dem<<endl;
}
