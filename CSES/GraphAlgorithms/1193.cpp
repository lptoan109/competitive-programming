/*
    This source code was written by lptoan11.
    Source of the problem: https://cses.fi/problemset/task/1193
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
const int MAXN = 1e3;
void FILENAME(const string file){
    if(file.size()){
        freopen((file+".INP").c_str(), "r", stdin);
        freopen((file+".OUT").c_str(), "w", stdout);
    }
}

bool a[MAXN+5][MAXN+5];
int m, n, dd[4] = {-1, 0, 1, 0}, dc[4] = {0, 1, 0, -1}, bdd, bdc, ktd, ktc;
char temp[MAXN+5][MAXN+5];
vector<char> kq;
queue<pair<int, int>> que;
bool bfs(){
    que.push({bdd, bdc});
    while(!que.empty()){
        int u = que.front().fi, v = que.front().se;
        que.pop();
        FOR(i, 0, 3){
            int ut = u+dd[i], vt = v+dc[i];
            if(ut>=1 && vt>=1 && ut<=m && vt<=n && !a[ut][vt]){
                a[ut][vt] = true;
                if(i==0) temp[ut][vt] = 'U';
                if(i==1) temp[ut][vt] = 'R';
                if(i==2) temp[ut][vt] = 'D';
                if(i==3) temp[ut][vt] = 'L';
                if(ut == ktd && vt == ktc){
                    while(ut!=bdd || vt!=bdc){
                        kq.push_back(temp[ut][vt]);
                        if(temp[ut][vt]=='U') ut++;
                        else if(temp[ut][vt]=='R') vt--;
                        else if(temp[ut][vt]=='D') ut--;
                        else vt++;
                    }
                    return true;
                }
                que.push({ut, vt});
            }
        }
    }
    return false;
}

void solve(){
    cin >> m >> n;
    FOR(i, 1, m){
        string s;
        cin >> s;
        FOR(j, 1, n){
            if(s[j-1]=='#') a[i][j] = true;
            else if(s[j-1]=='A'){
                bdd = i;
                bdc = j;
                a[i][j] = true;
            }
            else if(s[j-1]=='B'){
                ktd = i;
                ktc = j;
            }
        }
    }
    if(!bfs()){
        cout << "NO";
    }
    else{
        cout << "YES\n";
        reverse(all(kq));
        cout << kq.size() << "\n";
        for(char i:kq) cout << i;
    }
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    //FILENAME("");
    solve();
    return 0;
}

