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
#define cerr if(true)cerr
const int mod = 1e9+7;
const int MAXN = 1e6;
const string file = "";
int n, a[MAXN+5], q, ln;
ll kq;
void solve(){
    cin >> n >> q;
    for(int i =1; i<=n; ++i){
        int t1, t2;
        cin >> t1 >> t2;
        a[i] = t1+t2;
        ln = max(ln, t2);
    }
    sort(a+1, a+1+n);
    int i = n;
    while(q>0 && i>0){
        if(a[i]>ln){
            q--;
            kq+=a[i];
        }
        else break;
        i--;
    }
    kq+=(1LL*q*ln);
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
