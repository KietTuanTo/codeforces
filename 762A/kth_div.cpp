#include <bits/stdc++.h>
using namespace std;

vector<long long> divisors(long long n) {
    vector<long long> div{};
    for (long long i = 1; i <= sqrt(n); ++i) {
        if (n % i == 0) {
            if (n / i == i) {
                div.push_back(i);
            } else {
                div.push_back(i);
                div.push_back(n / i);
            }
        }
    }

    return div;
}

int main() {
    long long n, k;
    cin >> n >> k;
    auto div = divisors(n);
    sort(div.begin(), div.end());
    if (k > (long long) div.size()) {
        cout << -1;
        return 0;
    }

    cout << div[k - 1];
    return 0;
}