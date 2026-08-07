#include<iostream>
#include<cstring>
#include<vector>
#include<algorithm>
#include<array>
#include<set>
#include<map>
//#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9+7;
const int INF = 1e9;
const int N = 2 * 1e5 + 10;



int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--) {
        int n, m, x, y;
        cin >> n >> m >> x >> y;
        int v = n + m;
        vector<int> f(v + 1, 0);
        for (int i = 0; i < x; i++) {
            int a; cin >> a;
            f[a] |= 1;
        }
        for (int i = 0; i < y; i++) {
            int b; cin >> b;
            f[b] |= 2;
        }
        ll s = 0;
        int tot = 0, last = 0;
        for (int i = v; i >= 1 && tot < v; i--) {
            if (f[i] == 1 && n) n--;
            else if (f[i] == 2 && m) m--;
            else if (f[i] != 3) continue;
            s += i;
            tot++;
            last = i;
        }
        cout << (tot == v ? s - last : s) << "\n";
    }

    return 0;
}
