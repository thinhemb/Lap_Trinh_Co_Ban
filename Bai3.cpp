
#include <iostream>
#include<string>
using namespace std;

int main()
{
    string str;
    cout<<"\n Nhap xau bat ki la: ";
    fflush(stdin);
    getline(cin,str);
    cout<<"\n chuoi vua nhap la : "<<str;
    int n = str.length();
    int count=0;
    for (int i = 0; i < n; i++)
    {
        if (str[i]==' '&& str[i+1]!=' ')
        {
           count++;
        }
        
    }
    cout<<"\n Chuoi co khoang trang la: "<<count<<endl;
    char k[1];
    cout<<"\n Nhap ki tu can tim kiem la:";cin>>k[0];
    int st=count+1;
    cout<<"\n vi tri cua tu xuat hien la: ";
        for (int j = n-1; j >-1; j--)
        {
            if (str[j]==' ' && str[j+1]!=' ')
            {
                st--;
            }
            if (k[0]==str[j])
            {
                cout<<st<<"   ";
            }
            
        }
    system("pause");
    return 0;
}
