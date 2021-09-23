#include<bits/stdc++.h>
#define max 100
using namespace std;

class dothi{
    int n, a[max][max];
    public:
    bool chuaxet[max];
    void readdata();
    void init();
    void DFS(int u);
    void canhcau();
};
void dothi::readdata(){
    cin>>n;
    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
            cin>>a[i][j];
}
void dothi::init(){
    for(int i=1; i<=n; i++)
        chuaxet[i]=true;
}
void dothi::DFS(int u){
    chuaxet[u]=false;
    for(int i=1; i<=n; i++)
        if(a[u][i]==1 && chuaxet[i]==true)
            DFS(i);
}
void dothi::canhcau(){
    init();
    for(int i=1; i<=n; i++){
        for(int j=i+1; j<=n; j++){
            if(a[i][j]==1){
                a[i][j]=0; a[j][i]=0; //xoa canh (i, j)
                DFS(1);
                //kiem tra xem dfs(1)==V
                for(int k=1; k<=n; k++)
                    if(chuaxet[k]==true){
                        cout<<i<<" "<<j<<endl;
                        break;
                    }
                a[i][j]=1; a[j][i]=1; //kiem tra canh i, j
                init();
            }
        }
    }
}
int main(){
    dothi g;
    g.readdata();
    g.canhcau();
}
