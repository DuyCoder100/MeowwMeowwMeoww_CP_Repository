#include <bits/stdc++.h>
using namespace std;

//Mang hieu 2 chieu
vector< vector<int> > prefix_diff_2d(const vector< vector<int> >&a)
{
    int m = (int)a.size();
    int n = (int)a[0].size();
    vector< vector<int> > prefix_diff(m, vector<int>(n, 0));
    
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            suffix_diff[i][j] = a[i][j];
            if (i > 0)
            {
                suffix_diff[i][j] -= a[i - 1][j];
            }
            if (j > 0)
            {
                suffix_diff[i][j] -= a[i][j - 1];
            }
            if (i > 0 && j > 0)
            {
                suffix_diff[i][j] += a[i - 1][j - 1];
            }
        }
    }

    return suffix_diff;
}