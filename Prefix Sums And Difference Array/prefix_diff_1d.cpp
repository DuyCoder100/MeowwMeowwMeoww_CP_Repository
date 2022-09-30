#include <bits/stdc++.h>
using namespace std;

//Mang hieu 1 chieu
vector<int> prefix_diff_1d(const vector<int>&a, int C=0)
{
    int n = (int)a.size();
    vector<int> prefix_diff(n - 1);
    for (int i = 0 ; i < n - 1; i++)
    {
        prefix_diff[i] = a[i + 1] - a[i];
    }
    return prefix_diff;
}