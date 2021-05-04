
#include <iostream>
using namespace std;
void Nhap(int* a, float* x)
{
    cout << "\n Nhap so nguyen a= ";cin >> *a;
    cout << "\n Nhap so thuc x= ";cin >> *x;
}
int main()
{
    int a;float x;
    Nhap(&a, &x);
    cout << "\n Dia tri cua a la: " << &a;
    cout << "\n Gia tri cua a la: " << a;
    cout << "\n Dia tri cua x la: " << &x;
    cout << "\n Gia tri cua x la: " << x;
    
}

