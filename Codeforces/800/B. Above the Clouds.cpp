#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string s; cin >> s;
        bool bisa = false;

        map<char, int> hmm;
        for (const auto& c : s) hmm[c]++;
        
        vector<int> some(hmm.size());
        int idx = 0;
        for (const auto& pair : hmm) some[idx++] = pair.second;
        sort(some.begin(), some.end(), greater<int>());

        if (some[0] > 2) bisa = true;
        else if (some[0] == 2) {
            int size = 0; idx = 0;
            vector<char> tampung(size);
            for (const auto& [key, value] : hmm) {
                if (value == 2) {
                    tampung.resize(++size);
                    tampung[idx++] = key;
                }
            }
            if (tampung.size() > 1) bisa = true;
            else {
                if (tampung[0] == s[0] && tampung[0] == s[n-1]) bisa = false;
                else bisa = true;
            }
        }

        if (bisa) cout << "Yes" << endl;
        else cout << "No" << endl;
    }

    return 0;
}