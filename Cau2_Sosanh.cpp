#include <bits/stdc++.h>

using namespace std;

int main()
{
    char s1[1000],s2[1000];
    cout<<" Nhap chuoi s1: ";
    fflush(stdin);
    cin.getline(s1,1000);
    cout<<" Nhap chuoi s2: ";
    fflush(stdin);
    cin.getline(s2,1000);
    int len=max(strlen(s1),strlen(s2));
    int cnt=0;
    for (int i = 0; i < len; i++)
    {
        if(s1[i]>='A'&&s1[i]<='Z'&&i<strlen(s1))
        {
            cnt++;
        }
        if(s2[i]>='A'&&s2[i]<='Z'&&i<strlen(s2))
        {
            cnt++;
        }
    }
    cout<<"Trong chuoi s1 va s2 co so ki tu la chu cai in hoa la: "<<cnt<<endl;
    if(strcmp(s1,s2)>0)cout<<"Chuoi s1 lon hon s2 "<<endl;
    else  if(strcmp(s1,s2)<0)
    {
        cout<<"Chuoi s1 nho hon s2 "<<endl;
    }
    else
    {
        cout<<"Chuoi s1 bang s2 "<<endl;
    }
    
    
    return 0;
}
