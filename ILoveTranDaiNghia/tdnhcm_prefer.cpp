/*
    This source code was written by lptoan11.
    Source of the problem: https://oj.vnoi.info/problem/tdnhcm_prefer
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

int n, a[MAXN+5], m;

void solve(){
    cin >> n;
    FOR(i, 1, n) cin >> a[i];
    sort(a+1, a+1+n);
    cin >> m;
    while(m--){
        int vall, valr;
        cin >> vall >> valr;
        int l = 1, r=n, kq1 = -1, kq2 = -1;
        while(l<=r){
            int m = l+(r-l)/2;
            if(a[m]>=vall){
                kq1 = m;
                r = m-1;
            }
            else l = m+1;
        }
        l = 1; r = n;
        while(l<=r){
            int m = l+(r-l)/2;
            if(a[m]<=valr){
                kq2 = m;
                l = m+1;
            }
            else r = m-1;
        }
        if(kq1==-1 || kq2==-1) cout << "0\n";
        else cout << kq2-kq1+1 << "\n";
    }
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    //FILENAME("");
    solve();
    return 0;
}

