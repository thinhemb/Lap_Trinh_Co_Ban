#include<bits/stdc++.h>
using namespace std;
void NhapMang(int a[],int n)
{
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
}
int main()
{
    int n;cin>>n;
    int a[n];
    NhapMang(a,n);
    int count1=0;
    for (int i = 0; i < n; i++)
    { 
        int count=0;
        for (int j = i+1; j < n; j++)
        {
           if(a[i] == a[j])
            {
                count++;
                break;
            }
        }
        if (count==0)
        {
            count1++;  
        }
            
    }
    cout<<count1;    
}