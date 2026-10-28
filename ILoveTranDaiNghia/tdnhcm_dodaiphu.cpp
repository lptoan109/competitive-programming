/*
    This source code was written by lptoan11.
    Source of the problem: https://oj.vnoi.info/problem/tdnhcm_dodaiphu
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
const int MAXN = 2e6;
void FILENAME(const string file){
    if(file.size()){
        freopen((file+".INP").c_str(), "r", stdin);
        freopen((file+".OUT").c_str(), "w", stdout);
    }
}

int n;
ll kq;
pair<ll, ll> a[MAXN+5];
void solve(){
    cin >> n;
    FOR(i, 1, n){
        cin >> a[i].fi;
    }
    FOR(i, 1, n){
        int t;
        cin >> t;
        a[i].se = a[i].fi+t;
    }
    sort(a+1, a+1+n);
    ll cul = a[1].fi, cur = a[1].se;
    FOR(i,2, n){
        if(a[i].fi<=cur){
            cur = max(cur, a[i].se);
        }
        if(cur<a[i].fi){
            kq+=(cur-cul);
        }
    }
    kq+=(cur-cul);
    cout << kq;
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    //FILENAME("");
    solve();
    return 0;
}

