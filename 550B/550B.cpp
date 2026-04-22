#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, l, r, x;
    cin >> n >> l >> r >> x;
    int c[n];
    for (int i = 0; i < n; ++i) {
        cin >> c[i];
    }

    int m = 1 << n;
    int sum, maxi, mini, cnt;
    int total = 0;
    for (int i = 0; i < m; ++i) {
        sum = 0;
        cnt = 0;
        maxi = -1;
        mini = 2e6 + 1;
        for (int j = 0; j < n; ++j) {
            if ((1 << j) & i) {
                sum += c[j];
                cnt += 1;
                maxi = max(maxi, c[j]);
                mini = min(mini, c[j]); 
            }
        }

        if ((maxi - mini) >= x && cnt > 1 && l <= sum && sum <= r) {
            ++total;
        }
    }

    cout << total;
    return 0;
}