#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("div7.in", "r", stdin);
    freopen("div7.out", "w", stdout);
    
    int n;
    cin >> n;
    long long a[n], p[n];
    cin >> a[0];
    p[0] = a[0];
    for (int i = 1; i < n; ++i) {
        cin >> a[i];
        p[i] = p[i - 1] + a[i];
    }

    int m[7];
    fill(m, m + 7, -1);
    int mx = 0;
    for (int i = 0; i < n; ++i) {
        if (m[p[i] % 7] == -1) m[p[i] % 7] = i;
        if (p[i] % 7 == 0) mx = max(mx, i + 1);
        else mx = max(mx, i - m[p[i] % 7]);
    }

    cout << mx << '\n';
    return 0;
}