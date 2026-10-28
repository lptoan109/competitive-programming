/*
    This source code was written by lptoan11.
    Source of the problem: https://oj.vnoi.info/problem/tdnhcm_so
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

string a, b,ta, tb;
int bd1, bd2;
void solve(){
    cin >> a >> b;
    int na = a.size(), nb = b.size();
    while(bd1<na && a[bd1]=='0') bd1++;
    while(bd2<nb && b[bd2]=='0') bd2++;
    FOR(i, bd1, na-1) ta+=a[i];
    FOR(i, bd2, nb-1) tb+=b[i];
    na = ta.size();
    nb = tb.size();
    if(na<nb){
        cout << -1;
    }
    else if(na>nb) cout << 1;
    else{
        if(ta==tb) cout << 0;
        else if(ta<tb) cout << -1;
        else cout << 1;
    }
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    //FILENAME("");
    solve();
    return 0;
}

