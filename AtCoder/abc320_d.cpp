/*
    This source code was written by lptoan11.
    Source of the problem: https://atcoder.jp/contests/abc320/tasks/abc320_d
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
struct ds{
    int b,x, y;
};
vector<ds> adj[MAXN+5];
pair<int, int> kq[MAXN+5];
bool visit[MAXN+5];
int n, m;
queue<ds> que;
void bfs(){
    que.push({1,1 ,1);
    visit[1] = 1;
    while(!que.empty()){
        ds u = que.back();
        que.pop();
        for(ds v:adj[u]){
            visit[v.b] = 1;
            kq[v.b] = {}

        }
    }
}
void solve(){
    cin >> n >> m;
    FOR(i, 1, m){
        int a, b, x, y;
        cin >> a >> b >> x >> y;
        adj[a].pb({b, x, y});
        adj[b].pb({a, x*-1, y*-1});
    }
    bfs();
    FOR(i, 1, n){
        if(!visit[i]) cout << "undecidable";
        else cout << kq[i].fi << " " << kq[i].se;
        cout << "\n";
    }
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    //FILENAME("");
    solve();
    return 0;
}
