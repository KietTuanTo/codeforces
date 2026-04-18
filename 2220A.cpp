#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, a_i;
    cin >> t;
    while (t-- > 0) {
        cin >> n;
        vector<int> a(n, 0);
        int i = 0;
        while (n-- > 0) {
            cin >> a_i;
            a[i++] = a_i; 
        }
        sort(a.begin(), a.end(), greater<int>());
        if (adjacent_find(a.begin(), a.end()) != a.end()) {
            cout << -1 << '\n';
            continue;
        };

        i = 0;
        while (i < a.size()) {
            cout << a[i++] << " ";
        }
        cout << '\n';
    }
}