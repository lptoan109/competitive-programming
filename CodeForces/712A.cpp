/*
    This source code was written by lptoan11.
    Source of the problem: https://codeforces.com/contest/712/problem/A
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
#define REP(i, n) for(int i = 1; i<=(n); ++i)
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
void FILENAME(const string file){
    if(file.size()){
        freopen((file+".INP").c_str(), "r", stdin);
        freopen((file+".OUT").c_str(), "w", stdout);
    }
}

int n, a[MAXN+5];
vector<int> kq;
void solve(){
    cin >> n;
    REP(i, n) cin >> a[i];
    reverse(a+1, a+1+n);
    ll cur1, cur2;
    cur1 = cur2 = 0;
    REP(i, n){
        if(i==1) kq.push_back(a[i]);
        else if(i%2==0){
            kq.push_back(a[i]+cur1);
        }
        else kq.push_back(a[i]+cur2);
        if(i%2!=0){
            cur1 += kq[i-1];
            cur2 -=kq[i-1];
        }
        else{
            cur1-=kq[i-1];
            cur2+=kq[i-1];
        }
    }
    FORD(i, n-1, 0) cout << kq[i] << " ";
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    //FILENAME("");
    solve();
    return 0;
}

