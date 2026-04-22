#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n;
    unordered_map<string, int> names{};
    while (n-- > 0) {
        cin >> s;
        ++names[s];
        if (names[s] > 1) {
            cout << s << to_string(names[s] - 1) << '\n';
        } else {
            cout << "OK" << '\n';
        }
    }
}
