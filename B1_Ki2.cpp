

#include <iostream>
using namespace std;
void dem(int a[], int n)
{
	int soam=0,soduong=0;
	for (int i = 0; i < n; i++)
	{
		if (a[i]>0)
		{
			soduong++;
		}
		if (a[i] < 0)soam++;
	}
	cout << "so duong trong mang :"<<soduong << endl;
	cout << "so am trong mang:" << soam;
}
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
int main()
{
	int n;
	cout << "Nhap n=";cin >> n;
	int* a;
	a = new int[n];
	cout << "so phan tu trong mang la: " << n<<endl;
	NhapMang(a, n);
	cout << "mang vua nhap la:";HienThiMang(a, n);
	dem(a, n);
    
}

