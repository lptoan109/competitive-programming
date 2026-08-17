#include <bits/stdc++.h>
using namespace std;
vector<int> a, b;
int n, kq = 2e9;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(int i = 1; i<=n; ++i){
        int t; cin >> t;
        a.push_back(t);
    }
    for(int i = 1; i<=n; ++i){
        int t; cin >> t;
        b.push_back(t);
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    for(int i = 0; i<n; ++i){
        auto it = lower_bound(b.begin(), b.end(), -a[i]);
        if(it==b.end()){
            kq = min(kq, min(abs(a[i]+b[n-1]), abs(a[i]+b[0])));
        }
        else kq = min(kq, abs(*it+a[i]));
    }
//    for(int i = 0; i<n; ++i){
//        auto it = lower_bound(a.begin(), a.end(), b[i]);
//        if(it==a.end()){
//            kq = min(kq, min(abs(b[i]+a[n-1]), abs(b[i]+a[0])));
//        }
//        else kq = min(kq, abs(*it+b[i]));
//    }
    cout << kq;
    return 0;
}
