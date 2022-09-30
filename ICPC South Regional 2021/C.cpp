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
    string s;
    while (cin >> s)
    {
        int k;
        cin >> k;
        pair<char, char> best = {'z' + 1, 'z' + 1};
        unsigned long int n = s.length();
        for (unsigned long int i = 0; i < n; i++)
        {
            if (i > 0)
            {
                best = min(best, {s[i], s[i - 1]});
            }
            if (i + 1 < n)
            {
                best = min(best, {s[i], s[i + 1]});
            }
        }
        for (int i = 0; i < k; i++)
        {
            if (i % 2 == 0)
            {
                cout << best.first;
            }
            else
            {
                cout << best.second;
            }
        }
        cout << '\n';
    }
    return 0;
}