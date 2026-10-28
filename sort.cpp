#include <bits/stdc++.h>
using namespace std;
const int MAXN = 2e5;
int n, a[MAXN+5];
void bublesort(){
    for(int i = 1; i<n; ++i){
        for(int j = i-1; j>1; --j){
            if(a[i]>a[i-1]) swap(a[i], a[i+1]);
        }
    }
    for(int i = 1; i<=n; ++i) cout << a[i] << " ";
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(int i = 1; i<=n; ++i) cin >> a[i];
    bublesort();

    return 0;
}
