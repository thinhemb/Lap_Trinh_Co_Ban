#include<iostream>
#include<vector>
#include<algorithm>
#define MAX 100
 
using namespace std;
 
int n;
int arr[MAX][MAX];
int isUsed[MAX];
vector<int> myVector;
 
void DFS(int i){
    isUsed[i+1]=1;
    myVector.push_back(i+1);
    
    for(int j(0);j<n;j++) if(isUsed[j+1]==0 and arr[i][j]==1) {
        DFS(j);
    }
}
 
bool isEqual(int u){
    if(myVector.size()!=n-1) return false;
    return true;
}
void duyetTru(int u){
    myVector.clear();
    for(int i(0);i<=n;i++) isUsed[i]=0;
    
    isUsed[u+1]=1;
    
    int v;
    if(u>0) v=u-1;
    else v= u+1;
    
    DFS(v);
    if(isEqual(u)) return;
    else cout<<u+1<<' ';
}
main(){
    cin>>n;
    for(int i(0);i<n;i++) 
        for(int j(0);j<n;j++) cin>>arr[i][j];
        
    for(int i(0);i<n;i++){
        duyetTru(i);
    }
    cout<<'\n';
}
