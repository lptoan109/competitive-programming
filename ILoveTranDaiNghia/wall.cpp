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
#define int long long
const int mod = 1e9+7;
const int MAXN = 2e5;
void FILENAME(const string file){
    if(file.size()){
        freopen((file+".INP").c_str(), "r", stdin);
        freopen((file+".OUT").c_str(), "w", stdout);
    }
}

int n,m,a[MAXN+5], b[MAXN+5], t[MAXN+5];
bool check(int k){
    int cur = 1;
    FOR(i, 1, n) t[i] = a[i];
    FOR(i, 1, n){
        if(a[i]<k){
            while(cur<=n&&t[i]+b[cur]<k){
                cur++;
            }
            t[i]+=b[cur];
            cur++;
        }
    }
    FOR(i, 1, n){
        if(t[i]<k) return false;
    }
    return true;
}
int kq;
void solve(){
    cin >> n;
    FOR(i, 1, n) cin >> a[i];
    cin  >> m;
    FOR(i, 1, m) cin >> b[i];
    int l = 0, r= 2e18;
    while(l<=r){
        int m = l+(r-l)/2;
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

