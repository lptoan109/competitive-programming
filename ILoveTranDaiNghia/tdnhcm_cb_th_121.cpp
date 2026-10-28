/*
    This source code was written by lptoan11.
    Source of the problem: https://oj.vnoi.info/problem/tdnhcm_cb_th_121
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

string s, kq;

void solve(){
    cin >> s;
    int n = s.size();
    REP(i, n){
        kq+=s[i];
        int k = i+1;
        if(n%k==0){
            bool ok = true;
            FOR(j, 2, n/k){
                int t = 0;
                FOR(l, k*(j-1), k*j-1){
                    if(s[l]!=kq[t]){
                        ok = false;
                        break;
                    }
                    t++;
                }
            }
            if(ok){
                cout << kq;
                return;
            }
        }
    }
    cout << kq;
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    //FILENAME("");
    solve();
    return 0;
}

