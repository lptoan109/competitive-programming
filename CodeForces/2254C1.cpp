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
        freopen((file+".INP").c_str(), "r", stdin);
        freopen((file+".OUT").c_str(), "w", stdout);
    }
}

int n;
string a, b;

void solve(){
    cin >> n >> a >> b;
    if(n<3){
        if(a==b) cout << "YES";
        else cout << "NO";
        cout << "\n";
        return;
    }
    int dc1, dl1, dc2, dl2;
    dc1 = dl1 = dc2 = dl2 = 0;
    REP(i, n){
        if(a[i]==1){
            if(i%2) dl1++;
            else dc1++;
        }
        if(b[i]==1){
            if(i%2) dl2++;
            else dc2++;
        }
    }
    if(dl1==dl2 && dc1 == dc2) cout << "YES\n";
    else cout << "NO\n";
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
