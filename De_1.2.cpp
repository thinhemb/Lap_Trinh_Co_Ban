#include<iostream>
#include<string.h>
using namespace std;
void nhap( char str[])
{
	cout<<"Moi ban nhap mot chuoi: ";
	fflush(stdin);
	gets(str);	
}
void xuat( char str[])
{
	cout<<"\nChuoi vua nhap la: "<<str;	
}
void yc1( char str[])
{
	int dem= 0;
	for( int i=0; i<strlen(str); i++)
	{
		if(str[i] >= 97 && str[i] <=122)
		{
			dem++;
		}
	}
	cout<<"\nSo chu cai thuong trong chuoi la: "<<dem;
}
void yc2( char str[])
{
	for( int i=0; i<strlen(str);i++ )
	{
		
		if( str[i] == 'a')
		{
			for( int j=i; j<strlen(str); j++)
			{
			str[j] = str[j+1];	
			}
			str[strlen(str)]='\0';
			i--;	
		}
	
	}
	xuat(str);
}
int main()
{
	char str[100];
	nhap(str);
	xuat(str);
	yc1(str);
	yc2(str);
	
}
