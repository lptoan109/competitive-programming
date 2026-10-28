/*
    This source code was written by lptoan11.
    Source of the problem: https://codeforces.com/contest/2244/problem/A
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
const int MAXN = 1e5;
void FILENAME(const string file){
    if(file.size()){
        freopen((file+".INP").c_str(), "r", stdin);
        freopen((file+".OUT").c_str(), "w", stdout);
    }
}

int n;
string s;
void solve(){
    cin >> n >> s;
    int cur, kq;
    cur = kq = 0;
    REP(i, n){
        if(s[i]=='*'){
            kq = max(kq, cur);
            cur = 0;
        }
        else cur++;
    }
    kq = max(kq, cur);
    cout << ceil(1.0*kq/2.0) << "\n";
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

