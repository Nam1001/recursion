#include<bits/stdc++.h>
using namespace std;
// void rat(int i,int j,vector<vector<int>>&path,vector<vector<int>>&vis,string move,vector<string>&ans,int n)
// {
//     if(i==n-1 && j==n-1)
//     {
//         ans.push_back(move);
//         return;
//     }
//     // downward
//     if(i+1<n && path[i+1][j]==1 && vis[i+1][j]==0)
//     {
//         vis[i][j]=1;
//         rat(i+1,j,path,vis,move+'D',ans,n);
//         vis[i][j]=0;
//     }
//     // upwards
//     if(i-1>0 && path[i-1][j]==1 && vis[i-1][j]==0)
//     {
//         vis[i][j]=1;
//         rat(i-1,j,path,vis,move+'U',ans,n);
//         vis[i][j]=0;

//     }
//     // leftwards
//     if(j-1>=0 && path[i][j-1]==1 && vis[i][j-1]==0)
//     {
//         vis[i][j]=1;
//         rat(i,j-1,path,vis,move+'L',ans,n);
//         vis[i][j]=0;
//     }
//     //  rightwards
//      if( j+1<n && path[i][j+1]==1 && vis[i][j+1]==0)
//     {
//         vis[i][j]=1;
//         rat(i,j+1,path,vis,move+'R',ans,n);
//         vis[i][j]=0;
//     }

// }
// int main()
// { 
//     int n=4;
//     vector<vector<int>> path={{1,0,0,0},
//                               {1,1,0,1},
//                               {1,1,0,0},
//                               {0,1,1,1}};
//     vector<vector<int>> vis(n,vector<int>(n,0));
//     vector<string> ans;
//     if(path[0][0]==1)
//     {
//         rat(0,0,path,vis,"",ans,n);
//     }
//     for(auto it:ans)
//     {
//         cout<<it<<" ";
//     }
// }

//                                WITHOUT USING FOUR DIFFERENT CONDITIONS
// ----------------------------------------------------------------------------------------------------------------
void rat(int i,int j,vector<vector<int>>&path,vector<vector<int>>&vis,string move,vector<string>&ans,int n,int d1[],int d[])
{
    if(i==n-1 && j==n-1)
    {
        ans.push_back(move);
        return;
    }
    string s="DLRU";
    for(int index=0;index<=n;index++)
    {
        int nexti=i+d[index];
        int nextj=j+d1[index];
        if(nexti<n && nextj<n && nexti>=0 && nextj>=0 && path[nexti][nextj]==1 && vis[nexti][nextj]==0)
        {
            vis[i][j]=1;
            rat(nexti,nextj,path,vis,move+s[index],ans,n,d1,d);
            vis[i][j]=0;
        }
    }

}
int main()
{ 
    int n=2;
    vector<vector<int>> path={{1,0},
                              {1,1},
                              };
    vector<vector<int>> vis(n,vector<int>(n,0));
    vector<string> ans;
    int d[n]={+1,0,0,-1};
    int d1[n]={0,-1,+1,0};
    if(path[0][0]==1)
    {
        rat(0,0,path,vis,"",ans,n,d1,d);
    }
    for(auto it:ans)
    {
        cout<<it<<" ";
    }
}
