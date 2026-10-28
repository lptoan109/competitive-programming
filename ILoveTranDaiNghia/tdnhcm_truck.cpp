/*
    This source code was written by lptoan11.
    Source of the problem: https://oj.vnoi.info/problem/tdnhcm_truck
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
ll a[MAXN+5], kq;
ll check(ll t){
    int cnt = 1;
    ll temp = a[1];
    if(temp>t) return 0;
    FOR(i, 2, n){
        if(a[i]>t) return 0;
        temp+=a[i];
        if(temp>t){
            cnt++;
            temp = a[i];
        }
    }
    return cnt<=k;
}
void solve(){
    cin >> n >> k;
    ll l,r = 1e18;
    cin >> a[1];
    l = a[1];
    FOR(i,2, n){
        cin >> a[i];
        l = max(l, a[i]);
    }
    while(l<=r){
        ll m = l+(r-l)/2;
        if(check(m)){
            kq = m;
            r = m-1;
        }
        else l = m+1;
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

