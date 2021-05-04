#include<iostream>
#include<string.h>
using namespace std;
void nhap( char str[])
{
	cout<<"\nMoi ban nhap mot chuoi: ";
	fflush(stdin);
	gets(str);	
}
void yc2( char s1[], char s2[])
{
	int n=strcmp(s1,s2);
	if(n>0)cout<<" \n Chuoi s1 lon hon s2"<<endl;
	if(n<0) cout<<" \n Chuoi s1 nho hon s2"<<endl;
	else cout<<" \n Chuoi s1 bang s2"<<endl;
}
int main()
{
	char s1[100], s2[100];
	nhap(s1);
	cout<<"\nchuoi s1 vua nhap la: "<<s1;
	nhap(s2);
	cout<<"\chuoi s2 vua nhap la: "<<s2;
	yc2(s1, s2);
}
