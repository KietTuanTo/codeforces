#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, w;
    cin >> n >> w;
    int v[n][2];
    for (int i = 0; i < n; ++i) {
        cin >> v[i][0] >> v[i][1];
    }

    int m = 1 << n;
    int sum, weight, maxi = -1;
    for (int i = 0; i < m; ++i) {
        sum = 0;
        weight = 0;
        for (int j = 0; j < n; ++j) {
            if ((1 << j) & i) {
                sum += v[j][1];
                weight += v[j][0];
            }
        }

        if (weight <= w) {
            maxi = max(maxi, sum);
        }
    }

    cout << maxi;
    return 0;
}