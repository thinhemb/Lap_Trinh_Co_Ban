

#include <iostream>
#include<algorithm>
#include<malloc.h>
using namespace std;
void Nhap(int* n)
{
	do
	{
		cout << "5<=n<=30" << endl;
		cout << "nhap so nguyen n=";
		cin >> *n;
	} while (*n<5||*n>30);
}
void NhapMang(int* a, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "\nnhap phan tu thu "<<i+ 1 <<" trong mang la: ";cin >> *(a + i);
	}
}
void XuatMang(int* a, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << " " << *(a + i);
	}
}
void Chen(int* a, int* n, int vt, int x)
{
	++*n;
	a = (int*) realloc(a, *n * sizeof(int));
	
	for (int i = *n-1; i >=vt; i--)
	{
		*(a+i) = *(a+i-1);
		if (i==vt)
		{
			*(a + i) = x;
		}
	}
}
int main()
{
	int n;Nhap(&n);
	int* a;
	a = new int[n];
	cout << "\n Nhap mang co " << n << " phan tu la: ";
	NhapMang(a, n);
	cout << "\nMang vua nhap la:";
	XuatMang(a, n);
	int x, vt;
	do
	{
		cout << "\nnhap so nguyen x= ";cin >> x;
		cout << "\nnhap k thoa man 1 <= vt <= " << n << ". vt=";cin >> vt;

	} while (vt>n||vt<1);
	Chen(a, &n, vt, x);
	cout << "\nMang sau khi chen la: ";
	XuatMang(a, n);
	sort(a, a + n);
	cout << "\nMang sau khi sap xep  la: ";
	XuatMang(a, n);
	delete[] a;
}

