/*
    This source code was written by lptoan11.
    Source of the problem: https://oj.vnoi.info/problem/tdnhcm_squirr
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

int n, m, k, kq, tt[MAXN+5];
pair<int, int> ds[MAXN+5];
bool check(int t){
    int ans = 0;
    FOR(i, 1, n){
        if(ds[i].fi>t){
            continue;
        }
        tt[i] = (t-ds[i].fi)/ds[i].se+1;
    }
    sort(tt+1, tt+1+n, greater<int>());
    FOR(i, 1, m){
        if(i>n) break;
        ans += tt[i];
    }
    FOR(i ,1 ,n){
        tt[i] = 0;
    }
    return ans>=k;
}
void solve(){
    cin >> n >> m >>  k;
    FOR(i, 1, n){
        cin >> ds[i].fi;
    }
    FOR(i, 1, n){
        cin >> ds[i].se;
    }
    int l = 1, r = 2e9;
    while(l<=r){
        int m = l+(r-l)/2;
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

