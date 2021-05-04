#include<bits/stdc++.h>
using namespace std;
void Gt(int a)
{
    if(a==1) return 1;
    return a*Gt(a-1);
}
int main()
{
    int a;
    cin>>a;
    cout<<Gt(a);

}
