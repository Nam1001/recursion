#include <bits/stdc++.h>
using namespace std;
void findcombination(vector<int> &arr, vector<vector<int>> &ans, vector<int> &ds, int target, int index)
{
  
    if (target == 0)
    {
        for (int i = 0; i < ds.size(); i++)
        {
            cout << ds[i];
        }
        cout << "\n";
        return;
    }
  

    for (int i = index; i < arr.size(); i++)
    {
        if (arr[i] > target)
        {
            break;
        }
        if (i>index && arr[i] == arr[i - 1])
        {
            continue;
        }

        ds.push_back(arr[i]);
        findcombination(arr, ans, ds, target - arr[i], i + 1);
        ds.pop_back();
    }
}
void combinationsum(vector<int> &arr, int target)
{
    vector<vector<int>> ans;
    vector<int> ds;
    findcombination(arr, ans, ds, target, 0);
}

int main()
{
    vector<int> arr ={10,1,2,7,6,1,5};
    sort(arr.begin(), arr.end());
    int target;
    cout << "enter the target";
    cin >> target;
    combinationsum(arr, target);
}