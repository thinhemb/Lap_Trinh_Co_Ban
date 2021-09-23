#include<iostream>
#include<stack>
#define max 100
using namespace std;

class dothi{
  int n, A[max][max];
  public:
  bool chuaxet[max];
  void readdata();
  void init();
  void stackDFS(int u);
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
void dothi::stackDFS(int u){
    stack<int> nx;      //khoi tao stack la rong
    nx.push(u);         //dua dinh u vao stack
    cout<<u<<" ";		//duyet dinh u
    chuaxet[u]=false;	//xac nhan da duyet u
    while(!nx.empty()){
        int s=nx.top();	//lay 1 dinh o dau stack
        nx.pop();
        for(int t=1; t<=n; t++){
            if(A[s][t]==1 && chuaxet[t]==true){	//neu chua duyet t
                cout<<t<<" ";					//t da duoc duyet
                chuaxet[t]=false;				// dua s vao stack
                nx.push(s);						//dua t vao stack
                nx.push(t);						//chi lay 1 dinh t
                break;
            }
        }
    }
}
int main(){
    dothi g;
    g.readdata();
    g.init();
    cout<<"\n";
    g.stackDFS(1);
}





