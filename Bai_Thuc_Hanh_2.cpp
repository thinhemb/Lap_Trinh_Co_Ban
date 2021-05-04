

#include <iostream>
#include<math.h>
#include<algorithm>
using namespace std;

int BT1_GT(int k)
{
	if (k == 1) return 1;
	else
	{
		return (k * BT1_GT( k - 1));
	}
}
void BT2_BT()
{
	double F = 0;
	int n;cout << "\nnhap so nguyen n=";cin >> n;
	if (n%2==0)
	{
		for (int i = 0; i < n+1; i++)
		{
			F += 1 / (pow(2, i));
		}
		cout << "\nF=" << F;
	}
	else
	{
		cout << "\nF= " << sqrt(n * n + 1);
	}
	
}
int BT3_UCLN(int a,int b)
{
	int r = a %b;
	if (r==0)
	{
		return b;
	}
	else
	{
		a = b;
		b = r;
		BT3_UCLN(a, b);
	}
}
void BT4()
{
	startswich:
	int n;
	do
	{
		cout << "\nnhap so ho gia dinh su dung dien n=";cin >> n;
	} while (n > 100 || n < 0);
	long long a[100];
	for (int i = 0; i < n; i++)
	{
		do
		{
			cout << "\ngia dinh so " << i + 1 << " su dung so kwh la: ";cin >> a[i];
		} while (a[i]<0);
	}
	int k;
	do
	{
		cout << "\n\nnhap 0 de quay lai menu chinh";
		cout << "\nnhap so tu 1 den 3 de tim hieu ve so dien cua ca ho gia dinh k=";cin >> k;
	} while (k<0||k>3);
	 long double a1[100] ;
	 for (int i = 0; i < n; i++)
	 {
		 if (a[i] < 51)
		 {
			 a1[i] = a[i] * 1.678;
			 
		 }
		 else if (a[i] > 50 && a[i] < 101)
		 {
			 a1[i] = (a[i] - 50) * 1.734 + 50 * 1.678;
			 
		 }
		 else if (a[i] > 100 && a[i] < 201)
		 {
			 a1[i] = (a[i] - 100) * 2.014 + 50 * 1.734 + 50 * 1.678;
			 
		 }
		 else if (a[i] > 200 && a[i] < 301)
		 {
			 a1[i] = (a[i] - 200) * 2.536 + 100 * 2.014 + 50 * 1.734 + 50 * 1.678;
			 
		 }
		 else if (a[i] > 300 && a[i] < 401)
		 {
			 a1[i] = (a[i] - 300) * 2.834 + 100 * 2.536 + 100 * 2.014 + 50 * 1.734 + 50 * 1.678;
			 
		 }
		 else
		 {
			 a1[i] = (a[i] - 400) * 2.927 + 100 * 2.834 + 100 * 2.536 + 100 * 2.014 + 50 * 1.734 + 50 * 1.678;
		 }
	 }

	switch (k)
	{
		case 1:
		{
			for (int i = 0; i < n; i++)
			{
				cout << "\n\n ho gia dinh so " << i + 1 << " tieu thu " << a[i] << " kwh va so tien can tra la trong mot thang la: ";
				if (a[i]<51)
				{
					
					cout <<a1[i] << " VND";
				}
				else if(a[i]>50&&a[i]<101)
				{
					
					cout <<a1[i] << " VND";
				}
				else if(a[i] > 100 && a[i] <201)
				{
					
					cout<<a1[i] << " VND";
				}
				else if (a[i] > 200 && a[i] <301)
				{
					
					cout <<a1[i] << " VND";
				}
				else if (a[i] > 300 && a[i] <401)
				{
					
					cout <<a1[i] << " VND";
				}
				else
				{
					cout <<a1[i] << " VND";
				}

			}
			break;
		}
		case 2:
		{
			int min = a[0];int dem = 0;
			
				for (int j =1; j < n; j++)
				{
					if (min>a[j])
					{
						min = a[j];
						dem = j;
					}
				}
			cout << "\n\n ho gia dinh so " << dem + 1 << " phai tra it tien nhat : " << a1[dem]<<" VND";
			break;
		}
		
		case 3:
		{
			sort(a, a + n);
			sort(a1, a1 + n);
			cout << "\n\n Danh sach theo chieu tang dan cua so kwh la:";
			for (int i = 0; i < n; i++)
			{
				cout << "\n ho gia dinh dung thu "<<i+1<<" tieu thu het " << a[i] << " kwh va tra " << a1[i] << " VND";
			}
			break;
		}
		case 0:
		{
			goto startswich;
		}
		default:
			break;
	}
}

int BT5(int  t)
{
	
	if (  t==0)
	{
		return 0;
	}
	else
	{
		t = t / 10;
		
		return BT5(t)+1;
	}
	
}

int main()
{
    int n;
	do
	{
		cout << "nhap so truy cap vao bai toan: ";cin >> n;
	} while (n<0||n>5);
	switch (n)
	{
		case 1:
		{
			int k;
			do
			{
				cout << "\nnhap so nguyen duong n=";cin >> k;
				
			} while (k<0);
			cout << "\n n!= "<< BT1_GT(k);;
			
			break;
		}
		case 2:
		{
			BT2_BT();
			break;
		}
		case 3:
		{
			int a, b;
			do
			{
				cout << "\nnhap so nguyen duong a=";cin >> a;
				cout << "\nnhap so nguyen duong b=";cin >> b;
			} while (a<0||b<0);
			cout << "UCLN(" << a << "," << b << ")=" << BT3_UCLN(a, b);
			break;
			
		}
		case 4:
		{
			BT4();
			break;
		}
		case 5:
		{
			int count = 0;
			int k;cout << "\n\nnhap so nguyen duong k= ";cin >> k;
			cout<<"\nso chu so cua "<<k<<" la "<<BT5(k);
			break;
		}
		case 0:
		{
			return 0;
		}
	default:
		break;
	}
}


