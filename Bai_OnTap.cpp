
#include<math.h>
#include <iostream>
using namespace std;
void BaiToan1()
{
	int a, b;
	cout << "\nnhap a=";cin >> a;
	cout << "\nnhap b=";cin >> b;
	float x, y;
	cout << "\nnhap x=";cin >> x;
	cout << "\nnhap y=";cin >> y;
	float s = 0;
	s = 5 * cos(3 * x + 2) - log(x * x + 2) + sqrt(a * a + b * b) - fabs(x - y) / (pow(a, 6) + 1);
	cout << "\nS=" << s << "\n";
}
void BaiToan2()
{
	float x, y, z;
	cout << "\nnhap x=";cin >> x;
	cout << "\nnhap y=";cin >> y;
	cout << "\nnhap z=";cin >> z;
	float max = x,min=x;
	if (max<y)
	{
		max = y;
	}
	if (max<z)
	{
		max = z;
	}
	if (min > y)
	{
		min = y;
	}
	if (min> z)
	{
		min = z;
	}
	cout << "gia tri lon nhat la:" << max << "\n";
	cout << "gia tri nho nhat la:" << min << "\n";
}
void BaiToan3()
{
	float diem;cout << "\nnhap diem tong ket la: ";cin >> diem;
	if (diem>=8)
	{
		cout << "\nXep loai gioi\n";
	}
	else if (diem<8 && diem>=7)
	{
		cout << "\nXep loai kha\n";
	}
	else if(diem < 7 && diem>=5)
	{
		cout << "\nXep loai trung binh\n";
	}
	else if(diem < 5 && diem>=3)
	{
		cout << "\nXep loai yeu\n";
	}
	else
	{
		cout << "\nXep loai kem\n";
	}
}
void BaiToan4()
{
	float a, b;
	cout << "\nnhap a=";cin >> a;
	cout << "\nnhap b=";cin >> b;
	if (a!=0)
	{
		cout << "\nphuong trinh co nghiem x="<<-b/a;
	}
	else
	{
		cout << "\nphuong trinh vo nghiem";
	}
}
void BaiToan5()
{
	int thang;cout << "\nnhap thang =";cin >> thang;
	if (thang==2)
	{
		cout << "\n  thang 2 co 28 ngay";
		cout << "\nneu nam nhuan thi thang 2 co 29 ngay";
	}
	else if (thang == 9 || thang == 4 || thang == 6 || thang == 11)
	{
		cout << "\n  thang " << thang << "co 30 ngay";
	}
	else
	{
		cout << "\n  thang " << thang << "co 31 ngay";
	}
}
int main()
{
    int n; cin >> n;
	switch (n)
	{
		case 1:
		{
			BaiToan1();
			break;
		}
		case 2:
		{
			BaiToan2();
			break;
		}
		case 3:
		{
			BaiToan3();
			break;
		}
		case 4:
		{
			BaiToan4();
			break;
		}
		case 5:
		{
			BaiToan5();
			break;
		}
		case 0:
		{
		default:
			break;
		}
	}
}

