/*
    This source code was written by lptoan11.
    Source of the problem: https://atcoder.jp/contests/abc304/tasks/abc304_d
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
const int MAXN = 2e5;
void FILENAME(const string file){
    if(file.size()){
        freopen((file+".INP").c_str(), "r", stdin);
        freopen((file+".OUT").c_str(), "w", stdout);
    }
}

int w, h, n, p[MAXN+5], q[MAXN+5], a[MAXN+5], b[MAXN+5], na, nb, m = 2e9, M;
map<pair<int, int>, int> kq;
void solve(){
    cin >> w >> h >> n;
    FOR(i, 1, n){
        cin >> p[i] >> q[i];
    }
    cin >> na;
    FOR(i, 1, na){
        cin >> a[i];
    }
    cin >> nb;
    FOR(i, 1, nb) cin >> b[i];
    a[na+1] = w;
    b[nb+1] = h;
    FOR(i, 1, n){
        int x = *lower_bound(a+1, a+2+na, p[i]);
        int y = *lower_bound(b+1, b+2+nb, q[i]);
        kq[{x, y}]++;
    }
    for(auto &i:kq){
        M = max(i.se, M);
        m = min(i.se, m);
    }
    if((ll)kq.size()<1LL*(na+1)*(nb+1)) cout << 0 << " ";
    else cout << m << " ";
    cout << M;
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    //FILENAME("");
    solve();
    return 0;
}

