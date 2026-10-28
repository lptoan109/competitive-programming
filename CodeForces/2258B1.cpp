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
#define REP(i, n) for(int i = 1; i<=(n); ++i)
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
const int MAXN = 4e5;
void FILENAME(const string file){
    if(file.size()){
        freopen((file+".INP").c_str(), "r", stdin);
        freopen((file+".OUT").c_str(), "w", stdout);
    }
}

int n, m, cnt[MAXN+5], kqt;

void solve(){
    cin >> n >> m;
    m = 0;
    FOR(i, 1, n){
        int t;
        cin >> t;
        m = max(t, m);
        cnt[t]++;
    }
    int temp = 0;
    FORD(i, m, 1){
        //cout << cnt[i] << " ";
        int kq = temp+cnt[i] + cnt[i*2];
        temp+=cnt[i];
        if(kq[i]>kqt){
            kqt = kq[i];
            //cout << i << " ";
        }
    }
    cout << kqt << "\n";
    FOR(i, 1, m){
        cnt[i] = 0;
    }
    kqt = 0;
}
int q;
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    //FILENAME("");
    cin >> q;
    while(q--) solve();
    return 0;
}
