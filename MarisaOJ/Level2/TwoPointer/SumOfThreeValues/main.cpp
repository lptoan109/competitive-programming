#include <bits/stdc++.h>
using namespace std;
const int MAXN = 5e3;
unordered_map<int, int> cnt;
int n, x, a[MAXN+5];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> x;
    for(int i = 1; i<=n; ++i) cin >> a[i];
    for(int i = 1; i<=n; ++i){
        int tar = x - a[i];
        int l = i+1, r = n;
        while(l<r){
            while(a[l]+a[r]<tar) l++;
            while(a[l]+a[r]>tar) r--;
            if(a[l]+a[r] == tar){
                cout << a[i].second << " " <<
            }
        }
    }
    return 0;
}
