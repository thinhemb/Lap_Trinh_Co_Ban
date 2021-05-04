#include <bits/stdc++.h>
#define ll long long
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
 
    int n,c;
    cin>>n>>c;
    string s;
    int m=0,ss=0;
    for (int i=0; i<n; i++)
    {
        cin>>s;
        m+=int(s[0])-48;
        ss+= (int(s[2])-48)*10+ int(s[3])-48;
    }
    ss-=c*(n-1);
    //cout<<m<<" "<<ss<<endl;
    int sum1=0;
    if (ss>59)
    {
        m+=ss/60;
    }
    if (m>59)
    {
        sum1+=m/60;
    }
    //cout<<sum1<<" "<<m<<" "<<ss<<endl;
    string f=;
    if (sum1<10)
        f+="0";
    f+=(string)sum1+":";
    if (m-60*(m/60)<10)
        f+="0";
    f+=string(m-60*(m/60))+":";
    if (ss-60*(ss/60)<10)
        f+="0";
    f+=string(ss-60*(ss/60));
    cout<<f;
    return 0;
}