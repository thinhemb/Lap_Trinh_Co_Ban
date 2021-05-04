

#include <iostream>
#include<iomanip>
#include<string>
struct DS
{
	char Ten[100];
};
using namespace std;
int main()
{
	int n;
	cin >> n;
	
	DS a[100];
	
	for (int i = 0; i < n; i++)
	{
		cout << "\n Nhap ten cua hang hoa thu " << i+1  << " la: ";
		gets_s(a[i].Ten);
		fflush(stdin);
	}
	for (int i = 0; i < n; i++)
	{
		cout << a[i].Ten<<endl;
	}
	return 0;
}

