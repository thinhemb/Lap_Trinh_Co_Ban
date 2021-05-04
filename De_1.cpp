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
void tbc( int *a, int n)
{
	int dem=0, tong=0;
	for( int i=0; i<n; i++)
	{
		if( a[i] %2 !=0 && a[i] %3 == 0)
		{
			tong+= a[i];
			dem++;
		}
	}
	cout<<"\ntbc cac so le chia het cho 3 la: "<< tong / float(dem);
}
void swap( int &a, int &b)
{
	int temp = a;
	a= b; 
	b= temp;
}
void sapxepduong( int *b, int m)
{
	for(int i=0; i<m-1; i++)
	{
		for( int j=i+1; j<m; j++)
		{
			if( b[i] > b[j]) swap( b[i], b[j]);
		}
	}
}
void sapxepam( int *c, int k)
{
	for(int i=0; i<k-1; i++)
	{
		for( int j=i+1; j<k; j++)
		{
			if( c[i] < c[j]) swap( c[i], c[j]);
		}
	}
}
void tach( int *a, int n, int *b, int &m, int *c, int &k)
{
	m=0, k=0;
  for( int i=0; i<n; i++)
  {
  	if( a[i] >0)
  	{
  	  b[m++] = a[i];	
	}
	else if( a[i]< 0)
	{
	c[k++] = a[i];	
		
	}
  }	
  sapxepduong(b, m);
  sapxepam(c, k);
  int tam=0;
  for( int i=0; i<n; i++)
  {
  	if(i<m)
  	{
  		a[i]= b[i];
	}
	else
	{
		a[i]= c[tam++];
	}	
  	
  }
  cout<<"\nMang sau khi sap xep: "<<endl;
  xuat(a, n);
  
}

int main()
{
	int *a, n;
	int *b, m, *c, k;
	nhap1(n);
	a= new int[n];
	b= new int[n];
	c= new int[n];
	nhap2(a, n);
	cout<<"\nMang vua nhap la: ";
	xuat(a, n);
	tbc( a, n);
	tach(a, n, b, m, c, k);
	delete[] a;
	delete[] b;
	delete[] c;
	
}
