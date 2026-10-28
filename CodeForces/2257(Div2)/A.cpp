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
const int MAXN = 1e5;
void FILENAME(const string file){
    if(file.size()){
        freopen((file+".INP").c_str(), "r", stdin);
        freopen((file+".OUT").c_str(), "w", stdout);
    }
}

int m, n;
char cnt[256];
void solve(){
    memset(cnt, 0, sizeof(cnt));
    cin >> n >> m;
    REP(i, n){
        string t;
        cin >> t;
        cnt[t[0]]++;
    }
    REP(i, m){
        string t;
        cin >> t;
        int nt = t.size();
        FOR(j, 0, nt-1){
            if(cnt[char(t[j]+32)]<=0){
                cout << "NO" << "\n";
                return;
            }
        }
    }
    cout << "YES" << "\n";
}
int t;
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    //FILENAME("");
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}

