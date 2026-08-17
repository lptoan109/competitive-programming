#include <bits/stdc++.h>
using namespace std;
const int MAXN = 3e5;
int n, m, a[MAXN+5], b[MAXN+5], kq;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    long long cur1, cur2;
    cur1 = cur2 = 0;
    for(int i = 1; i<=n; ++i){
        cin >> a[i];
        cur1+=a[i];
    }
    cin >> m;
    for(int i = 1; i<=m; ++i){
        cin >> b[i];
        cur1-=b[i];
    }
    if(cur1!=0){
        cout << -1;
        return 0;
    }
    int i = 0, j = 1;
    cur1 = cur2 = 0;
    cur2 = b[1];
    while(i<=n || j<=m){
        while(i<=n && cur1<cur2){
            i++;
            cur1+=a[i];
        }
        if(i>=n && cur1<cur2){
            cout << -1;
            return 0;
        }
        while(j<=m && cur1>cur2){
            j++;
            cur2+=b[j];
        }
        if(j>=m && cur2<cur1){
            cout << -1;
            return 0;
        }
        if(cur1 == cur2){
            cur1 = cur2 = 0;
            kq++;
            j++;
            if(j>m){
                if(i<n){
                    cout << -1;
                }
                else cout << kq;
                return 0;
            }
            cur2 = b[j];
        }
    }
    cout << kq;
    return 0;
}
