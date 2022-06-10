#include <bits/stdc++.h>
using namespace std;
bool f(char a[], int i, int n)
{
    if (i <= n / 2)
    {
        if (a[i] == a[n - i - 1])
        {
            f(a, i + 1, n);
            return true;
        }
        else
        {
            return false;
        }
    }
    
}
int main()
{
    int n;
    cout << "enter the value";
    cin >> n;
    char a[n];
    cout << "enter the string";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    bool b=f(a,0,n);
    cout<<b;
}