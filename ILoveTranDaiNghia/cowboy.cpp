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
const int MAXN = 2e5;
void FILENAME(const string file){
    if(file.size()){
        freopen((file+".INP").c_str(), "r", stdin);
        freopen((file+".OUT").c_str(), "w", stdout);
    }
}

ll att, btt, ctt, n, kq;
bool check(ll k){
    ll nt = n,a = att, b = btt, c = ctt;
    if(a<k){
        nt-=(k-a)*2;
    }
    if(b<k){
        nt-=(k-b)*2;
    }
    if(c<k){
        nt-=(k-c)*2;
    }
    if(a>k){
        nt+=(a-k);
    }
    if(b>k){
        nt+=(b-k);
    }
    if(c>k){
        nt+=(c-k);
    }
    return nt>=0;
}
void solve(){
    cin >> att >> btt >> ctt >> n;
    ll l = 0, r = 2e15;
    while(l<=r){
        ll m = l+(r-l)/2;
        if(check(m)){
            kq = m;
            l = m+1;
        }
        else r = m-1;
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

