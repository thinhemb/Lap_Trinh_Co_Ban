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
    for (int i = 0; i < n; i++)
    {
        int count=1,dem=0;
        for (int k = i-1; k >-1; k--)
        {  
             if (a[i]==a[k])
            {
              dem++; 
            }
        }
        if (dem==0)
        {
            for (int j =i+1 ; j < n; j++)
            {
                if (a[i]==a[j] )
                {
                count++;
                }
            
            } 
            cout<<a[i]<<" "<<count<<endl;
        }
        
        
    }
    
}
