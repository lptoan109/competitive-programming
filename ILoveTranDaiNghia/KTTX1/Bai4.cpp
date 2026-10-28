
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
const int MAXN = 1e6;
void FILENAME(const string file){
    if(file.size()){
        freopen((file+".INP").c_str(), "r", stdin);
        freopen((file+".OUT").c_str(), "w", stdout);
    }
}
bool snt[MAXN+5];
vector<int> vec;
void sang(){
    snt[0] = snt[1] = 1;
    for(int i = 2; i*i<=MAXN; ++i){
        if(!snt[i]){
            for(int j = i*i; j<=MAXN; j+=i) snt[j] = 1;
        }
    }
    for(int i = 2; i<=MAXN; ++i) if(!snt[i]) vec.pb(i);
}
bool check(ll k){
    int cnt = 0;
    for(int i:vec){
        if(1LL * i *i>k) break;
        if(k%i==0){
            cnt++;
            if(i!=k/i && k%(k/i)==0) return false;
        }
    }
    return cnt==1;
}
int n;

void solve(){
    cin >> n;
    FOR(i, 1, n){
        ll t;
        cin >> t;
        if(check(t)) cout << "YES";
        else cout << "NO";
        cout << "\n";
    }
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    //FILENAME("");
    sang();
    solve();
    return 0;
}
