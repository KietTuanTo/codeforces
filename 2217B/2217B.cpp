#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, k, j;
    cin >> t;
    while (t-- > 0) {
        cin >> n >> k;
        vector<int> a(n, 0);
        vector<int> b(n, 0);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        cin >> j;
        for (int i = 0; i < n; ++i) {
            b[i] = a[i] ^ a[j - 1];
        }

        int l = 0, r = 0;
        for (int i = 0; i < j - 1; ++i) {
            if (b[i] == 1 && (i == 0 || b[i - 1] == 0)) {
                ++l;
            }
        }

        for (int i = j; i < n; ++i) {
            if (b[i] == 1 && (i == j || b[i - 1] == 0)) {
                ++r;
            }
        }

        cout << 2 * max(l, r) << '\n';
    }
}