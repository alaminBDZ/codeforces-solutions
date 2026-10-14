#include <bits/stdc++.h>
using namespace std;

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main() {
    fastIO();

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        cin.ignore();

        char c;
        cin >> c;

        string s;
        cin >> s;

        int l = 0, r = n - 1;

        int coins = 0;

        while (l < r) {
            if (s[l] != s[r]) {
                if (s[l] != c && s[r] != c) {
                    coins += 2;
                } else {
                    coins++;
                }
            }
            l++;
            r--;
        }
        cout << coins << '\n';
    }
}
