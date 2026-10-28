/*
    This source code was written by lptoan11.
    Source of the problem: https://oj.vnoi.info/problem/tdnhcm_demcuaso
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
#define int long long
const int mod = 1e9+7;
const int MAXN = 2e5;
void FILENAME(const string file){
    if(file.size()){
        freopen((file+".INP").c_str(), "r", stdin);
        freopen((file+".OUT").c_str(), "w", stdout);
    }
}

int n;
pair<int, int> a[MAXN+5];
set<pair<int, int>> s;
ll kq;
void solve(){
    cin >> n;
    FOR(i, 1, n) cin >> a[i].fi;
    FOR(i, 1, n) cin >> a[i].se;
    FOR(i, 1, n){
        s.insert({a[i].fi, a[i].se});
    }
    FOR(i, 1, n){
        FOR(j,1 , n){
            if(a[i].fi < a[j].fi && a[i].se < a[j].se){
                if(s.count({a[i].fi, a[j].se}) && s.count({a[j].fi, a[i].se})) kq++;
            }
        }
    }
    cout << kq;
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    //FILENAME("");
    solve();
    return 0;
}

