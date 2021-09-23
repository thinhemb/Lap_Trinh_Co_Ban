#include<bits/stdc++.h>
#define max 100
using namespace std;
int n, s, a[max][max];

/*void dothi::init(){
    cin>>n;
    cin>>s;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++)
            cin>>a[i][j];
    }
}*/
void euler_cycle(int u){
    stack<int> nx, CE;      //khoi tao stack la rong
    nx.push(u);         //dua u vao stack
    while(!nx.empty()){
        int dem=0;
        s=nx.top(); //lay dinh o dau stack
        for(int i=1; i<=n; i++){
            if(a[s][i]==0)
                dem++;
        }
        if(dem!=n){
            for(int t=1; t<=n; t++){
                if(a[s][t]==1){
                    nx.push(t);
                    a[s][t]=a[t][s]=0;
                    break;
                }
            }
        }
        else{
            CE.push(s);
            nx.pop();
        }
    }
    cout<<"\n";
    while(!CE.empty()){
        cout<<CE.top()<<" ";
        CE.pop();
    }
}
int main(){
	cin>>n;
	cin>>s;
	for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++)
            cin>>a[i][j];
	}
    euler_cycle(s);
}
