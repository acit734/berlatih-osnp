#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);

    int t; cin >> t;
    while (t--) {
        float n; cin >> n;
        if (n / 4 == floor(n / 4)) cout << "BOB" << endl;
        else cout << "ALICE" << endl;
    }

    return 0;
}