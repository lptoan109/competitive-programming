/*
    This source code was written by lptoan11.
    Source of the problem: https://oj.vnoi.info/problem/tdnhcm_doanphu
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
bool compare(pair<int, int> a, pair<int, int> b){
    if(a.fi==b.fi) return a.se>b.se;
    return a.fi<b.fi;
}
int n, kq = -2e9, kql, kqr;
vector<pair<int, int>> a;

void solve(){
    cin >> n;
    FOR(i, 1, n){
        int t;
        cin >> t;
        a.pb({t, 1});
    }
    FOR(i, 1, n){
        int t;
        cin >> t;
        a.pb({t+1, -1});
    }
    sort(all(a), compare);
    int cur = 0;
    n = a.size();
    bool ok = false;
    for(int i= 0; i<n; ++i){
        cur+=a[i].se;
        if(cur>kq){
            kq = cur;
            ok = true;
            kql = a[i].fi;
        }
        if(a[i].se==-1 && ok){
            ok = false;
            kqr = a[i].fi-1;
        }
    }
    cout << kq << "\n" << kql << " " << kqr;
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    //FILENAME("");
    solve();
    return 0;
}
