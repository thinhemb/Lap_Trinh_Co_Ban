
#include <iostream>
#include<math.h>
using namespace std;
void Nhap(int* k)
{
	do
	{
		cout << "\n nhap so nguyen duong  k= ";cin >> *k;
	} while (*k<0);
	
}
void NhapMang(int a[], int k)
{
	cout << "\nnhap " << k << " phan tu mang ";
	for (int i = 0; i < k; i++)
	{
		cout << "\n nhap a[ " << i  << "]= ";cin >> a[i];
	}
	
}
void XuatMang(int a[], int k)
{
	cout << "\n mang vua nhap la ";
	for (int i = 0; i < k; i++)
	{
		cout << " " << a[i] << " ";
	}
}
void TongChan(int a[], int k)
{
	int s = 0;
	for (int i = 0; i < k; i++)
	{
		if (a[i]%2==0)
		{
			s += a[i];
		}
	}
	cout << "\nTong chan S= " << s;
}
void TongLe(int a[], int k)
{
	int s = 0;
	for (int i = 0; i < k; i++)
	{
		if (a[i] % 2 == 1)
		{
			s += a[i];
		}
	}
	cout << "\nTong le S= " << s;
}
void BT1()
{
	int k;
	Nhap(&k);
	int a[1000];
	NhapMang(a, k);
	XuatMang(a, k);
	TongChan(a, k);
	TongLe(a, k);
}
bool ktsnt(int k)
{
	if (k<2)
	{
		return 0;
	}
	for (int i=2; i <= sqrt(k) ;i ++)
	{
		if (k%i==0)
		{
			return 0;
		}
	}
	return 1;
}
void TimVaTinhTongSNT(int k)
{
	int s = 0, count = 0;int a[1000];
	for (int i = 2; i < k+1; i++)
	{
		if (ktsnt(i)==1)
		{
			s += i;
			a[count] = i;
			count++;
		}
	}
	cout << "\n Trong day [ 1, " << k << " ] co " << count << " so nguyen to  ";
	cout << "\nso nguyen to trong  [1, " << k << "] la ";
	for (int i = 0; i < count; i++)
	{
		cout << " " << a[i] << " ";
	}
	cout << "\n Tong so nguyen to trong day la S=" << s;
}
float F(float x, int n) 
{
	int a;
	if (n % 2 == 0)
		a = 1;
	else
		a = -1;
	float temp = 1;
	for (int i = 1; i <= 2 * n + 1; i++)
		temp = temp * x / i;
	return a * temp;
}
void BT3()
{
	float x;
	cout << "\ngia tri sin can tinh(radian):x= ";
	cin >> x;
	int i = 0;
	float sin = 0;
	while (abs(F(x, i)) > 0.00001) 
	{
		sin += F(x, i);
		i++;
	}
	cout << "\n sin(" << x << ")= " << sin;
}
int BT4(float x, int n)
{
	if (n==0)
	{
		return 1;
	}
	else
	{
		return (x * BT4(x, n - 1));
	}
}
void BT5()
{
	double x[] = { 12.3, -45.4, 12, 15, 10.1, 12.5 };
	cout << "\nmang x sau khi dao nguoc la: ";
	for (int i = 5; i > -1; i--)
	{
		cout << x[i] << "  ";
	}
}
void BT6()
{
	int n;
	Nhap(&n);
	int a[10000];
	NhapMang(a, n);
	int S_Even = 0;
	int S_odd = 0;
	int S_3 = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i]%2==0)
		{
			S_Even += a[i];
		}
		else
		{
			S_odd += a[i];
		}
		if (a[i]%3==0)
		{
			S_3 += a[i];
		}
	}
	cout << "\nTong cac so chan trong mang ,S= " << S_Even;
	cout << "\nTong cac so le trong mang ,S= " << S_odd;
	cout << "\nTong cac so chia het cho 3 ,S= " << S_3;
}
void BT7()
{
	int n,s=0;Nhap(&n);
	int a[10000];NhapMang(a, n);
	XuatMang(a, n);
	for (int i = 0; i < n; i++)
	{
		if (ktsnt(a[i]) == 1)
		{
			s += a[i];
		}
	}
	cout << "\n Tong cac so trong mang la:S= " << s;
}

int main()
{
    int n;
	do
	{
		cout << "\nnhap n tu 1 den 7 de chon bai toan tuong ung\nnhap n= 0 de dong ung dung\nn= ";
		cin >> n;
	} while (n>7||n<-1);
	switch (n)
	{
	 case 1:
	 {
		 BT1();
		 break;
	 }
	 case 2:
	 {
		 int k;
		 Nhap(&k);
		 TimVaTinhTongSNT(k);
		 break;
	 }
	 case 3:
	 {
		 
		 BT3();
		 break;
	 }
	 case 4:
	 {
		 float x;cout << "\nnhap so thuc x= ";cin >> x;
		 Nhap(&n);
		 cout<<"\n "<<x<<"^"<<n<<" = "<<BT4(x, n);
		 break;
	 }
	 case 5:
	 {
		 BT5();
		 break;
	 }
	 case 6:
	 {
		 BT6();
		 break;
	 }
	 case 7:
	 {
		 BT7();
		 break;
	 }
	default:
		return 0;
	}
}

