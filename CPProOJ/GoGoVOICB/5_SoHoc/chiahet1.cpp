/*
    Source of the problem: https://oj.cppro.vn/contests/gogovoi04_coban_week13/problem/chiahet1
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

string k;
int n, t;
bool chiahet2(){
    if((k[n-1]-'0')%2==0) return true;
    else return false;
}
bool cchiahet3(){
    if(t%3==0) return true;
    else return false;
}
bool chiahet4(){
    int temp = 0;
    FOR(i, max(0,n-3), n-1) temp=temp*10+k[i];
    if(temp%4==0) return true;
    else return false;
}
bool chiahet5(){
    if(k[n-1]=='5' || k[n-1]=='0') return true;
    else return false;
}
bool chiahet6(){
    if(chiahet2() && chiahet6()) return true;
    else return false;
}
bool chiahet8(){
    int temp = 0;
    FOR(i, max(0,n-4), n-1) temp=temp*10+k[i];
    if(temp%8==0) return true;
    else return false;
}
bool chiahet9(){
    if(t%9==0) return true;
    else return false;
}
bool chiahet10(){
    if(k[n-1]=='0') return true;
    else return false;
}
void solve(){
    cin >> k;
    n = k.size();
    REP(i, n){
        t+=(k[i]-'0');
    }
    if(chiahet2()) cout << "YES";
    else cout << "NO";
    cout << "\n";

    if(chiahet2()) cout << "YES";
    else cout << "NO";
    cout << "\n";
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    //FILENAME("");
    solve();
    return 0;
}

