#include <bits/extc++.h>

using namespace std;
using namespace __gnu_pbds;

template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename T>
using ordered_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define int long long
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define vi vector<int>
#define vii vector<vi>
#define ld long double
#define pii pair<int, int>
mt19937 mt(time(0));

namespace io
{
    template <typename T, typename F>
    istream &operator>>(istream &cin, pair<T, F> &pr)
    {
        cin >> pr.first >> pr.second;
        return cin;
    }
    template <typename T, typename F>
    ostream &operator<<(ostream &cout, pair<T, F> &pr)
    {
        cout << pr.first << ' ' << pr.second;
        return cout;
    }
    template <typename T>
    istream &operator>>(istream &cin, vector<T> &vec)
    {
        for (T &i : vec)
            cin >> i;
        return cin;
    }
    template <typename T>
    ostream &operator<<(ostream &cout, vector<T> vec)
    {
        for (T i : vec)
            cout << i << ' ';
        return cout;
    }
}
using namespace io;

int M = 998244353;

int pw(int x, int y)
{
    x %= M;
    int res = 1;
    while (y)
    {
        if (y & 1)
            res = res * x % M;
        x = x * x % M, y /= 2;
    }
    return res;
}

int inv(int x) { return pw(x, M - 2); }

void solve()
{
    int n;
    cin >> n;
    vi v(n), bad;
    cin >> v;
    for (int i = 0; i < n; i++)
        if (v[i] != i + 1)
            bad.push_back(v[i]);
    reverse(all(bad));
    cout << (is_sorted(all(bad)) ? "YES" : "NO");
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
        solve(), cout << '\n';
    return 0;
}