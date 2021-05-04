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
            cout << a[i][j]<<"  ";
        }
        cout << "\n";
    }
}
int main()
{
    int n, m,a[100][100];
    cout << "Nhap n=";
    Nhap(&n);
    cout << "Nhap m=";
    Nhap(&m);
    NhapMaTran(a, n, m);
    cout<<"\n Ma tran vua nhap la: "<<endl;
    XuatMatran(a, n, m);
    int check=0;
    for (int i = 1; i < n+1; i++)
    {
        for (int j = 1; j < m+1; j++)
        {
            
            if(a[i][j]<0)
            {
                check++;
                cout<<"\n Phan tu am dau tien trong mang la: "<<a[i][j]<<endl;
                break;
            }
            
        }
        
    }
    if(check==0)cout<<"\n Trong ma tran tren ko co phan tu am ";
    
    return 0;
}
