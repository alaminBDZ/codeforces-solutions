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

        string s;
        cin >> s;

        int left = 0, right = n - 1;
        int size = n;
        while ((left < right) && (s[left] != s[right])) {
            size = n - 2 * (left + 1);

            left++;
            right--;
        }
        cout << size << '\n';
    }
    return 0;
}
