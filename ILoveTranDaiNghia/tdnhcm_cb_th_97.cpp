/*
    This source code was written by lptoan11.
    Source of the problem: https://oj.vnoi.info/problem/tdnhcm_cb_th_97
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
bool check(int k){
    if(k==2 || k==3) return true;
    if(k<2 || k%2==0 || k%3==0) return false;
    for(int i = 5; i*i<=k; i+=6){
        if(k%i==0 || k%(i+2)==0) return false;
    }
    return true;
}
int cal(int k){
    int kq = 0;
    while(k>0){
        kq+=(k%10);
        k/=10;
    }
    return kq;
}
int n;

void solve(){
    cin >> n;
    if(n<=3 || check(n)){
        cout << 0 << "\n";
        return;
    }
    int val = cal(n), t = 0;
    for(int i = 2; i*i<=n; ++i){
        if(n%i==0){
            while(n%i==0){
                t+=cal(i);
                n/=i;
            }
        }
    }
    if(n>1){
        t+=cal(n);
    }
    if(t==val) cout << 1;
    else cout << 0;
    cout << "\n";
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


