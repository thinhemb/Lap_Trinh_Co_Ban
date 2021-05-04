

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
void TBC(int a[], int n)
{
	int count = 0;
	float s = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i]%2==0||a[i]%7==1)
		{
			count++;
			s += a[i];
		}
	}
	cout << "TBC =" << s / count;
}
int main()
{

	int n;cin >> n;
	int* a;
	a = new int[n];
	cout << "so phan tu trong mang la: " << n << endl;
	NhapMang(a, n);
	cout << "\nmang vua nhap la:";HienThiMang(a, n);
	TBC(a, n);


}

