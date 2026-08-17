#include <bits/stdc++.h>
using namespace std;
const int MAXN = 5000;
int n;
long long pf[MAXN+5];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(int i = 1; i<=n; ++i){
        cin >> pf[i];
        pf[i]+=pf[i-1];
    }
    int l = 1, r = n;
    while(l<r){
        if((a[r]-a[l-1])%2!=0) l++;
    }
    return 0;
}
