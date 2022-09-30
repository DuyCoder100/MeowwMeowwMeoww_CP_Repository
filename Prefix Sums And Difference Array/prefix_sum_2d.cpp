#include <bits/stdc++.h>
using namespace std;

//Mang cong don 2 chieu
//Cac phan tu trong mang cong don luu tong cua toan bo phan tu chua trong hinh chu nhat [1; i] x [1; j]
vector< vector<int> > prefix_sum_2d_1(const vector< vector<int> > &a)
{
    int m = (int)a.size();
    int n = (int)a[0].size();
    vector< vector<int> > prefix_sum(m + 1, vector<int>(n + 1, 0));
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            prefix_sum[i][j] = prefix_sum[i - 1][j] + prefix_sum[i][j - 1] - prefix_sum[i - 1][j - 1] + a[i - 1][j - 1];
        }
    }
    return prefix_sum;
}

//Tong cong don cua toan bo phan tu chua trong hinh chu nhat co goc trai (x1, y1) va goc phai (x2, y2)
int prefix_sum_2d_2(const vector< vector<int> >&a, int x1, int y1, int x2, int y2)
{
    int m = (int)a.size();
    int n = (int)a[0].size();
    vector< vector<int> > prefix_sum(m + 1, vector<int>(n + 1, 0));
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            prefix_sum[i][j] = prefix_sum[i - 1][j] - prefix_sum[i][j - 1] - prefix_sum[i - 1][j - 1] + a[i - 1][j - 1];
        }
    }
    int res = prefix_sum[x2][y2] - prefix_sum[x1 - 1][y2] - prefix_sum[x2][y1 - 1] + prefix_sum[x1 - 1][y1 - 1];
    return res;
}