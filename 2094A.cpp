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
    cin.ignore();
    while (t--) {
        string s;
        getline(cin, s);

        cout << s[0];
        for (int i = 1; i < s.size(); i++) {
            if (s[i - 1] == ' ') {
                cout << s[i];
            }
        }
        cout << '\n';
    }
}
