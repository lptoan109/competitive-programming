/*
    This source code was written by lptoan11.
    Source of the problem: https://oj.vnoi.info/problem/tdnhcm_cb_th_bai33
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
ll cnt13(int k){
    ll n = k/13;
    ll t = (1LL*n*(13+(1LL*n*13)))/2LL;
    return (1LL*(1+k)*k)/2LL - t;
}
int l, r;
void solve(){
    cin >> l >> r;
    if(r-l+1<(int)1e7){
        ll t = 0;
        FOR(i, l, r){
            if(i%13!=0) t+=i;
        }
        cout << t;
    }
    else cout << cnt13(r)-cnt13(l-1);
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    //FILENAME("");
    solve();
    return 0;
}

