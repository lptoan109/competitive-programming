/*
    This source code was written by lptoan11.
    Source of the problem: https://oj.uniedu.vn/problem/str12
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
const int MAXN = 1e5;
void FILENAME(const string file){
    if(file.size()){
        freopen((file+".INP").c_str(), "r", stdin);
        freopen((file+".OUT").c_str(), "w", stdout);
    }
}

string s, t;

void solve(){
    cin >> s >> t;
    int n = s.size();
    REP(i, n){
        if(s[i]=='?' || t[i]=='?') continue;
        if(s[i]!=t[i]){
            cout << 0 << "\n";
            return;
        }
    }
    cout << 1 << "\n";
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
