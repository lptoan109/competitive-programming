#include <bits/stdc++.h>
using namespace std;
map<int, int> cnt;
int x, kq, n;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> x;
    for(int i = 1; i<=n; ++i){
        int t;
        cin >> t;
        kq+=cnt[x-t];
        cnt[t]++;
    }
    cout << kq;
    return 0;
}
