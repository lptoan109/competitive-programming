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

int q;
ll fi[MAXN+5];
void solve(){
    fi[1] = 1;
    fi[2] = 1;
    FOR(i, 3, MAXN){
        fi[i] = fi[i-1] + fi[i-2];
    }
    cin >> q;
    while(q--){
        ll n;
        cin >> n;
        FOR(i, 0, MAXN){
            if(fi[i]==n){
                cout << i << "\n";
                goto boqua;
            }
        }
        cout << "-1\n";
        boqua:


    }
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    //FILENAME("");
    solve();
    return 0;
}

