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
#define REP(i, n) for(int i = 1; i<=(n); ++i)
#define fi first
#define se second
#define ll long long
#define ld long double
#define pb push_back
#define pii pair<int, int>
#define pll pair<long long, long long>
#define umii unordered_map<int, int>
#define umll unordered_map<long long, long long>
#define all(x) (x).begin(), (x).end()
#define cerr if(true)cerr
const int mod = 1e9+7;
const int MAXN = 1e3;
void FILENAME(const string file){
    if(file.size()){
        freopen((file+".INP").c_str(), "r", stdin);
        freopen((file+".OUT").c_str(), "w", stdout);
    }
}

int n, m, a[MAXN+5], bea[MAXN+5], ver[MAXN+5];

void solve(){
    cin >> n >> m;
    REP(i, n+1) a[i] = 0;
    REP(i, n) cin >> a[i];
    REP(i, n-1) bea[i] = a[i]-a[i+1]+1;
    bea[n] = a[n];
    REP(i, n+1) a[i] = 0;
    REP(i, m) cin >>  a[i];
    REP(i, m-1) ver[i] = a[i]-a[i+1]+1;
    ver[m] = a[m];
    ll cur1, cur2;
    cur1 = cur2 = 0;
    REP(i, n) cur1+=bea[i];
    REP(i, m) cur2+=ver[i];
    //cout << cur1 << " " << cur2 << " _ ";
    if(cur1<cur2) cout << 2;
    else cout << 1;
    cout << '\n';
}
int t;
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    //FILENAME("");
    cin >> t;
    while(t--){
        //cout << t << " : \n";
        solve();
    }
    return 0;
}

