#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int p[n];
    for (int i = 0; i < n; ++i) {
        cin >> p[i];
    }

    int m = 1 << n;
    long long mini = 20 * 10e9 + 1, left, right;
    for (int i = 0; i < m; ++i) {
        left = 0;
        right = 0;
        for (int j = 0; j < n; ++j) {
            if ((1 << j) & i) {
                left += p[j];
            } else {
                right += p[j];
            }
        }

        mini = min(mini, abs(left - right));
    }

    cout << mini;
}