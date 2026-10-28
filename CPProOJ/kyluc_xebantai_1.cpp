/*
    This source code was written by lptoan11.
    Source of the problem: https://oj.cppro.vn/contests/chaomung2thang92026_div1/problem/kyluc_xebantai_1
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
const int MAXN = 1e6;
void FILENAME(const string file){
    if(file.size()){
        freopen((file+".INP").c_str(), "r", stdin);
        freopen((file+".OUT").c_str(), "w", stdout);
    }
}
bool checknt(int k){
    if(k==2 || k==3) return true;
    if(k<2 || k%2==0 || k%3==0) return false;
    for(int i = 5; i*i<=k; i+=6){
        if(k%i==0 || k%(i+2)==0) return false;
    }
    return true;
}
int n, cnt[MAXN+5],k;
void sub1(){
    cin >> n >> k;
    FOR(i, 1, n){
        int t;
        cin >> t;
        if(checknt(t)){
            cnt[i]++;
        }
    }
    FOR(i, 1, n-1){
        int t = cnt[i];
        if(t==k){
            cout << 1 << "\n";
            return;
        }
        FOR(j, i+1, n){
            t+cnt[i];
            if(t==k){
                cout << j-i+1;
                return;
            }
        }
    }
    cout << -1;
}
bool check[MAXN+5], ok;
int tt[MAXN+5], kq = 2e9;
void solve(){
    FOR(i, 0, MAXN){
        cnt[i] = 0;
        tt[i] = 0;
    }
    kq = 2e9;
    ok = false;
    cin >> n >> k;
    FOR(i, 1, n){
        int t;
        cin >> t;
        if(!check[t]) cnt[i] = 1;
    }
    FOR(i, 1, n) cnt[i]+=cnt[i-1];
    FOR(i, 1, n){
        if(cnt[i]-k==0){

        }
        if(tt[cnt[i]-k]){
            kq = min(i-tt[cnt[i]-k], kq);
            ok = true;
        }
        tt[cnt[i]] = i;
    }
    if(!ok) cout << -1 << "\n";
    else cout << kq << "\n";
}
int t;
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    //FILENAME("");
    check[0] = check[1] = true;
    for(int i = 2; i*i<=MAXN; ++i){
        if(!check[i]){
            for(int j = i*i; j<=MAXN; j+=i){
                check[j] = true;
            }
        }
    }
    cin >> t;
    if(t==1){
        sub1();
    }
    else while(t--) solve();
    return 0;
}

