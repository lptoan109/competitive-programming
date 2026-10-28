/*
    This source code was written by lptoan11.
    Source of the problem: https://oj.vnoi.info/problem/tdnhcm_tuongdong
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
const int MAXN = 2e6;
void FILENAME(const string file){
    if(file.size()){
        freopen((file+".INP").c_str(), "r", stdin);
        freopen((file+".OUT").c_str(), "w", stdout);
    }
}

ll rad[MAXN+5], l, r, kq;
ll cnt[MAXN+5];
void solve(){
    FOR(i, 1, MAXN){
        rad[i] = 1;
    }
    for(ll i = 2; i*i<=MAXN; ++i){
        if(rad[i]==1){
            for(ll j = i; j<=MAXN; j+=i){
                rad[j] *=i;
            }
        }
    }
    cin >> l >> r;
    FOR(i, l , r){
        cnt[rad[i]]++;
    }
    FOR(i, 1, MAXN){
        kq+=1LL*cnt[i]*(cnt[i]-1)/2LL;
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

