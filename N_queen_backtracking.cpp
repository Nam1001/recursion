#include <bits/stdc++.h>
using namespace std;
void issafe(int n, vector<vector<string>> &ans, vector<string> &board, vector<int> &leftrows, vector<int> &upperdiagonal, vector<int> lowerdiagonal, int col)
{
    if (col == n)
    {
        ans.push_back(board);
        return;
    }
    for (int row = 0; row < n; row++)
    {
        if (leftrows[row] == 0 && lowerdiagonal[row + col] == 0 && upperdiagonal[n - 1 - row + col] == 0)
        {
            board[row][col] = 'Q';
            leftrows[row] = 1;
            lowerdiagonal[row + col] = 1;
            upperdiagonal[n - 1 - row + col] = 1;
            issafe(n, ans, board, leftrows, upperdiagonal, lowerdiagonal, col+1);
            board[row][col] = '.';
            leftrows[row] = 0;
            lowerdiagonal[row + col] = 0;
            upperdiagonal[n - 1 - row + col] = 0;
        }
    }
}
vector<vector<string>> slovenqueen(int n)
{
    vector<vector<string>> ans;
    vector<string> board(n);
    string s(n, '.');
    for (int i = 0; i < n; i++)
    {
        board[i] = s;
    }
    vector<int> leftrows(n, 0);
    vector<int> upperdiagonal(2 * n - 1, 0);
    vector<int> lowerdiagonal(2 * n - 1, 0);
    issafe(n, ans, board, leftrows, upperdiagonal, lowerdiagonal, 0);
    return ans;
}
int main()
{
    int n;
    cin >> n;
    vector<vector<string>> ans = slovenqueen(n);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << "Arrangement " << i + 1 << "\n";
        for (int j = 0; j < ans[0].size(); j++)
        {
            cout << ans[i][j];
            cout << endl;
        }
        cout << endl;
    }
}