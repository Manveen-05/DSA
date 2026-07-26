#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    int original = N;
    int rev = 0;

    while (N > 0) {
        int digit = N % 10;
        rev = rev * 10 + digit;
        N /= 10;
    }

    if (original == rev)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}