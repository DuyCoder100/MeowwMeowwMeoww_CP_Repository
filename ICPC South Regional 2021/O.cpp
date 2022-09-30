#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<ll, ll> pll;
typedef pair<int, int> pii;

const ll M = 1e9 + 7;

const int STEPS = 1e8;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    map<ll, int> at_x, at_y;
    map< pair<ll, ll>, int> at_point;
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        ll x, y;
        cin >> x >> y;
        res += at_x[x] + at_y[y] - at_point[{x, y}];
        at_x[x]++;
        at_y[y]++;
        at_point[{x, y}]++;
    }
    cout << res << '\n';
    return 0;
}