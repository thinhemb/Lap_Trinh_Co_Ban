

#include <iostream>
#include<stdio.h>
#include<string>

using namespace std;
struct DS
{
	char HangHoa[100];
	int SoLuong;
	long long DonGia;
	long long ThanhTien;
};
void Nhap(DS a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "\nNhap ten hang hoa thu " << i + 1 << " la :";
		fflush(stdin);
		gets_s(a[i].HangHoa);
		cout << "\nNhap so luong hang : ";cin >> a[i].SoLuong;
		cout << "\n Nhap don  gia cua san pham : ";cin >> a[i].DonGia;
	}
}
void Xuat(DS a[], int n)
{
	cout << " \n danh sach hang hoa,so luong san pham va don gia la: ";
	cout << endl;
	cout << "STT" << endl;
	for (int i = 0; i < n; i++)
	{

		cout << i + 1 << " \t" << a[i].HangHoa << "\t      " << a[i].SoLuong << "\t      " << a[i].DonGia << endl;
	}
}
void Tien(DS a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		a[i].ThanhTien = a[i].SoLuong * a[i].DonGia;
	}
}
void Xuat2(DS a[], int n)
{
	cout << " \n danh sach hang hoa,so luong san pham , don gia va thanh tien la: ";
	cout << endl;
	cout << "STT" << endl;
	for (int i = 0; i < n; i++)
	{
		cout <<  i+1 <<"    " << a[i].HangHoa << "\t      " << a[i].SoLuong << "\t      " << a[i].DonGia << "\t      " << a[i].ThanhTien << endl;
	}
}
void SapXep(DS a[], int n)
{

	for (int i = 0;i < n - 1;i++)
	{
		for (int j = i + 1;j < n;j++)
		{
			if (strcmp(a[i].HangHoa, a[j].HangHoa) == 1)
			{
				DS k = a[i];
				a[i] = a[j];
				a[j] = k;
			}
		}
	}
	cout << "danh sach hang hoa sau khi sap xep la:" << endl;
	Xuat2(a, n);
}
void TongTien(DS a[], int n)
{
	long long Tong = 0;
	for (int i = 0; i < n; i++)
	{
		Tong += a[i].ThanhTien;
	}
	cout << "\nTong tien cac san pham la: " << Tong << endl;
}
void MinSL(DS a[], int n)
{
	int min = a[0].SoLuong;
	for (int i = 1; i < n; i++)
	{
		if (min > a[i].SoLuong)
		{
			min = a[i].SoLuong;
		}
	}
	cout << "\n Nhung hang hoa co so luong nho nhat la: " << endl;
	for (int i = 0; i < n; i++)
	{
		if (min == a[i].SoLuong)
		{
			cout << "\t" << a[i].HangHoa << "      " << a[i].SoLuong << "      " << a[i].DonGia << "      " << a[i].ThanhTien << endl;

		}
	}
	cout << endl;
}
void Xoa(DS a[], int& n)
{
	for (int i = 0; i < n; i++)
	{

		if (a[i].SoLuong == 0)
		{
			for (int j = i + 1; j < n; j++)
			{
				//strcpy(a[i].HangHoa, a[j].HangHoa);
				a[i].SoLuong = a[j].SoLuong;
				a[i].DonGia = a[j].DonGia;
				a[i].ThanhTien = a[i].ThanhTien;
			}
			n--;
		}
	}

	Xuat2(a, n);
}
void Them(DS a[], int& n)
{
	n++;
	cout << "\nNhap ten hang hoa " << n << " la:";
	fflush(stdin);
	gets_s(a[n-1].HangHoa);
	cout << "\n Nhap so luong :";cin >> a[n - 1].SoLuong;
	cout << "\n Nhap don gia la: ";cin >> a[n - 1].DonGia;
	a[n - 1].ThanhTien = a[n - 1].SoLuong * a[n - 1].DonGia;
	Xuat2(a, n);
}
int main()
{
	int n = 5;
	DS a[100];
	Nhap(a, n);
	Tien(a, n);
startswich:
	int Chon;
	cout << "\nchon tu [1,7] de hien thi danh sach can thiet : ";
	cin >> Chon;
	switch (Chon)
	{
	case 1:
	{
		Xuat(a, n);
		goto startswich;
	}
	case 2:
	{
		Xuat2(a, n);
		goto startswich;
	}
	case 3:
	{
		SapXep(a, n);
		goto startswich;
	}
	case 4:
	{
		TongTien(a, n);
		goto startswich;
	}
	case 5:
	{
		MinSL(a, n);
		goto startswich;
	}
	case 6:
	{
		Xoa(a, n);
		goto startswich;
	}
	case 7:
	{
		Them(a, n);
		goto startswich;
	}
	default:
		system("pause");
		return 0;
	}
	
}
