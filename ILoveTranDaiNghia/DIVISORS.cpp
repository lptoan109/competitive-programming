/*
    This source code was written by lptoan11.
    Source of the problem: https://oj.vnoi.info/problem/tdnhcm_cb_th_82
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

int n;
void solve(){
    ll t, che, kq = 0;
    cin >> n;
    cin >> t;
    che = t;
    FOR(i, 2, n){
        ll te;
        cin >> te;
        t = min(t, te);
        che = __gcd(te, che);
    }
    for(ll i = 1; i*i<=t; ++i){
        if(che%i==0){
            kq++;
        }
        if(t/i!=i && che%(t/i)==0) kq++;
    }
    cout << kq << "\n";
}
int q;
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    //FILENAME("");
    cin >> q;
    while(q--) solve();
    return 0;
}

