#include <bits/stdc++.h>

using namespace std;
class hang
{
	char mah[20],tenh[20];
	int sl;
	float gia;
	int nam;
public:
	hang();
	hang(char *a,char *b,int x,float y,int z);
	//~hang();
	friend istream& operator>>(istream& x, hang &a);
	friend ostream& operator<<(ostream& x, hang a);
	friend void tim(hang *a,int n);

};
hang::hang()
{
	strcpy(mah,"");
	strcpy(tenh,"");
	sl=0; gia=0;nam=-1;
}
hang::hang(char *a,char *b,int x,float y,int z)
{
	strcpy(mah,a);
	strcpy(tenh,b);
	sl=x; gia=y;nam=z;
}
istream& operator>>(istream& x, hang &a)
{
	fflush(stdin);x.getline(a.mah,20);
	fflush(stdin);x.getline(a.tenh,20);
	x>>a.sl>>a.gia>>a.nam;
	return x;
}
ostream& operator<<(ostream& x, hang a)
{
	x<<a.mah<<setw(20)<<a.tenh<<setw(20)<<a.gia<<setw(20)<<a.sl<<setw(20)<<a.nam<<endl;
	return x;
}
void tim(hang *a,int n)
{
	for(int i=0;i<n;i++)
	{
		if(strcmp(a[i].tenh,"Iphon12")==0)
		{
			cout<<a[i]<<endl;
		}
	}
}
int main()
{
    hang *a;
    int n;
    cin>>n;
    a=new hang[n];
    for(int i=0;i<n;i++)
    {
    	cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
    	cout<<a[i];
    }
    tim(a,n);
}
