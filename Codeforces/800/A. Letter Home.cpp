#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);

    int t; cin >> t;
    while (t--) {
        int n, s;
        cin >> n >> s;

        vector<int> a(n+1);
        for (int i = 1; i <= n; i++) cin >> a[i];

        if (s > a[n]) cout << s - a[1] << endl;
        else if (s < a[1]) cout << a[n] - s << endl;
        else {
            int begin = s - a[1], end = a[n] - s;
            if (begin < end) cout << (s - a[1]) + (a[n] - a[1]) << endl;
            else if (begin > end) cout << (a[n] - s) + (a[n] - a[1]) << endl;
            else cout << (s - a[1]) * 3 << endl;
        }
    }

    return 0;
}