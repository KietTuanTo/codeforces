#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, l, r;
    cin >> t;
    while (t-- > 0) {
        cin >> l >> r;
        if (2 * l <= r) {
            cout << l << " " << 2 * l << '\n';
        } else {
            cout << "-1 -1\n";
        }
    }
}