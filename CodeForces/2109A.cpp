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

int n, a[MAXN+5];
void solve(){
    bool ok = true, ok1 = false;
    cin >> n;
    REP(i, n){
        cin >> a[i];
        if(a[i]==0) ok1 = true;
    }
    FOR(i, 1, n){
        if(i==1){
            if(a[i]==0 && a[i+1]==0) ok = false;
        }
        else if(i==n){
            if(a[i]==0 && a[i-1]==0) ok = false;
        }
        else if((a[i]==0 && a[i-1]==0) || (a[i]==0 && a[i+1]==0)) ok = false;
    }
    if(!ok || !ok1) cout << "YES\n";
    else cout << "NO\n";
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

