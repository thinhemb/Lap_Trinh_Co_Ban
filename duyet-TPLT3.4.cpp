#include<bits/stdc++.h>
#define max 100
using namespace std;

class dothi{
  int n;
  int A[max][max];
  public:
  bool chuaxet[max];
  void readdata();
//  void init();
  void queueBFS(int v);
  void duyet_TPLT();
};
void dothi::readdata(){
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++)
            cin>>A[i][j];
        chuaxet[i]=false;
    }
}
/*void dothi::init(){
    for(int i=1; i<=n; i++)
        chuaxet[i]=true;
}*/
void dothi::queueBFS(int v){
    queue<int> hangdoi;
    chuaxet[v]=true;
    hangdoi.push(v);
    while(!hangdoi.empty()){
        int s=hangdoi.front();
        hangdoi.pop();
        for(int t=1; t<=n; t++){
            if(A[s][t]==1 && chuaxet[t]==false){
                hangdoi.push(t);
                chuaxet[t]=true;
            }
        }
    }
}
void dothi::duyet_TPLT(){
    int soTPLT=0;
    for(int u=1; u<=n; u++){
        if(chuaxet[u]==false){
            soTPLT=soTPLT+1;
            queueBFS(u);
        }
    }
    cout<<soTPLT<<"\n";
}
int main(){
    dothi g;
    g.readdata();
    g.duyet_TPLT();
}











