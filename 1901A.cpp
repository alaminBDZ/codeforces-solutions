#include <bits/stdc++.h>
using namespace std;

void fastIO() {}

int main() {
    fastIO();

    int t;
    cin >> t;

    while (t--) {
        int n, x;
        cin >> n >> x;

        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        vector<int> a(n + 1);
        a[0] = v[0];
        a[n] = 2 * (x - v[n - 1]);
        for (int i = 1; i < n; i++) {
            a[i] = v[i] - v[i - 1];
        }

        sort(a.begin(), a.end());
        cout << a[n] << '\n';
    }
}
