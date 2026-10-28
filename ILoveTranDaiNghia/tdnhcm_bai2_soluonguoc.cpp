/*
    This source code was written by lptoan11.
    Source of the problem: https://oj.vnoi.info/problem/tdnhcm_bai2_soluonguoc
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

int n, kq;
ll check, temp;

void solve(){
    cin >> n >> check;
    temp = check;
    FOR(i, 2, n){
        ll t;
        cin >> t;
        check = __gcd(check, t);
        temp = min(temp, t);
    }
    for(ll i = 1; i*i<=temp; ++i){
        if(temp%i==0){
            if(check%i==0) kq++;
            if(temp/i!=i && check%(temp/i)==0) kq++;
        }
    }
    cout << kq << "\n";
    kq = 0;
}
int t;
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    //FILENAME("");
    cin >> t;
    while(t--) solve();
    return 0;
}

