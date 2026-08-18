#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, p, q;
    cin >> n;

    set<int> s;

    cin >> p;
    while (p--) {
        int x;
        cin >> x;
        s.insert(x);
    }

    cin >> q;
    while (q--) {
        int x;
        cin >> x;
        s.insert(x);
    }

    if (s.size() == n)
        cout << "I become the guy.";
    else
        cout << "Oh, my keyboard!";

    return 0;
}