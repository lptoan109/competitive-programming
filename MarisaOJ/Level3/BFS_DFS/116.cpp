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

int n, m, val[MAXN+5];
bool check[MAXN+5];
vector<int> adj[MAXN+5];
queue<int> que;
void bfs(int tar){
    que.clear();
    que.push(1);
    while(!que.empty()){
        int t = que.front();
        int v = val[t];
        que.pop_back();
        for(int i:adj[t]){
            if(i==tar){
                return v+1;
            }
            val[i] = v+1;
            que.push(i);
        }
    }
    return -1;
}
void solve(){
    cin >> n >> m;
    REP(i, m){
        int u, v;
        cin >> u >> v;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    FOR(i, 2, n){
        cout << bfs(i) << " ";
    }
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    //FILENAME();
    solve();
    return 0;
}

