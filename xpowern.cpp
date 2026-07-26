#include <bits/stdc++.h>
using namespace std;

int main() {
    long long x, n;
    cin >> x >> n;

    long long power = 1;

    for (int i = 1; i <= n; i++) {
        power *= x;
    }

    cout << power;

    return 0;
}