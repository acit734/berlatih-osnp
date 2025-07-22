#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);

    string s;
    cin >> s;

    int m = 0, n = 0, ans = 0;
    string for_m = "OSN", for_n = "NSO";
    int counter = -1;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == for_m[counter]) {
            if (s[i] == 'O' || s[i] == 'S' || s[i] == 'N' && counter == -1) {
                if (s[i] == 'O') counter = 0;
                if (s[i] == 'S') counter = 1;
                if (s[i] == 'N') counter = 2;
            }
            if (++counter == 3) {
                counter = 0;
            }
            m++;
        }
    }

    counter = -1;

    for (int i = s.size() - 1; i >= 0; i--) {
        if ((s[i] == 'O' || s[i] == 'S' || s[i] == 'N') && counter == -1) {
            if (s[i] == 'O') counter = 0;
            else if (s[i] == 'S') counter = 1;
            else if (s[i] == 'N') counter = 2;
            cout << i << endl;
        }
        else if (s[i] == for_n[counter]) {
            if (++counter == 3) {
                counter = 0;
            }
            n++;
            cout << i << endl;
        }
    }

    ans = max(m, n);
    cout << ans << endl;
    return 0;
}