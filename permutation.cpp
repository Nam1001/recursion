#include <bits/stdc++.h>
using namespace std;
void permutation(int arr[], int n, vector<int> &ds, vector<vector<int>> &ans, vector<int> &mark)
{
    if (ds.size() == n)
    {
        ans.push_back(ds);
        return;
    }
    for (int i = 1; i <= n; i++)
    {
        if (mark[i] == 0)
        {
            ds.push_back(i);
            mark[i] = 1;
            permutation(arr, n, ds, ans, mark);
            ds.pop_back();
            mark[i] = 0;
        }
    }
}
int main()
{
    int arr[3] = {1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> ds;
    vector<vector<int>> ans;
    vector<int> mark(4, 0);
    permutation(arr, n, ds, ans, mark);
    for (auto it : ans)
    {
        for (auto i : it)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}