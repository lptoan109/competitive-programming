#include <bits/stdc++.h>
using namespace std;
const int MAXN =1e4;
int n, m, a[MAXN+5];
long long kq;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    for(int i = 1; i<=n; ++i){
        cin >> a[i];
    }
    sort(a+1, a+1+n);
    int i = 1, j = n;
    while(i<j){
        while(a[i]+a[j]>m && i<j) j--;
        for(int k = j-1; k>i; --k){
            if(a[i]+a[j]+a[k]<=m){
                kq = max(kq, 1LL*a[i]+a[j]+a[k]);
                break;
            }
        }
        i++;
    }
    cout << kq;
    return 0;
}
