

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
void Dem(int a[], int n)
{
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i]%3==0&&a[i]%10==5)
		{
			count++;
		}
	}
	cout << "\nso chia het cho 3 va co tan cung la 5 trong mang la:" << count;
}
int main()
{
	int n;cin >> n;
	int* a;
	a = new int[n];
	cout << "so phan tu trong mang la: " << n << endl;
	NhapMang(a, n);
	cout << "\nmang vua nhap la:";HienThiMang(a, n);
	Dem(a, n);

}

