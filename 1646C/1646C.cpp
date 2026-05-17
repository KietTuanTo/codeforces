#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, total;
    long long n, curr;
    cin >> t;
    while (t-- > 0) {
        cin >> n;
        vector<long long> dp{6};
        long long mult = 4;
        while (dp.back() * mult <= n) {
            dp.push_back(dp.back() * mult++);
        }

        int m = dp.size();
        int j = 1 << m;
        int mini = numeric_limits<int>::max();
        for (int i = 0; i < j; ++i) {
            curr = n;
            total = 0;
            for (int k = 0; k < m; ++k) {
                if ((1 << k) & i) {
                    curr -= dp[k];
                    ++total;
                }
            }

            if (curr < 0) {
                continue;
            }

            bitset<64> rest(curr);
            total += rest.count();
            mini = min(mini, total);
        }
        
        cout << mini << '\n';
    }
}