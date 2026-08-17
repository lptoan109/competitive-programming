#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e6;
int n, x, a[MAXN+5];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> x;
    for(int i = 1; i<=n; ++i) cin >> a[i];
    int i = 1, j = n;
    while(i<j){
        while(a[i]+a[j]<x) i++;
        while(a[i]+a[j]>x) j--;
        if(a[i]+a[j] == x){
            cout << i << " " << j;
            return 0;
        }
    }
    cout << "No solution";
    return 0;
}
