#include<bits/stdc++.h>
using namespace std;
int n,check[100]={},A[100][100],s,t;
vector<int> df,bf;
void DFS(){
    stack<int> B;
    B.push(s);
    check[s]=1;
    int truoc[100]={};
    while(!B.empty()){
        int i=B.top();
        B.pop();
        for(int j=1;j<=n;j++){
            if(!check[j]&&A[i][j]){
                check[j]=1;
                B.push(i);
                B.push(j);
                truoc[j]=i;
                break;
            }
        }
    }
    for(int i=1;i<=n;i++) check[i]=0;
    if(truoc[t]==0){
        cout << "no path";
        return;
    }
    cout<< "DFS path:";
    df.push_back(t);
    while(df[df.size()-1]!=s)
        df.push_back(truoc[df[df.size()-1]]);
    for(int i=0;i<df.size();i++)
        cout << " " << df[i];
        cout << endl;
}
void BFS(){
    queue<int> B;
    B.push(s);
    check[s]=1;
    int truoc[100]={};
    while(!B.empty()){
        int i=B.front();
        B.pop();
        for( int j=1;j<=n;j++){
            if(!check[j] && A[i][j]){
                check[j]=1;
                B.push(j);
                truoc[j]=i;
            
            }
        }
    }
    if(truoc[t]==0) return;
    cout << "BFS path:";
    bf.push_back(t);
    while(bf[bf.size()-1]!=s)
        bf.push_back(truoc[bf[bf.size()-1]]);
    for(int i=0;i<bf.size();i++)
        cout << " "<< bf[i];
        cout << endl;
        
}
int main(){
    cin >> n >> s >> t;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)   cin >> A[i][j];
        DFS();
        BFS();
}
