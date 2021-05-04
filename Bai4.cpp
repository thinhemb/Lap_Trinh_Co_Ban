#include <iostream>
#include<string.h>
#include<string>
using namespace std;
void TuNgan(char s1[],int len1,char s2[],int len2)
{
    char s[101];
    int j=0;
    for (int i = 0; i < len1+len2+1; i++)
    {
        if (i<len1)
        {
            s[i]=s1[i];
        }
        else if(i==len1)
        {
            s[i]=' ';
        }
        else
        {
            s[i]=s2[j++];
        }
    }
    int l=len1+len2+1;
    s[l]=' ';
    s[l+1]='\0';
    int min=102;
    char str[101];
    int count=0;
    char s3[101];
    for (int i =0; i<strlen(s); i++)
    { 
      if (s[i]!=32 )
      {
          s3[count++]=s[i];  
      }
      else
        {
            s3[count]='\0';
            if (strlen(s3)<min)
            {
                strcpy(str,s3);
                min=strlen(str);
            }
            count=0;
        }
    }

    cout<<"\n Tu ngan nhat trong chuoi la :" <<str<<endl; 
}
void TuDaiNhat(char str1[])
{
    char s2[101],str[101];
    int count=0,max=0;
    for (int  i = 0; i < strlen(str1); i++)
    {
        if(str1[i]!=32)
        {
            s2[count++]=str1[i];
        }
        else
        {
            s2[count]='\0';
            if(strlen(s2) > max)
            {
                strcpy(str,s2);
                max=strlen(s2);
            }
            count=0;
        }
    }
    cout<<"\n Tu dai nhat trong chuoi la:"<<str<<endl;
}
void XoaTu(char str1[])
{
    int cnt=0;
    string s[100];
    str1[strlen(str1)]=' ';
    str1[strlen(str1)]='\0';

    for (int i = 0; i < strlen(str1) ; i++)
    {
        if(str1[i]!=32)
        {
            s[cnt]+=str1[i];
        }
        else
        {
            s[cnt]+='\0';
            int dem=0;
            for (int j = 0; j <= cnt; j++)
            {
                if(s[cnt]==s[j])dem++;
            }
            if(dem==1)cnt++;
            else s[cnt]="\0";
        }
        
    }
    cout<<"\n Chuoi sau khi xoa la:";
    for (int i = 0; i < cnt; i++)
    {
        cout<<s[i]<<" ";
    }
    
    
}
int main()
{
    char str1[50],str2[50];
    cout<<"\n Nhap chuoi thu 1 :";
    fflush(stdin);
    cin.getline(str1,50);
    cout<<"\n Nhap chuoi thu 2 :";
    fflush(stdin);
    cin.getline(str2,50);
    cout<<"\n Chuoi thu 1 la: "<<str1<<endl;
    cout<<"\n Chuoi thu 2 la: "<<str2<<endl;
    int len1=strlen(str1);
    int len2=strlen(str2);
    TuNgan(str1,len1,str2,len2);
    TuDaiNhat(str1);
    XoaTu(str1);
     int j = len2-1;
     int count=0;
    for (int i = 0; i < int(len2/2); i++)
    {
            
            if (str2[i]!=str2[j])
            {
                count++;
                 break;
            }
            j--;  
    }    
    if (count==0)
    {
        cout<<"\n Chuoi str2 la chuoi doi xung "<<endl;
    }
    else
    {
        cout<<"\n chuoi str2 khong doi xung "<<endl;
    }
    return 0;
}
