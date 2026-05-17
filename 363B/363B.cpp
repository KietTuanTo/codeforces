#include <bits/stdc++.h>
using namespace std;

void print(int* a, int n) {
    for (int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
    cout << '\n';
}

int main() {
    int n, k;
    cin >> n >> k;
    int h[n];
    for (int i = 0; i < n; ++i) {
        cin >> h[i];
    }

    int p[n];
    p[0] = h[0];
    for (int i = 1; i < n; ++i) {
        p[i] = p[i - 1] + h[i];
    }

    int res = 1;
    int curr = p[k - 1];
    for (int i = k; i < n; ++i) {
        if (p[i] - p[i - k] < curr) {
            res = i - k + 2;
            curr = p[i] - p[i - k];
        }
    }

    cout << res << '\n';
    return 0;
}