/*
    This source code was written by lptoan11.
    Source of the problem: https://oj.vnoi.info/problem/tdnhcm_cb_th_96
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

int n, k;

void solve(){
    cin >> n >> k;
    int t = 0;
    for(int i = 2; i*i<=n; ++i){
        if(n%i==0){
            while(n%i==0){
                t++;
                n/=i;
                if(t==k){
                    cout << i << "\n";
                    return;
                }
            }
        }
    }
    if(n>1 && t+1==k){
        cout << n << "\n";
        return;
    }
    cout << -1 << "\n";
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

