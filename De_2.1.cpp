#include<iostream>
using namespace std;
void nhap1(  int &n)
{
	do
	{
		cout<<"Nhap so nguyen duong n thoa man: ";
		cin>>n;
	} while ( n<0);
}
void nhap2( int *a, int n )
{
	for( int i=0; i<n; i++)
	{
		cout<<"a["<<i<<"]= ";
		cin>>a[i];
	}
}
void xuat( int *a, int n)
{
	for( int i=0; i<n; i++)
	{
		cout<<a[i]<<"  ";
	}
}
void nhonhat( int *a, int n)
{
	int dem = 0;
	int min= a[0];
	for( int i=0; i<n; i++)
	{
		if( min > a[i])  min = a[i];
	}
	cout<<"\n Vi tri cua cac phan tu nho nhat: ";
	for( int i=0; i<n; i++)
	{
		if( a[i] == min)
		{
		   cout<<i<< "  ";
		   dem++;	
		} 	
	}
	cout<<"\nCo "<<dem<<" phan tu nho nhat.";
	
}
void xoa_k( int *a, int &n)
{
	int k;
	do
	{
		cout<<"\nNhap so nguyen duong k: ";
		cin>>k;
	} while ( k<0);
	for( int i=0; i<n; i++)
	{
		if( a[i] == k)
		{
			for( int j=i; j<n; j++)
			{
				a[j] = a[j+1];
			}
			n--;
			i--;
		}
	}
	cout<<"\nMang sau khi xoa: ";
	xuat(a, n);
}
int main()
{
	int *a, n;
	nhap1(n);
	a= new int[n];
	nhap2(a, n);
	cout<<"\nMang vua nhap la: ";
	xuat(a, n);
	nhonhat(a, n);
	xoa_k(a, n);
}
