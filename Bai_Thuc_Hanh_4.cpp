

#include <iostream>
#include<functional>
#include<algorithm>
using namespace std;
void NhapMang(int a[], int n)
{
	cout << "\n nhap mang co " << n << " so nguyen la";
	for (int i = 0; i < n; i++)
	{
		cout << "\na[" << i << "]=";cin >> a[i];
	}
}
void Nhap(int* n)
{
	cout << "\nnhap so nguyen n=";
	cin >> *n;
}
void XuatMang(int a[], int n)
{

	for (int i = 0; i < n; i++)
	{
		cout << a[i]<<"  ";
	}
}
void BT1()
{
	int n;
	Nhap(&n);
	int a[10000];
	NhapMang(a, n);
	cout << "\nMang vua nhap la: ";
	XuatMang(a, n);
	int dem1 = 0, dem2 = 0, dem3 = 0;
	for (int i = 1; i < n; i++)
	{
		if (a[i-1]<a[i])
		{
			dem1++;
		}
		else if (a[i-1]==a[i])
		{
			dem2++;
		}
		else 
		{
			dem3++;
		}
	}
	if (dem1 == n-1)
	{
		cout << "\nday so tren la day dc sap tang";
	}
	else if(dem3 == n-1)
	{
		cout << "\nday so tren la day dc sap giam";
	}
	else if( dem2 > 0 && dem3 == 0)
	{
		cout << "\nday so tren la day dc sap tang ngat";
	}
	else if ( dem2 > 0 && dem1 == 0)
	{
		cout << "\nday so tren la day dc sap giam ngat";
	}
	else
	{
		cout << "\nday so tren chua dc sap xep";
		sort(a, a + n);
		cout << "\nMang sau khi sap xep la:";
		XuatMang(a, n);
	}

}
void BT2()
{
	int n, k;
	Nhap(&n);
	int a[10000];
	NhapMang(a, n);
	cout << "\nMang vua nhap la: ";
	XuatMang(a, n);
	Nhap(&k);
	int b[10000];
	NhapMang(b, k);
	cout << "\nMang vua nhap la: ";
	XuatMang(b, k);
	int ab[10000];
	int j = n + k;
	int m = 0;
	for (int i = 0; i < j; i++)
	{
		if (i < n)
		{
			ab[i] = a[i];
		}
		else
		{
			ab[i] = b[m];
			m++;
		}
	}
	
	XuatMang(ab, j);
	sort(ab, ab + j);
	cout << "\nMang sau khi gop va sap xep la :";
	XuatMang(ab, j);

}
void TBC(float tbc[], float t[], float v[], float nn[], int n)
{
	for (int i = 0; i < n; i++)
	{
		tbc[i] = (t[i] + v[i] + nn[i]) / 3;
	}
}
int MaxTbc(float tbc[], int n)
{
	float max = tbc[0];
	for (int i = 1; i < n; i++)
	{
		if (max<tbc[i])
		{
			max = tbc[i];
		}
	}
	return max;
}
void TBCChung(float tbc[], float t[], float v[], float nn[], int n)
{
	float s1=0, s2=0, s3=0, s4=0;
	for (int i = 0; i < n; i++)
	{
		s1 += t[i];
		s2 += v[i];
		s3 += nn[i];
		s4 += tbc[i];
	}
	cout << "\ndiem trung binh mon toan la: " << s1 / n;
	cout << "\ndiem trung binh mon van la: " << s2 / n;
	cout << "\ndiem trung binh mon ngoai ngu la: " << s3 / n;
	cout << "\ndiem trung binh cua diem trung binh 3 mon la: " << s4 / n;
}
void BT3()
{
	int n; 
	cout << "\n nhap so hoc sinh kiem tra giua ki la: ";
	cin >> n;
	float t[200], v[200], nn[200];
	cout << "\n nhap diem cua "<<n<<" hoc sinh.";
	for (int i = 0; i < n; i++)
	{
		cout << "\n nhap diem cua hoc sinh thu  " << i+1 << " la:";
		cout << "\n mon toan: ";cin >> t[i];
		cout << "\n mon van: ";cin >> v[i];
		cout << "\n mon ngoai ngu: ";cin >> nn[i];
	}
	int k;
	do
	{
		cout << "\nnhap so tu [0,4] de xem thong tin ve diem cua hoc sinh tham gia kiem tra. nhap k= ";
		cin >> k;
	} while (k<0||k>4);
	float tbc[200];
	TBC(tbc, t, v, nn, n);
	switch (k)
	{
		case 1:
		{
			for (int i = 0; i < n; i++)
			{
				cout << "\n hoc sinh thu " << i + 1 << " diem 3 mon toan, van, ngoai ngu lan luot la: " << t[i] << "  " << v[i] << "  " << nn[i];
				cout << "\n va diem trung binh 3 mon la :" << tbc[i]<<endl;
			}
			break;
		}
		case 2:
		{
			cout << "\ncac hoc sinh so diem trung binh cao nhat la:";
			for (int i = 0; i < n; i++)
			{
				if (tbc[i]==MaxTbc(tbc,n))
				{
					cout << "\nhoc sinh thu " << i + 1 << " co diem trung binh la: " << MaxTbc(tbc, n)<<endl;
				}
			}
			break;
		}
		case 3:
		{
			TBCChung(tbc, t, v, nn, n);
			break;
		}
		case 4:
		{
			sort(tbc, tbc + n);
			cout << "danh sach giam dan diem trung binh la:";
			int t = 1;
			for (int i = n-1; i >-1; i--)
			{
				
				cout << "\nhoc sinh " << t << " co so diem trung binh la:"<<tbc[i];
				t++;
			}
			break;
		}
	default:
		return;
	}
}
void HienThiMang2Chieu(int a[][20], int m, int n)
{
	cout << "\nma tran " << m << "*" << n << " la:"<<endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout <<"\t" <<a[i][j] << "  ";
		}
		cout << "\n";
	}
}
void MaxMang(int a[][20], int m, int n)
{
	int max = a[0][0];
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (max < a[i][j] )
			{
				max = a[i][j];
			}
		}
	}
	cout << "\nphan tu lon nhat trong ma tran la:" << max;
}
void MaxLine(int a[][20], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		int max = a[i][0];
		for (int j = 0; j < n; j++)
		{
			if (max<a[i][j])
			{
				max = a[i][j];
			}
		}
		cout << "phan tu lon nhat trong hang " << i + 1 << " la: " << max << endl;
	}
}
void BT4()
{
	int m, n;	
	cout << "\nnhap so hang cua ma tran m=";
	cin >> m;
	cout << "\nnhap so cot cua ma tran n=";
	cin >> n;
	cout << "nhap ma tran " << m << " * " << n << " la: ";
	int a[20][20];
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "\na[" << i+1 << "][" << j+1 << "]=";cin >> a[i][j];
		}
	}
		startswich:
		int k;
		cout << "\nnhap tu [3,5] de thuc hien menu: ";
		cout << "\nnhap 3 de hien thi mang a";
		cout << "\nnhap 4 de hien thi phan tu lon nhat trong mang";
		cout << "\nnhap 5 de  hien thi phan tu lon nhat cac dong ma tran";
		cout << "\nnhap 0 de thoat menu";
		cout << "\nnhap k=";cin >> k;
	switch (k)
	{
	case 3:
	{

		HienThiMang2Chieu(a, m, n);
		goto startswich;
		break;
	}
	case 4:
	{
		MaxMang(a, m, n);
		goto startswich;
		break;
	}
	case 5:
	{
		MaxLine(a, m, n);
		goto startswich;
		break;
	}
	default:
		return;
	}

}
int main()
{
    BT1();
	//BT2();
	//BT3();
	//BT4();
}

