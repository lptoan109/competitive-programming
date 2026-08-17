/*
    This source code was written by lptoan11.
    Source of the problem:
          _
        ('v')
       //-=-\\
      (\_,,,_/)
       //   \\
*/
#include<bits/stdc++.h>
using namespace std;
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
const int mod = 1e9+7;
const int MAXN = 1e5;;
string file = "";

int n;
ll a[MAXN+5], l[MAXN+5], r[MAXN+5], cur, kq = -1e18;

void solve(){
    cin >> n;
    for(int i = 1; i<=n; ++i){
        cin >> a[i];
    }
    l[1] = a[1];
    cur = a[1];
    for(int i = 2; i<=n; ++i){
        cur= max(a[i], cur+a[i]);
        l[i] = max(l[i-1], cur);
    }
    r[n] = a[n];
    cur = a[n];
    for(int i =n-1 ;i>=1; --i){
        cur = max(a[i], cur+a[i]);
        r[i] = max(r[i+1], cur);
    }
    for(int i = 1; i<n; ++i){
        kq = max(kq, l[i]+r[i+1]);
    }
    cout << kq;
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    if(file.size()){
        freopen((file+".INP").c_str(), "r", stdin);
        freopen((file+".OUT").c_str(), "w", stdout);
    }
    solve();
    return 0;
}
