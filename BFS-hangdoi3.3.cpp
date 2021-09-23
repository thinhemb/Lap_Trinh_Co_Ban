#include<iostream>
#include<queue>
#define max 100
using namespace std;

class dothi{
    int n, A[max][max];
    public:
    bool chuaxet[max];
    void readdata();
    void init();
    void queueBFS(int u);
};
void dothi::readdata(){
    cin>>n;
    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
            cin>>A[i][j];
}
void dothi::init(){
    for(int i=1; i<=n; i++)
        chuaxet[i]=true;
}
void dothi::queueBFS(int u){
    queue<int> hangdoi;
    chuaxet[u]=false;
    hangdoi.push(u);
    while(!hangdoi.empty()){
        int s=hangdoi.front(); 
        hangdoi.pop();
        cout<<s<<" ";
        for(int t=1; t<=n; t++){
            if((A[s][t]==1) && chuaxet[t]==true){
                hangdoi.push(t); 
                chuaxet[t]=false;
            }
        }
    }    
}
int main(){
    dothi g;
    g.readdata();
    g.init();
    cout<<"\n";
    g.queueBFS(1);
}










