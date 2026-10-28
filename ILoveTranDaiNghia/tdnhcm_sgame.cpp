/*
    This source code was written by lptoan11.
    Source of the problem: https://oj.vnoi.info/problem/tdnhcm_sgame
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

int n, a[MAXN+5], b[MAXN+5], kq = 2e9;
int ln(int k){
    int l = 1, r= n, ans = 0;
    while(l<=r){
        int m = l+(r-l)/2;
        if(b[m]<=k){
            ans = b[m];
            l = m+1;
        }
        else r = m-1;
    }
    return ans;
}
int nn(int k){
    int l = 1, r= n, ans = 0;
    while(l<=r){
        int m = l+(r-l)/2;
        if(b[m]>=k){
            ans = b[m];
            r = m-1;
        }
        else l = m+1;
    }
    return ans;
}
void solve(){
    cin >> n;
    FOR(i, 1, n) cin >> a[i];
    FOR(i, 1, n) cin >> b[i];
    sort(a+1, a+1+n);
    sort(b+1, b+1+n);
    FOR(i, 1, n){
        kq = min({abs(ln(-a[i])+a[i]),abs(nn(-a[i])+a[i]), kq});
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

