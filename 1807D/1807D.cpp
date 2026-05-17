#include <bits/stdc++.h>
using namespace std;

void print(int* a, int n) {
    for (int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
    cout << '\n';
}

int main() {
    int t, n, q, l, r, k;
    cin >> t;
    while (t-- > 0) {
        cin >> n >> q;
        int a[n], p[n];
        cin >> a[0];
        p[0] = a[0];
        for (int i = 1; i < n; ++i) {
            cin >> a[i];
            p[i] = p[i - 1] + a[i];
        }

        int total = p[n - 1];
        for (int i = 0; i < q; ++i) {
            cin >> l >> r >> k;
            int c = k * (r - l + 1);
            int d = c - p[r - 1];
            d += l > 1 ? p[l - 2] : 0;
            string res = (total + d) % 2 == 0 ? "NO\n" : "YES\n";
            cout << res;
        }
    }

    return 0;
}