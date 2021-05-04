

#include <iostream>
#include<math.h>
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
void DemSoNT(int a[], int n)
{
	int countNT=0;
	for (int i = 0; i < n; i++)
	{
		int count = 0;if (a[i] == 1)continue;
		for (int j = 2; j <= sqrt(a[i]); j++)
		{
			if (a[i]%j==0)
			{
				count++;
			}
		}
		if (count==0)
		{
			countNT++;
		}
	}
	cout << "\nSo Nguyen to trong mang la:" << countNT;
}
int main()
{
	int n;
	cout << "Nhap n=";
	cin >> n;
	int* a;
	a = new int[n];
	cout << "so phan tu trong mang la: " << n << endl;
	NhapMang(a, n);
	cout << "mang vua nhap la:";HienThiMang(a, n);
	DemSoNT(a, n);

}

