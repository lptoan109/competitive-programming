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
#define REP(i, n) for(int i = 0; i<(n); ++i)
#define fi first
#define se second
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
const int mod = 1e9+7;
const int MAXN = 50;
void FILENAME(const string file){
    if(file.size()){
        freopen((file+".INP").c_str(), "r", stdin);
        freopen((file+".OUT").c_str(), "w", stdout);
    }
}
bool check(ll k){
    if(k==2 || k==3) return 1;
    if(k<2 || k%2==0 || k%3==0) return 0;
    for(ll i = 5; i*i<=k; i+=6){
        if(k%i==0 || k%(i+2)==0) return 0;
    }
    return 1;
}
ll m;
ll fi[MAXN+5];
void solve(){
    fi[1] = 1;
    fi[2] = 1;
    FOR(i, 3, MAXN){
        fi[i] = fi[i-1] + fi[i-2];
    }
    cin >> m;
    FORD(i, MAXN, 1){
        if(fi[i]<m && check(fi[i])){
            cout << fi[i];
            return;
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

