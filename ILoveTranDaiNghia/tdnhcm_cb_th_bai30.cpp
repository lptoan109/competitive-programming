/*
    This source code was written by lptoan11.
    Source of the problem: https://oj.vnoi.info/problem/tdnhcm_cb_th_bai30
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

int n, l[MAXN+5], r[MAXN+5], t = 1;;
void solve(){
    cin >> n;
    FOR(i, 1, n){
        cin >> l[i] >> r[i];
    }
    FOR(i, 1, n){
        if(t<l[i]) t = l[i];
        if(t>r[i]) cout << 0;
        else{
            cout << t;
            t++;
        }
        cout << " ";
    }
    cout << "\n";
    FOR(i, 1, n){
        l[i] = 0;
        r[i] = 0;
    }
    t = 1;
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

