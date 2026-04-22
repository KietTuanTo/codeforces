#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    long long n, m, a, b;
    while (t-- > 0) {
        cin >> n >> m >> a >> b;

        string out = gcd(a, n) == 1 && gcd(b, m) == 1 && gcd(m, n) <= 2 ? "YES\n" : "NO\n";
        cout << out;
    }
    return 0;
}