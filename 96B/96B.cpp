#include <bits/stdc++.h>
using namespace std;

bool isSuperLucky(long long i) {
    string s = to_string(i);
    int n = s.size();
    if (n % 2) return false;
    
    int fours = count(s.begin(), s.end(), '4');
    int sevens = count(s.begin(), s.end(), '7');
    return fours == n / 2 && sevens == n / 2; 
}

int main() {
    long long n;
    cin >> n;
    while (n < 5e9) {
        if (isSuperLucky(n)) {
            cout << n;
            return 0;
        } 
        ++n;
    }

    return 0;
}