/*
    This source code was written by lptoan11.
    Source of the problem: https://oj.vnoi.info/problem/tdnhcm_cb_92
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
int cal(int k){
    int t = 0;
    for(int i = 1; i*i<=k; ++i){
        if(k%i==0){
            t+=i;
            if(k/i!=i) t+=(k/i);
        }
    }
    return t;
}
int n;

void solve(){
    cin >> n;
    int kq = 0;
    for(int i = 1; i*i<=n; ++i){
        if(n%i==0){
            kq+=cal(i);
            if(n/i!=i) kq+=cal(n/i);
        }
    }
    cout << kq << "\n";
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

