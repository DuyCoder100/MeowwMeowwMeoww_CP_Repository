#include <bits/stdc++.h>
using namespace std;

//Mang cong don 1 chieu
vector<int> prefix_sum_1d(const vector<int>&a, int C=0)
{
    int n = (int)a.size();
    vector<int> prefix_sum(n + 1);
    for (int i = 0 ; i < n ; i++)
    {
        prefix_sum[i + 1] = prefix_sum[i] + a[i];
    }
    return prefix_sum;
}