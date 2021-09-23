#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s,a[100][100],truoc[100],d[100],check=0;
     cin>>n>>s;
     for(int i=1;i<=n;i++)
	 {
         for(int j=1;j<=n;j++)
		 {
             cin>>a[i][j];
             if(a[i][j]==0||i==j) a[i][j]=1000000;
         }
     }
     for(int i=1;i<=n;i++)
	 {
         d[i]=a[s][i];
         truoc[i]=s;
     }
     d[s]=0;
     for(int i=1;i<=n-2;i++)
	 {
         for(int j=1;j<=n;j++)
		 {
             if(j!=s)
			 {
                 for(int k=1;k<=n;k++)
				 {
                     if(d[j]>d[k]+a[k][j])
					 {
                         d[j]=d[k]+a[k][j];
                         truoc[j]=k;
                     }
                 }
             }
         }
     }
     for(int i=1;i<=n;i++)
	 {
         cout<<truoc[i]<<' ';
     }
     for(int i=1;i<=n;i++)
	 {
        if(d[i]>=5000){
             cout<<"K/c "<<s<<" -> "<<i<<" = INF;\n";
         }
         else {
             cout<<"K/c "<<s<<" -> "<<i<<" = "<<d[i]<<";\t";
             cout<<i<<" <-";
             int a=truoc[i];
             while(a!=s)
			 {
                 cout<<a<<" <- ";
                 a=truoc[a];
             }
             cout<<a<<endl;
         }
     }
}

