/*
    This source code was written by lptoan11.
    Source of the problem: https://oj.vnoi.info/problem/tdnhcm_cb_th_122
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

int k;
string s, kq;
map<char, int> cnt;
void solve(){
    cin >> k;
    cin >> s;
    int n = s.size();
    REP(i, n){
        cnt[s[i]]++;
    }
    for(pair<char, int>i:cnt){
        if(i.second%k!=0){
            cout << -1;
            return;
        }
    }
    for(pair<char, int> i:cnt){
        FOR(j, 1, i.second/k){
            kq+=i.first;
        }
    }
    FOR(i, 1, k) cout << kq;
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    //FILENAME("");
    solve();
    return 0;
}

