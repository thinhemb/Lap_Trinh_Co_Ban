
#include <iostream>
#include<algorithm>
#include<malloc.h>
using namespace std;
void NhapSoNguyen(int &n)
{
    cout << "\nNhap so nguyen n= ";cin >> n;
}
void NhapMang(int a[], int n)
{
    cout << "\n Nhap mang co " << n << " phan tu :";
    for (int i = 0; i < n; i++)
    {
        cout << "\na[" << i << "]=";cin >> a[i];
    }
}
void HienThi(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "  ";
    }
}
void MaxChan(int a[], int n)
{
    int k = -1,max=0;
    for (int i = 0; i < n; i++)
    {
            if (a[i] % 2 == 0)
            {
                 max = a[i];
                break;
            }
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i]%2==0&& max<a[i])
        {
            k = i;
        }
    }
    if (k!=-1)
    {
        cout << "\nPhan thu thu " << k + 1 << " la phan tu chan lon nhat trong mang: " << a[k];
    }
    else
    {
        cout << "\n Mang khong co phan tu chan";
    }

}
void Xoa(int a[], int &n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i]%2==0)
        {
            for (int j = i; j < n; j++)
            {
                a[j] = a[j + 1];
            }
            n--;
        }
    }
}
void Tach(int a, int n,int Chan[],int le[],int &k,int &j)
{
    k = 0;j = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i]%2==0)
        {
            Chan[k] = a[i];
            k++;
        }
        else
        {
            le[j] = a[i];
            j++;
        }
    }
}
int main()
{
    int n, *a,*Le,*Chan,j=0,k=0;  
    NhapSoNguyen(n);
    a = new int[n];
    Chan = new int[k];
    Le = new int[j];
    NhapMang(a, n);
    cout << "\n Mang can hien thi la: ";
    HienThi(a, n);
    MaxChan(a, n);
    cout << "\n Mang sau khi sap xep la: ";
    sort(a, a + n);
    HienThi(a, n);
    Tach(a, n, Chan, Le, k, j);
    cout << "\n Mang sau khi tach la:";
    cout << "\n Mang le la :";
    HienThi(Le, j);
    cout << "\n Mang chan la :";
    HienThi(Chan, j);
    Xoa(a, n);
    cout << "\n Mang sau khi xoa la: ";
    HienThi(a, n);
    
}

