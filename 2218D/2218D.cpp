#include <bits/stdc++.h>
using namespace std;

vector<long long> generatePrimes(int n) {
    vector<long long> primes{};
    primes.push_back(2);
    int i = 3;
    while (primes.size() < n) {
        bool flag = true;
        for (auto& prime : primes) {
            if (i % prime == 0) {
                flag = false;
                break;
            }
        }
        if (flag) primes.push_back(i);
        i += 2;
    }

    return primes;
}

int main() {
    int t, n;
    cin >> t;
    while (t-- > 0) {
        cin >> n;
        auto primes = generatePrimes(n + 1);
        for (int i = 0; i < n; ++i) {
            cout << primes[i] * primes[i + 1] << " ";
        }
        cout << '\n';
    }
}