

#include <iostream>
using namespace std;
void Nhap(int* n)
{
    
    cin >> *n;
}
void NhapMaTran(int a[][100], int n, int m)
{
    for (int i = 1; i < n+1; i++)
    {
        for (int j = 1; j < m+1; j++)
        {
            cout << "a[" << i << "," << j << "]= ";
            cin >> a[i][j];
        }
    }
}
void XuatMatran(int a[][100], int n, int m)
{
    for (int i = 1; i < n+1; i++)
    {
        for (int j = 1; j < m+1; j++)
        {
            cout <<"  "<< a[i][j];
        }
        cout << "\n";
    }
}
void SumLineEven(int a[][100], int n, int m)
{
    int sum = 0;
    for (int i = 2; i < n+1; i += 2)
    {
        for (int j = 1; j < m+1; j++)
        {
            sum += a[i][j];
        }
    }
    cout << "SumLineEven= " << sum << endl;
}
void SumcolumnOdd(int a[][100], int n, int m)
{
    int sum = 0;
    for (int i = 1; i < n+1; i++)
    {
        for (int j = 1; j < m+1; j+=2)
        {
            sum += a[i][j];
        }
    }
    
    cout << "SumcolumnOdd= " << sum << endl;
}
void Maxcolumn1(int a[][100], int n, int m)
{
    int max = a[1][1];
    for (int i = 2; i < n+1; i++)
    {
        if (a[i][1] > max)
        {
            max = a[i][1];
        }
    }
    cout << "Maxcolumn1= " << max << endl;
}
void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void SapXepHang2GiamGian(int a[][100], int n, int m)
{
    for (int i = 1; i < n+1; i++)
    {
        for (int j = i+1; j < n + 1; j++)
        {
            if (a[2][i] < a[2][j])
            {
                swap(a[2][i], a[2][j ]);
            }
        }
    }
}
void DoiCho_HaiCot_MaTran(int a[][100], int n, int m)
{
    int t, t1;
    cout << "nhap hai cot can doi cho "<<endl;
    cout << "column = ";cin >> t;
    cout << "column = ";cin >> t1;
    
    for (int j = 1; j < m+1; j++)
    {
    swap(a[j][t], a[j][t]);
    }
    XuatMatran(a, n, m);
}
void CleanLine(int a[][100], int n, int m)
{
    int t;
    cout << "nhap dong can xoa t=";cin >> t;
    for (int i = t; i < n+1; i++)
    {
        for (int j = 1; j < m+1; j++)
        {
            swap(a[i][j], a[i+1][j]);
        }
    }
    cout << "Ma tran sau khi xoa la " << endl;
    XuatMatran(a, n-1, m);
}
int main()
{
    int n, m,a[100][100];
    cout << "Nhap n=";
    Nhap(&n);
    cout << "Nhap m=";
    Nhap(&m);
    NhapMaTran(a, n, m);
    XuatMatran(a, n, m);
    //Bai1
    SumLineEven(a, n, m);
    Maxcolumn1(a, n, m);
    //bai2
    SapXepHang2GiamGian(a, n, m);
    cout << "Ma tran sau khi sap xep la "<<endl;
    XuatMatran(a, n, m);
    //Bai3
    DoiCho_HaiCot_MaTran(a, n, m);
    //Bai5
    SumcolumnOdd(a, n, m);
    SumLineEven(a, n, m);
    //Bai4
    CleanLine(a, n, m);

}

