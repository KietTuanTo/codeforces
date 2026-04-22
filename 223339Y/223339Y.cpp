#include <bits/stdc++.h>
using namespace std;

int solve(int start, int end) {
    if (start == end) return 1;
    if (start > end) return 0;
    return solve(start + 1, end) + solve(start + 2, end) + solve(start + 3, end);
}

int main() {
    int s, e;
    cin >> s >> e;
    cout << solve(s, e);
}