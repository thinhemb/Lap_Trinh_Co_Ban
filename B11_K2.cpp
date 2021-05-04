

#include <iostream>
using namespace std;
void NhapMang(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]=";cin >> a[i];
	}
}
void HienThiMang(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
}
void Xoa(int a[], int n, int x)
{
	int count=0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] == x)
		{
			for (int j = i; j < n; j++)
			{
				a[j] = a[j + 1];
			}
			count++;
		}
	}
	cout << "mang sau khi xoa la: ";HienThiMang(a, n-count);
	
}
int main()
{
	int n;
	cout << "nhap n=";
	cin >> n;
	int* a;
	a = new int[n];
	cout << "so phan tu trong mang la: " << n << endl;
	NhapMang(a, n);
	cout << "\nmang vua nhap la:";HienThiMang(a, n);
	int x;
	cout << "\nnhap x=";
	cin >> x;
	Xoa(a, n, x);
}

