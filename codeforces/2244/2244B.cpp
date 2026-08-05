#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        long long carry = 0;
        long long prev = 0;
        bool ok = true;

        for (int i = 0; i < n; i++) {
            long long cur = a[i] + carry;
            long long need = max(1LL, prev + 1);

            if (cur < need) {
                ok = false;
                break;
            }

            carry = cur - need;
            prev = need;
        }

        cout << (ok ? "YES" : "NO") << '\n';
    }

    return 0;
}