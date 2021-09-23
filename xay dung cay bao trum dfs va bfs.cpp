#include <bits/stdc++.h>
#define Max 100

using namespace std;

class Dothi {
    int n;
    int a[Max][Max];
    public:
    bool chuaXet[Max];
    int root;
    void readData();
    void init();
    void DFS(int u);
    void BFS(int u);
};

void Dothi::readData() {
    cin >> n >> root;
    for (int i=1; i<=n; i++) 
        for (int j=1; j<=n; j++) cin >> a[i][j];
}

void Dothi::init() {
    for (int i=1; i<=n; i++) chuaXet[i] = true;
}

void Dothi::DFS(int u) {
    chuaXet[u] = false;
    for (int v=1; v<=n; v++) {
        if (a[u][v] == 1 && chuaXet[v] == true) {
            cout << u << " " << v << endl;
            DFS(v);
        }
    }
}
void Dothi::BFS(int u) {
    queue <int> q;
    q.push(u); chuaXet[u] = false;
    while (q.size()) {
        int tmp = q.front(); q.pop();
        for (int i=1; i<=n; i++) {
            if (a[tmp][i] == 1 && chuaXet[i] == true) {
                q.push(i);
                chuaXet[i] = false;
                cout << tmp << " " << i << endl;
            }
        }
    }
}

int main() {
    Dothi g;
    g.readData(); g.init(); 
    //cout << "output=" << endl;
    cout << "DFS tree" << endl;
    g.DFS(g.root); g.init();
    cout << "BFS tree" << endl;
    g.BFS(g.root);
}
