#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<ll, ll> pll;
typedef pair<int, int> pii;

const ll M = 1e9 + 7;
bool board[5002][5002];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll y, z;
    cin >> y >> z;
    for (int i = 0; i < n; i++)
    {
        a[i] = abs(a[i] - z);
    }
    sort(a.begin(), a.end());
    y = abs(y - z);
    ll res = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < y)
        {
            ++res;
            y -= a[i];
        }
        else
        {
            break;
        }
    }
    cout << res << '\n';
    return 0;
}