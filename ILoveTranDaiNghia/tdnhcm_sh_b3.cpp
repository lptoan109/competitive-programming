/*
    This source code was written by lptoan11.
    Source of the problem: https://oj.vnoi.info/problem/tdnhcm_sh_b3
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
const int MAXN = 3e4;
void FILENAME(const string file){
    if(file.size()){
        freopen((file+".INP").c_str(), "r", stdin);
        freopen((file+".OUT").c_str(), "w", stdout);
    }
}
int cal(int k){
    int kq = k%10;
    k/=10;
    while(k>0){
        kq= kq*10+(k%10);
        k/=10;
    }
    return kq;
}
bool check[MAXN+5];
void pre(){
    check[0] = check[1] = true;
    for(int i = 2; i*i<=MAXN; ++i){
        if(!check[i]){
            for(int j = i*i; j<=MAXN; j+=i) check[j] = true;
        }
    }
}
int a, b, kq;

void solve(){
    cin >> a >> b;
    for(int i = a; i<=b; ++i){
        int t = cal(i);
        if(__gcd(i, t)==1) kq++;
    }
    cout << kq;
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    //FILENAME("");
    pre();
    solve();
    return 0;
}

