#include <iostream>
#include<string.h>
using namespace std;
void KTDX(char str[],int len)
{
    int j=len -1;int count=0;
    for (int i = 0; i < int(len/2); i++)
    {
            
            if (str[i]!=str[j])
            {
                count++;
                 break;
            }
            j--;  
    }    
    if (count==0)
    {
        cout<<"\n Chuoi str la chuoi doi xung "<<endl;
    }
    else
    {
    cout<<"\n chuoi str khong doi xung "<<endl;
    }
}
void KiemTraSo(char str[],int len)
{
    int dem=0;
    for (int i = 0; i < len; i++)
    {
        if (str[i]>=48 && str[i]<=57)
        {
            dem++;
        }
        
        
    }
    cout<<"\n Trong chuoi co so chu so la: "<<dem<<endl;
}
int main()
{
    char str[500];
    cout<<"\n Nhap chuoi bat ki la :";
    fflush(stdin);
    cin.getline(str,500);
    cout<<"\n Chuoi vua nhap la: "<<str<<endl;
    int len=strlen(str);
    KiemTraSo(str,len);
    KTDX(str,len);
    system("pause");
    return 0;
}
