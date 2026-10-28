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
const int MAXN = 2e5;
void FILENAME(const string file){
    if(file.size()){
        freopen((file+".INP").c_str(), "r", stdin);
        freopen((file+".OUT").c_str(), "w", stdout);
    }
}

int n, a[MAXN+5];
void solve(){
    cin >> n;
    FOR(i, 1, n) cin >> a[i];
    ll t = 0;
    FOR(i, 1, n){
        if(a[i]<i){
            t-=(i-a[i]);
            if(t<0){
                cout << "NO\n";
                return;
            }
        }
        if(a[i]>i){
            t+=(a[i]-i);
        }
    }
    cout << "YES\n";
    FOR(i, 1, n) a[i] = 0;
}
int t;
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    //FILENAME("");
    cin >> t;
    while(t--) solve();
    return 0;
}
