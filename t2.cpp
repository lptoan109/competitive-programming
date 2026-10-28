/*
    This source code was written by lptoan11.
    Source of the problem:
          _
        ('v')
       //-=-\\
      (\_,,,_/)
       //   \\
    ROAD TO VOI 2728
*/
#include<bits/stdc++.h>
using namespace std;
#define FOR(i, a, b) for(int i = (a); i<=(b); ++i)
#define FORD(i, a, b) for(int i = (a); i>=(b); --i)
#define REP(i, n) for(int i = 0; i<(n); ++i)
#define fi first
#define se second
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
const int mod = 1e9+7;
const int MAXN = 1e3;
void FILENAME(const string file){
    if(file.size()){
        freopen((file+".INP").c_str(), "r", stdin);
        freopen((file+".OUT").c_str(), "w", stdout);
    }
}

int n, a[MAXN+5][MAXN+5], q;
ll pf[MAXN+5][MAXN+5];

void solve(){
    cin >> n >> q;
    FOR(i, 1, n){
        string s;
        cin >> s;
        REP(j, n){
            if(s[j]=='*') a[i][j+1]++;
        }
    }
    FOR(i, 1, n){
        FOR(j, 1, n) pf[i][j] =  1LL*a[i][j]+pf[i-1][j]+pf[i][j-1]-pf[i-1][j-1];
    }
    while(q--){
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        cout << pf[x2][y2] - pf[x1-1][y2] - pf[x2][y1-1] + pf[x1-1][y1-1] << "\n";
    }
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    //FILENAME("");
    solve();
    return 0;
}

