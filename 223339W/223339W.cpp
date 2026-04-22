#include <bits/stdc++.h>
using namespace std;

bool solve(long long curr, long long target) {
    if (curr > target) return false;
    if (curr == target) return true;
    return solve(curr * 10, target) || solve(curr * 20, target);
}

int main() {
    int t;
    long long n;
    cin >> t;
    while (t-- > 0) {
        cin >> n;
        string out = solve(1LL, n) ? "YES\n" : "NO\n";
        cout << out;
    }
}