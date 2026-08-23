#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 1) {
            cout << string(m, '#');
        } else if ((i / 2) % 2 == 1) {
            cout << string(m - 1, '.') << '#';
        } else {
            cout << '#' << string(m - 1, '.');
        }
        cout << '\n';
    }

    return 0;
}