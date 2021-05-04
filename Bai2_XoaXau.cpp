#include <iostream>
#include<string.h>
using namespace std;

int main()
{
    char str[1000];
    cout<<"Nhap xau ki tu tu ban phim tu ban phim: ";
    cin.getline(str,1000);
    cout<<"Chuoi vua nhap la: "<<str<<endl;
    int cnt=0;
    for (int i = 0; i < strlen(str); i++)
    {
        if(str[i]<='z'&&str[i]>='a')cnt++;
    }
    cout<<"Trong mang co "<<cnt<<" ki tu thuong trong chuoi."<<endl;
    for (int i = 0; i < strlen(str); i++)
    {
        if(str[i]=='a')
        {
            for(int j=i; j < strlen(str)-1;j++)
            {
                    str[j]=str[j+1];
            }
            str[strlen(str)-1]='\0';
            i--;
        }
    }
    cout<<"chuoi sau khi xoa la:"<<str<<endl;
    
    return 0;
}
