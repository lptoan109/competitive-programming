/*
    This source code was written by lptoan11.
    Source of the problem: https://atcoder.jp/contests/abc472/tasks/abc472_d
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
const int MAXN = 5e5;
void FILENAME(const string file){
    if(file.size()){
        freopen((file+".INP").c_str(), "r", stdin);
        freopen((file+".OUT").c_str(), "w", stdout);
    }
}

map<pair<int, int>, int> type;
map<pair<int, int>, bool> check;
int dd[MAXN+5], dc[MAXN+5], n, m, kq;
vector<pair<int, int>> ve;

void bfs(int )
void solve(){
    cin >> m >> n;
    FOR(i,1, m){
        string s;
        cin >> s;
        FOR(j,1, n){
            if(s[j-1]=='#'){
                type[{i, j}] = 1;
                dd[i] = 1;
                dc[j] = 1;
            }
        }
    }
    FOR(i,1, m){
        FOR(j, 1, n){
            if(!dd[i] && !dc[j]){
                type[{i, j}] = 2;
                ve.push_back({i, j});
                check[{i, j}] = true;
                kq++;
            }
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

