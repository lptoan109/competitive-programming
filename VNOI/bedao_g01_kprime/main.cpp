#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e7;
bool check[MAXN+5];
int pf[MAXN+5];
void pre(){
    check[0] = check[1] = true;
    for(int i = 2; i*i<=MAXN; ++i){
        if(!check[i]){
            for(int j = i*i; j<=MAXN; j+=i){
                check[j] = true;
            }
        }
    }
    for(int i = 1; i<=MAXN; ++i){
        if(!check[i]) pf[i] = pf[i-1]+1;
        else pf[i] = pf[i-1];
    }
}
int n, k;
long long kq;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    pre();
    cin >> n >> k;
    int l = 1;
    for(int r = 1; r<=n; ++r){
        while(l<r && pf[l]<=pf[r]-k){
            kq+=n-r+1;
            l++;
        }
    }
    cout << kq;
    return 0;
}
