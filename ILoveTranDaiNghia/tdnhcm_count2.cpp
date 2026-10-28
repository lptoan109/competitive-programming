/*
    This source code was written by lptoan11.
    Source of the problem: https://oj.vnoi.info/problem/tdnhcm_count2
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
ll l, r;
void sangphandoan(){
    long long limit = sqrt(r);
    vector<bool> sntnho(limit+1, true);
    sntnho[0] = sntnho[1] = false;
    for(long long i = 2; i*i<=limit; ++i){
        if(sntnho[i]){
            for(long long j = i*i; j<=limit; j+=i){
                sntnho[j] = false;
            }
        }
    }
    vector <long long> snt;
    for(long long i = 2; i<=limit; ++i){
        if(sntnho[i]) snt.push_back(i);
    }
    long long n = r-l+1;
    vector <bool> snttinhtien(n, true);
    for(long long i:snt){
        long long start = (l+i-1)/i*i;
        if(start < i*i) start = i*i;
        for(long long j = start; j<=r; j+=i){
            snttinhtien[j-l] = false;
        }
    }
    if(l==1) snt[0] = false;
    long long kq = 0;
    for(long long i = 0; i<n; ++i){
        if(snttinhtien[i] && i+l>1){
            kq++;
        }
    }
    cout <<kq;
}

void solve(){
    cin >> l >> r;
    sangphandoan();
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    //FILENAME("");
    solve();
    return 0;
}

