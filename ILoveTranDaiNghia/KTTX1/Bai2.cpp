
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
bool check(string k){
    int n = k.size();
    for(int i = 0; i<n/2; ++i){
        if(n-i-1>=0 && n-i-1<n && k[i]!=k[n-i-1]) return false;
    }
    return true;
}
string sum(string a, string b){
    int t1 = stoi(a), t2 = stoi(b);
    return to_string(t1+t2);
}
string reversee(string k){
    int n = k.size();
    string kq = "";
    for(int i = n-1; i>=0; --i) kq+=k[i];
    return kq;
}
string n;

void solve(){
    cin >> n;
    while(!check(n)){
        string t = reversee(n);
        n = sum(n, t);
    }
    cout << n;
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    //FILENAME("");
    solve();
    return 0;
}
