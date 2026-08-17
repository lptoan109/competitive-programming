#include <bits/stdc++.h>
using namespace std;
const int MAXN = 5e3;
int n, m;
long long pf[MAXN+5][MAXN+5];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    for(int i = 1; i<=n; ++i){
        for(int j = 1; j<=m; ++j){
            cin >> pf[i][j];
            pf[i][j] += pf[i-1][j] + pf[i][j-1] - pf[i-1][j-1];
        }
    }
    return 0;
}
