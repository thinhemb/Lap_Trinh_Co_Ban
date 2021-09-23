#include<iostream>
#define MAX 100
using namespace std;

class Dothi{   
    int n;			   	// so dinh cua do thi
    int A[MAX][MAX];	//ma tran ke
public:
    bool chuaxet[MAX];
    void readdata();
    void init();
    void recursiveDFS(int u);
};
void Dothi::readdata(){
    cout<<"\n nhap so dinh: n= "; cin>>n;
    cout<<"\n nhap ma tran ke: \n";
    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
            cin>>A[i][j];
}
void Dothi::init(){
    for(int i=1; i<=n; i++)
        chuaxet[i]=true;
}
void Dothi::recursiveDFS(int u){
    cout<<u<<" ";
    chuaxet[u]=false;
    for(int v=1; v<=n; v++)
        if(A[u][v]==1 && chuaxet[v]==true)
            recursiveDFS(v);
}
int main(){
    Dothi G;
    G.readdata();
    G.init();
    cout<<"\n";
    G.recursiveDFS(1);
}
