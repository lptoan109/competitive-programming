/*
    This source code was written by lptoan11.
    Source of the problem: https://oj.vnoi.info/problem/tdnhcm_cb_th_98
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
const int MAXN = 1e6;
void FILENAME(const string file){
    if(file.size()){
        freopen((file+".INP").c_str(), "r", stdin);
        freopen((file+".OUT").c_str(), "w", stdout);
    }
}

bool check[MAXN+5];
void pre(){
    check[0] = check[1] = true;
    for(int i = 2; i*i<=MAXN; ++i){
        if(!check[i]){
            for(int j = i*i; j<=MAXN; j+=i) check[j] = true;
        }
    }
}
void solve(){
    int kq, x;
    kq = x = 0;
    cin >> x;
    for(int i = 2; i*i<=x; ++i){
        if(x%i==0){
            if(check[i] && x/i!=i && check[x/i]){
                cout << 0 << "\n";
                return;
            }
            if(!check[i]) kq++;
            if(i!=x/i && !check[x/i]) kq++;
        }
    }
    if(kq==3) cout << 1;
    else cout << 0;
    cout << "\n";
}
int t;
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    //FILENAME("");
    pre();
    cin >> t;
    while(t--) solve();
    return 0;
}

