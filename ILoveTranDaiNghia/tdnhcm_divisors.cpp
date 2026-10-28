/*
    This source code was written by lptoan11.
    Source of the problem: https://oj.vnoi.info/problem/tdnhcm_divisors
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
const int MAXN = 5e7;
void FILENAME(const string file){
    if(file.size()){
        freopen((file+".INP").c_str(), "r", stdin);
        freopen((file+".OUT").c_str(), "w", stdout);
    }
}
bool check[MAXN+5];
vector<int> vec;
void pre(){
    check[0] = check[1] = true;
    for(int i = 2; i*i<MAXN; ++i){
        if(!check[i]){
            for(int j = i*i; j<MAXN; j+=i){
                check[j] = true;
            }
        }
    }
    for(int i =2; i<MAXN; ++i){
        if(!check[i]) vec.push_back(i);
    }
}
int n;
ll kq;
vector<int> t;
void solve(){
    cin >> n;
    int j = vec.size()-1;
    for(int i = 0; i<vec.size(); ++i){
        if(vec[i]*vec[i]>n) break;
        while(j>0 && vec[j-1]>n/vec[i]) j--;
        if(j>i+1) kq+=(j-i-1);
    }
    for(int i:vec){
        if(1LL*i*i*i>n*1LL) break;
        kq++;
    }
    cout << kq;
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    //FILENAME("");
    pre();
    solve();
    return 0;
}

