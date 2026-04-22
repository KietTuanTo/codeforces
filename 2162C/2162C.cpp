#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, a, b;
    cin >> t;
    while (t-- > 0) {
        cin >> a >> b;
        if (a == b) {
            cout << 0 << '\n';
            continue;
        }

        int msb;
        bitset<32> c(a ^ b);
        for (int i = 31; i >= 0; --i) {
            if (c.test(i)) {
                msb = i;
                break;
            }
        }

        int large = pow(2, msb);
        if (large > a) {
            cout << -1 << '\n';
            continue;
        }

        int res = c.to_ulong();
        cout << 2 << '\n';
        cout << res - large << " " << large << '\n';
    }
}