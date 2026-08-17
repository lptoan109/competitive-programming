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
const int MAXN = 1e5;
const string file = "";
int n, cur= -1e9, t, tt;
vector<int> a;
void solve(){
    cin >> n;
    for(int i = 1; i<=n; ++i){
        int t1, t2;
        cin >> t1 >> t2;
        if(t2-t1>cur){
            cur = t2-t1;
            t = t2;
            tt = i;
        }
        a.push_back(t1);
    }
    for(int i = 1; i<=n; ++i){
        if(i==tt) a[i-1] = -1;
    }
    sort(all(a));
    cout << a[n-1] << " ";
    ll kq = t;
    //cout << kq << "\n";
    for(int i = 2; i<=n; ++i){
        kq += a[n-i+1];
        cout << kq << " ";
    }
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

