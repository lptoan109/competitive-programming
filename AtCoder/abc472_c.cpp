/*
    This source code was written by lptoan11.
    Source of the problem: https://atcoder.jp/contests/abc472/tasks/abc472_c
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
#define ld long double
#define pb push_back
#define pii pair<int, int>
#define pll pair<long long, long long>
#define umii unordered_map<int, int>
#define umll unordered_map<long long, long long>
#define all(x) (x).begin(), (x).end()
#define cerr if(true)cerr
const int mod = 1e9+7;
const int MAXN = 2e5;
void FILENAME(const string file){
    if(file.size()){
        freopen((file+".INP").c_str(), "r", stdin);
        freopen((file+".OUT").c_str(), "w", stdout);
    }
}

int n, m;
ll a[MAXN+5], k, t;
void solve(){
    cin >> n >> m >> k;
    FOR(i,1, n) cin >> a[i];
    FOR(i, 1, n){
        if(i>m) t-=a[i-m];
        if(t+a[i]<=k){
            cout << "Yes\n";
            t+=a[i];
        }
        else{
            cout << "No\n";
            a[i] = 0;
        }
    }
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    //FILENAME("");
    solve();
    return 0;
}

