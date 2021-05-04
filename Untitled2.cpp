

#include <iostream>
#include<string>
#include<stdio.h>
using namespace std;
void HienThiDS(char Hodem[][1000], char Ten[][1000], int Dien[], int n)
{
	cout << "\ndanh sach cac ho gia dinh su dung dien:" << endl;
	cout << "STT\t" << "Ho dem        " << "      Ten       " << " so kwh dien tieu thu " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << " " << i + 1 << "       " << Hodem[i] << "          " << Ten[i] << "               " << Dien[i] << endl;
	}
}
void HienThiDS2(char Hodem[][1000], char Ten[][1000], int Dien[], long double tiendien[], int n)
{
	cout << "\ndanh sach cac ho gia dinh su dung dien:" << endl;
	cout << "STT\t" << "Ho dem             " << "  Ten            " << " so kwh dien tieu thu        " << "so tien can tra  " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << " " << i + 1 << "        " << Hodem[i] << "          " << Ten[i] << "                  " << Dien[i] << "                           " << tiendien[i] << endl;
	}
}
void TienDien(long double a[], int dien[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] < 51)
		{
			a[i] = dien[i] * 1.678;

		}
		else if (dien[i] > 50 && dien[i] < 101)
		{
			a[i] = (dien[i] - 50) * 1.734 + 50 * 1.678;

		}
		else if (dien[i] > 100 && dien[i] < 201)
		{
			a[i] = (dien[i] - 100) * 2.014 + 50 * 1.734 + 50 * 1.678;

		}
		else if (dien[i] > 200 && dien[i] < 301)
		{
			a[i] = (dien[i] - 200) * 2.536 + 100 * 2.014 + 50 * 1.734 + 50 * 1.678;

		}
		else if (dien[i] > 300 && dien[i] < 401)
		{
			a[i] = (dien[i] - 300) * 2.834 + 100 * 2.536 + 100 * 2.014 + 50 * 1.734 + 50 * 1.678;

		}
		else
		{
			a[i] = (dien[i] - 400) * 2.927 + 100 * 2.834 + 100 * 2.536 + 100 * 2.014 + 50 * 1.734 + 50 * 1.678;
		}
	}
}

void TongTienDien(long double a[], int n)
{
	long double Tong = 0;
	for (int i = 0;i < n;i++)
	{
		Tong += a[i];
	}
	cout << "\n Tong tien dien cua " << n << " ho gia dinh la:" << Tong<<endl;
}
void MaxDien(char Hodem[][1000], char Ten[][1000], int Dien[], long double tiendien[], int n)
{
	int max = Dien[0];
	for (int i = 1; i < n; i++)
	{
		if (max<Dien[i])
		{
			max = Dien[i];
		}
	}
	cout << "\n Danh sach su dung dien nhieu nhat la:"<<endl;
	cout << "STT\t" << "Ho dem             " << "  Ten            " << " so kwh dien tieu thu        " << "so tien can tra  " << endl;
	for (int i = 0; i < n; i++)
	{
		if (max==Dien[i])
		{
			cout << " " << i + 1 << "        " << Hodem[i] << "          " << Ten[i] << "                  " << Dien[i] << "                           " << tiendien[i] << endl;
		}
	}
}
void L(char Hodem[][1000], char Ten[][1000], int Dien[], long double tiendien[], int n)
{
	cout << "\n Danh dach nhung ho co ten bat dau chu 'L' la: "<<endl;
	cout << "STT\t" << "Ho dem             " << "  Ten            " << " so kwh dien tieu thu        " << "so tien can tra  " << endl;
	for (int i = 0; i < n; i++)
	{
		if (Ten[i][0]=='L')
		{
			cout << " " << i + 1 << "        " << Hodem[i] << "          " << Ten[i] << "                  " << Dien[i] << "                           " << tiendien[i] << endl;

		}
	}
}
void Them(char Hodem[][1000], char Ten[][1000], int Dien[], long double Tiendien[], int& n)
{
	cout << "\nThem thong tin ho moi:";
	n++;
	int k = 0;
	for (int i = n; i > 1; i--)
	{
		k = 0;
		do
		{
			Hodem[i][k] = Hodem[i - 1][k];
			k++;
		} while (Hodem[i - 1][k] != '\0');
		Hodem[i][k] = NULL;
		k = 0;
		do
		{
			Ten[i][k] = Ten[i - 1][k];
			k++;
		} while (Ten[i - 1][k] != '\0');
		Ten[i][k] = NULL;
		k = 0;
		Dien[i] = Dien[i - 1];
		Tiendien[i] = Tiendien[i - 1];
	}
	cout << "\n Nhap ho dem cua ho gia dinh thu " << 2 << " la:";
	fflush(stdin);
	gets(Hodem[1]);
	cout << "\n Nhap ten cua ho gi dinh tren:";
	cin >> Ten[1];
	cout << "\n Nhap so kwh dien tieu thu la: ";cin >> Dien[1];cout << endl;
	TienDien(Tiendien, Dien, n);
	HienThiDS2(Hodem, Ten, Dien,Tiendien, n);
}
int main()
{
	int n;
	cout << "\n nhap so ho gia dinh su dung dien la: ";
	cin >> n;
	char Hodem[1000][1000];
	char Ten[1000][1000];
	int Dien[1000];
	long double Tiendien[1000];
	for (int i = 0; i < n; i++)
	{
		cout << "\n Nhap ho dem cua ho gia dinh thu " << i + 1 << " la:";
		fflush(stdin);
		gets(Hodem[i]);
		cout << "\n Nhap ten cua ho gi dinh tren:";
		cin >> Ten[i];
		cout << "\n Nhap so kwh dien tieu thu la: ";cin >> Dien[i];cout << endl;
	}
	TienDien(Tiendien, Dien, n);
startswich:
	int chon;
	cin >> chon;
	switch (chon)
	{
	case 1:
	{
		HienThiDS(Hodem, Ten, Dien, n);
		goto startswich;
	}
	case 2:
	{
		HienThiDS2(Hodem, Ten, Dien, Tiendien, n);
		goto startswich;
	}
	case 3:
	{

		goto startswich;
	}
	case 4:
	{
		TongTienDien(Tiendien, n);
		goto startswich;
	}
	case 5:
	{
		MaxDien(Hodem, Ten, Dien, Tiendien, n);
		goto startswich;
	}
	case 6:
	{
		L(Hodem, Ten, Dien, Tiendien, n);
		goto startswich;
	}
	case 7:
	{
		Them(Hodem, Ten, Dien, Tiendien, n);
		goto startswich;
	}
	default:
		break;
	}

}


