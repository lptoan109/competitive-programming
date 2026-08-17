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
#define ld long double
#define pb push_back
#define pii pair<int, int>
#define pll pair<long long, long long>
#define umii unordered_map<int, int>
#define umll unordered_map<long long, long long>
#define all(x) (x).begin(), (x).end()
#define cerr if(true)cerr
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
    string s;
    cin >> n >> s;
    if(n==1){
        cout << n << "\n";
        return;
    }
    if(n==2){
        if(s[0]==s[1]) cout << 1;
        else cout << 2;
        cout << "\n";
        return;
    }
    bool ok = false;
    FOR(i, 1, n-2){
        if(s[i-1] == s[i+1]){
            s[i] = '-1';
            ok = true;
            break;
        }
    }
    if(!ok) s[1] = '-1';
    int kq = n-1;
    FOR(i, 1, n-1){
        if(s[i]=='-1') continue;
        if(s[i-2]==s[i] && s[i-1]=='-1') kq--;
        else if(s[i-1]==s[i]) kq--;
    }
    cout << kq << '\n';
}
int t;
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    //FILENAME("");
    cin >> t;
    while(t--) solve();
    return 0;
}

