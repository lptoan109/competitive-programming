/*
    This source code was written by lptoan11.
    Source of the problem: https://atcoder.jp/contests/abc367/tasks/abc367_a
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

int a, b, c;
bool ok = true;
void solve(){
    cin >> a >> b >> c;
    int t = b;
    while(t!=a){
        t++;
        if(t==25) t = 0;
        if(t==c) break;
        if(t==a) ok = false;
    }
    if(ok) cout << "Yes";
    else cout << "No";
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    //FILENAME("");
    solve();
    return 0;
}

