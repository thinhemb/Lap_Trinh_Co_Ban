
#include <iostream>
using namespace std;
void Nhap(int &m, int &n)
{
    cout << "\n Nhap so hang cua ma tran:";cin >> m;
    cout << "\n Nhap so cot cua ma tran:";cin >> n;
}
void NhapMt(int a[][10],int m, int n)
{
    for (int i = 0; i <m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "\n a[" << i << "," << j << "]=";cin >> a[i][j];
        }
    }
}
void XuatMt(int a[][10], int m, int n)
{
    cout << "\n Ma tra vua nhap la:"<<endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "\t" << a[i][j];
        }
        cout << endl;
    }
}
void Max(int a[][10],int m, int n)
{
    int max = a[0][0],k=0,f=0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (max<a[i][j])
            {
                max = a[i][j];

                k = i;
                f = j;
            }
        }
    }
    cout << "\n Gia tri lon nhat trong mang la a[" << k << "," << f << "]=" << max;
}
void TongCot(int a[][10], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        int Tong = 0;
        for (int j = 0; j < n; j++)
        {
            Tong += a[j][i];
        }
        cout << "\n cot " << i + 1 << "  co tong la " << Tong;
    }
}
int main()
{
    int m, n;
    Nhap(m, n);
    int a[10][10];
    NhapMt(a, m, n);
    XuatMt(a, m, n);
    Max(a, m, n);
    TongCot(a, m, n);
}

