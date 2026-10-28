/*
    This source code was written by lptoan11.
    Source of the problem: https://oj.vnoi.info/problem/tdnhcm_cb_th_bai7
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

int n, t[MAXN+5], r[MAXN+5];

void solve(){
    int kq = 0;
    cin >> n;
    FOR(i, 1, n) cin >> r[i];
    FOR(i, 1, n) cin >> t[i];
    sort(r+1, r+1+n);
    sort(t+1, t+1+n);
    FOR(i, 1, n) kq = max(kq, abs(r[i]-t[i]));
    cout << kq << "\n";
    FOR(i, 1, n){
        r[i] = 0;
        t[i] = 0;
    }
}
int q;
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    FILENAME("MICES");
    cin >> q;
    while(q--){
        solve();
    }
    return 0;
}

