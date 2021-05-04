#include <bits/stdc++.h>

using namespace std;

const int maxn = 1e5+5;

string s;
int m;
vector <int> ans;

bool check(int cl, int back, int turn)
{
    if (turn == m)  return 1;
    for (int i=1; i<= 10; i++)
        if (s[i] == '1' and i > cl and i != back)
        {

            if (check(i - cl, i, turn + 1))
            {
                ans.push_back(i);
                
                return 1;
            }
        }
    return 0;
}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    cin >> s;
    s = ' ' + s;
    cin >> m;
    if (check(0, 0, 0) == 1)
    {
        cout <<"YES\n";
        for (int i=ans.size() - 1; i>=0; i--) 
        cout << ans[i] << ' ';
    }
    else
        cout << "NO";

}
