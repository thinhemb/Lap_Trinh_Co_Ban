#include<bits/stdc++.h>
using namespace std;
int main()
{
	int m;
	cout<<"m=";
	cin>>m;
	cout<<int(m/10000)<<" to 10000 dong \n"<<int((m%10000)/5000)<<" to 5000 dong \n"<<int(((m%10000)%5000)/2000)<<" to 2000 dong \n"<<int((((m%10000)%5000)%2000)/1000)<<" to 1000 dong \n"<<int(((((m%10000)%5000)%2000)%1000)/500)<<" to 500 dong\n"<<endl;
}
