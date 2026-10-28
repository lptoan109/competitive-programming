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

int n, m, a[MAXN+5][MAXN+5], val[MAXN+5][MAXN+5], dd[4] = {-1, 0, 1, 0}, dn[4] = {0, 1, 0, -1};
bool check[MAXN+5][MAXN+5];
queue<pair<int, int>> que;
void bfs(int it, int jt){
    check[it][jt] = true;
    que.push({it, jt});
    while(!que.empty()){
        it = que.back().fi;
        jt = que.back().se;
        que.pop();
        FOR(i, 0, 3){
            FOR(j, 0, 3){
                int in = it+dd[i];
                int jn = jt+dn[j];
                if(a[in][jn]!=0 && !check[in][jn]){
                    val[in][jn] =max(val[it][jt]+a[in][jn], val[in][jn]);
                    que.push({in, jn});
                }
                check[in][jn] = true;
            }
        }
    }
}
void solve(){
    cin >> n >> m;
    REP(i, n){
        REP(j, m){
            cin >> a[i][j];
            val[i][j] = a[i][j];
        }
    }
    REP(i, n){
        REP(j, m){
            if(a[i][j]!=0 && !check[i][j]) bfs(i, j);
        }
    }
    int kq = 0;
    REP(i, n){
        REP(j, m) kq = max(val[i][j], kq);
    }
    cout << kq << "\n";
    REP(i, n){
        REP(j, m){
            a[i][j] = 0;
            val[i][j] = 0;
            check[i][j] = false;
        }
    }
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
