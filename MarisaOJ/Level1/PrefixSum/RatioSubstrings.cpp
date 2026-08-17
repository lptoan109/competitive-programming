/*
    This source code was written by lptoan11.
    Source of the problem: https://marisaoj.com/problem/435
          _
        ('v')
       //-=-\\
      (\_,,,_/)
       //   \\
*/
#include<bits/stdc++.h>
using namespace std;
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
const int MAXN = 1e5;
const string file = "";
int x, y, cnt0[MAXN+5], cnt1[MAXN+5];
umll cnt;
ll kq;
string s;
void solve(){
    cin >> x >> y >> s;
    int n = s.size();
    if(s[0]=='0') cnt0[0]++;
    else cnt1[0]++;
    //cerr << cnt0[0] << " " << cnt1[0] << "\n";
    for(int i = 1; i<n; ++i){
        if(s[i]=='0') cnt0[i]++;
        else cnt1[i]++;
        cnt0[i]+=cnt0[i-1];
        cnt1[i]+=cnt1[i-1];
        //cerr << cnt0[i] << " " << cnt1[i] << "\n";
    }
    cnt[0]++;
    for(int i = 0; i<n; ++i){
        kq += cnt[y*cnt0[i]-x*cnt1[i]];
        cnt[y*cnt0[i]-x*cnt1[i]]++;
    }
    cout << kq;
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    if(file.size()){
        freopen((file+".INP").c_str(), "r", stdin);
        freopen((file+".OUT").c_str(), "w", stdout);
    }
    solve();
    return 0;
}

