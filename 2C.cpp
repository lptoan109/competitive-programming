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
const int mod = 1e9+7;
const int MAXN = 1e7;
void FILENAME(const string file){
    if(file.size()){
        freopen((file+".INP").c_str(), "r", stdin);
        freopen((file+".OUT").c_str(), "w", stdout);
    }
}
bool check[MAXN+5];
int sf[MAXN+5];
void pre(){
    check[0] = check[1] = 1;
    for(int i = 2; i*i<=MAXN; ++i){
        if(!check[i]){
            for(int j = i*i; j<=MAXN; j+=i) check[j] = true;
        }
    }

    while(check[temp]) temp++;
    for(int i = MAXN; i>=1; --i){
        sf[i] = temp;
        if(!check[i]) temp = i;
    }
}
int n;

void solve(){
    cin >> n;
    cout << sf[n];
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    //FILENAME("");
    pre();
    solve();
    return 0;
}

