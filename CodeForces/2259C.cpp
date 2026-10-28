/*
    This source code was written by lptoan11.
    Source of the problem: https://codeforces.com/contest/2259/problem/C
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

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> p;
    REP(i, n){
        cin >> a[i];
        if(a[i] == 1) p.pb(i);
    }

    if(p.empty()){
        int first_neg = -1, last_neg = -1;
        REP(i, n) {
            if(a[i] == -1) { first_neg = i; break; }
        }
        FORD(i, n - 1, 0) {
            if(a[i] == -1) { last_neg = i; break; }
        }
        if(first_neg != -1) a[first_neg] = 1;
        if(last_neg != -1) a[last_neg] = 1;
    }
    else {
        int best_l = p[0], best_r = p[0];
        FOR(i, 1, (int)p.size() - 1){
            if(p[i] - p[i-1] > best_r - best_l){
                best_l = p[i-1];
                best_r = p[i];
            }
        }

        int first_neg = 0;
        while(first_neg < n && a[first_neg] != -1) first_neg++;
        if(first_neg < n && p[0] - first_neg > best_r - best_l){
            best_l = first_neg;
            best_r = p[0];
        }

        int last_neg = n - 1;
        while(last_neg >= 0 && a[last_neg] != -1) last_neg--;
        if(last_neg >= 0 && last_neg - p.back() > best_r - best_l){
            best_l = p.back();
            best_r = last_neg;
        }

        a[best_l] = 1;
        a[best_r] = 1;
    }

    REP(i, n){
        if(a[i] == -1) a[i] = 0;
        cout << a[i] << " ";
    }
    cout << "\n";
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    //FILENAME("");
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}
