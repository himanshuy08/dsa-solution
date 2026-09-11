#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int &x : a) cin >> x;

    int left = 0, right = n - 1;
    int sereja = 0, dima = 0;

    for (int turn = 0; turn < n; ++turn) {
        int card;

        if (a[left] > a[right]) {
            card = a[left++];
        } else {
            card = a[right--];
        }

        if (turn % 2 == 0)
            sereja += card;
        else
            dima += card;
    }

    cout << sereja << " " << dima << '\n';

    return 0;
}