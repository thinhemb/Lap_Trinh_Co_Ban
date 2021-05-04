#include <bits/stdc++.h>

using namespace std;

int arr[200005];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t; cin>>t;
    while(t--)
     {
        int r, g, b, w; cin>>r>>g>>b>>w;
        if (r%2 + g%2 + b%2 + w%2 <=1){
                cout<<"Yes"<<endl;
            continue;
        }
        while(r > 0 && g > 0 && b> 0) 
        {
                w++, r--, g--, b--;
            break;
        }
        if (r%2 + g%2 + b%2 + w%2 <=1) cout<<"Yes"<<endl;
        else cout<<"No" << endl;
    }
}
