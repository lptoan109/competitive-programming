/*
    This source code was written by lptoan11.
    Source of the problem: https://atcoder.jp/contests/abc471/tasks/abc471_c
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
#define ld long double
#define pb push_back
#define pii pair<int, int>
#define pll pair<long long, long long>
#define umii unordered_map<int, int>
#define umll unordered_map<long long, long long>
#define all(x) (x).begin(), (x).end()
#define cerr if(true)cerr
const int mod = 1e9+7;
const int MAXN = 3e5;
void FILENAME(const string file){
    if(file.size()){
        freopen((file+".INP").c_str(), "r", stdin);
        freopen((file+".OUT").c_str(), "w", stdout);
    }
}

int n, a[MAXN+5], bd;
ll kq;
void solve(){
    cin >> n;
    FOR(i, 1, n) cin >> a[i];
    sort(a+1, a+1+n);
    FOR(i, 1, n-1){
        if(a[i]<=0 && a[i+1]>0) bd = i;
    }
    if(bd==0){
        if(a[n]<=0) sort(a+1, a+1+n, greater<int>());
        FOR(i, 1, n){
            if(i==1){
                kq+=abs(a[1]);
            }
            else{
                kq+=abs(a[i] - a[i-1]);
            }
        }
        cout << kq;
        return;
    }
    int t = 0;
    int l = bd, r = bd+1;
    while(l>0 && r<n+1){
        if(abs(t-a[l])<=abs(t-a[r])){
            kq += abs(t-a[l]);
            t = a[l];
            l--;
        }
        else{
            kq+=abs(t-a[r]);
            t = a[r];
            r++;
        }
    }
    while(l>0){
        kq+=abs(t-a[l]);
        t = a[l];
        l--;
    }
    while(r<n+1){
        kq+=abs(t-a[r]);
        t = a[r];
        r++;
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

