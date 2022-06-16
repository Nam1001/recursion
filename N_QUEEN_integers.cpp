
#include<bits/stdc++.h>
using namespace std;
void issafe(int n,vector<vector<int>>&ans,vector<vector<int>>&boards,vector<int>&leftrow,vector<int>&upperdiagonal,vector <int> &lowerdiagonal,int col)
{
    if(col==n)
    {
        vector<int>temp;
        for(auto it:boards)
        {
            for(auto i:it)
            {
                temp.push_back(i);
            }
        }
        ans.push_back(temp);
        return;
    }
    for(int row=0;row<n;row++)
    {
        if(leftrow[row]==0 && upperdiagonal[n-1-row+col]==0 && lowerdiagonal[row+col]==0)
        {
            boards[row][col]=1;
            leftrow[row]=1;
            upperdiagonal[n-1-row+col]=1;
             lowerdiagonal[row+col]=1;
            issafe(n,ans,boards,leftrow,upperdiagonal,lowerdiagonal,col+1);
            boards[row][col]=0;
            leftrow[row]=0;
            upperdiagonal[n-1-row+col]=0;
             lowerdiagonal[row+col]=0;
            
       }
    }
}

vector<vector<int>> solveNQueens(int n) {
    vector<vector<int>>ans(n);
     vector<vector<int>>boards(n,vector<int>(n,0));
    vector<int>leftrow(n,0);
    vector <int> upperdiagonal(2*n-1,0);
    vector <int> lowerdiagonal(2*n-1,0);
    issafe(n,ans,boards,leftrow,upperdiagonal,lowerdiagonal,0);
    return ans;
    
}
int main()
{
    int n;
    cin>>n;
    vector<vector<int>> ans=solveNQueens(n);
    for(auto it:ans)
    {
        for(auto i:it)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
}