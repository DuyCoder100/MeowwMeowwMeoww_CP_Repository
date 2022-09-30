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
    ll sum = 0;
    map<ll, ll> even, odd;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (x % 2 == 0)
        {
            even[x]++;
        }
        else
        {
            odd[x]++;
        }
        sum += x;
    }
    string s;
    cin >> s;
    for (char c : s)
    {
        if (c == '0')
        {
            map<ll, ll> newEven;
            for (auto [key, cnt] : even)
            {
                ll newKey = key/2;
                sum -= newKey * cnt;
                if (newKey % 2 == 0)
                {
                    newEven[newKey] += cnt;
                }
                else
                {
                    odd[newKey] += cnt;
                }
            }
            even = std::move(newEven);
        }
        else
        {
            map<ll, ll> newOdd;
            for (auto [key, cnt] : odd)
            {
                ll newKey = key - 1;
                sum -= cnt;
                if (newKey % 2 == 1)
                {
                    odd[newKey] += cnt;
                }
                else
                {
                    even[newKey] += cnt;
                }
            }
            odd = std::move(newOdd);
        }
        cout << sum << '\n';
    }
    return 0;
}