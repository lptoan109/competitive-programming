/*
    This source code was written by lptoan11.
    Source of the problem: https://cses.fi/problemset/task/1667
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

vector<int> adj[MAXN+5], kqt;
bool check[MAXN+5];
int n, m, temp[MAXN+5];
queue<int> que;
bool bfs(){
    que.push(1);
    while(!que.empty()){
        int u = que.front();
        check[u] = true;
        que.pop();
        for(int v:adj[u]){
            if(!check[v]){
                temp[v] = u;
                check[v] = true;
                if(v==n){
                    while(v!=1){
                        kqt.pb(v);
                        v = temp[v];
                    }
                    return true;
                }
                que.push(v);
            }
        }
    }
    return false;
}
void solve(){
    cin >> n >> m;
    FOR(i, 1, m){
        int u,v;
        cin >> u >> v;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    if(!bfs()) cout  << "IMPOSSIBLE";
    else{
        cout << kqt.size()+1 << "\n";
        reverse(all(kqt));
        cout << 1 << " ";
        for(int i:kqt) cout << i << " ";
    }
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    //FILENAME("");
    solve();
    return 0;
}

