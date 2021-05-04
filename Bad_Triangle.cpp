#include <iostream>
using namespace std;

int main()
{
    
    ios_base:: sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    cin>>t ;
    while (t--)
    {
        int n;
        cin>>n;
        int a[n];
        for (int i = 0; i <n ; i++)
        {
            cin>>a[i];
        }
        if(a[0]+a[1]>a[n-1])cout<<"-1\n";
        else
        {
            cout<<"1 2 "<<n<<"\n";
        }
        
       
    }
    return 0;
}
