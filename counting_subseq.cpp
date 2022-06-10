#include <bits/stdc++.h>
using namespace std;
int sum1(int arr[], int sum, int n, int i)
{
    if (i == n)
    {
        if (sum == 2)
        {
            return 1;
        }
        return 0;
    }
    sum = sum + arr[i];
    int l = sum1(arr, sum, n, i + 1);

    sum = sum - arr[i];
    int r = sum1(arr, sum, n, i + 1);
    return l+r;
}
int main()
{
    int arr[3] = {1, 2, 1};
    int sum = 0;
    int n = 3;
    int i = 0;
   cout<< sum1(arr, sum, n, i);
}