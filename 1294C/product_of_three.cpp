#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    while (t-- > 0) {
        cin >> n;
        int cnt = 0;
        array<int, 2> divisors{};
        for (int i = 2; i < sqrt(n) && cnt < 2; ++i) {
            if (n % i == 0) {
                divisors[cnt++] = i;
                n /= i;
            }
        }

        if (cnt < 2) {
            cout << "NO\n";
            continue;
        }

        cout << "YES\n" << divisors[0] << " " << divisors[1] << " " << n << '\n';
    }
}