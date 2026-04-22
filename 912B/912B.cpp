#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;

    if (k == 1) {
        cout << n;
        return 0;
    }

    long long start = 1;
    long long res = 0;
    while (start <= n) {
        res += start;
        start <<= 1;
    }

    cout << res;
}