#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);

    int t; cin >> t;
    while (t--) {
        int n, j, k, mx = 0; cin >> n >> j >> k;
        vector<int> a(n+1);

        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            mx = max(mx, a[i]);
        }

        if (k > 1 || a[j] == mx) cout << "YES" << endl;
        else cout << "NO" << endl;
    }


    return 0;
}