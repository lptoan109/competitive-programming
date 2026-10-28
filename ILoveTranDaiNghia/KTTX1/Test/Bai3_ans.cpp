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
const int MAXN = 2e5;
void FILENAME(const string file){
    if(file.size()){
        freopen("Bai3.INP", "r", stdin);
        freopen("Bai3_ans.OUT", "w", stdout);
    }
}

int n, a[MAXN+5];
ll kq;
void solve(){
    cin >> n;
    FOR(i, 1, n){
        string t;
        cin >> t;
        int temp = t[t.size()-1]-'0';
        a[i] = temp;
    }
    FOR(i, 1, n-1){
        FOR(j, i+1, n) if((a[i]*a[j])%10==9) kq++;
    }
    cout << kq;
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    FILENAME("PT");
    solve();
    return 0;
}

