#include<bits/stdc++.h>
using namespace std;
void permutation(vector<int>&arr,vector<vector<int>>&ans,int index)
{
    if(index==arr.size())
    {
        ans.push_back(arr);
        return;
    }
    for(int i=index;i<arr.size();i++)
    {
        swap(arr[index],arr[i]);
        permutation(arr,ans,index+1);
        swap(arr[index],arr[i]);
    }
}

int main()
{
    vector<int>arr={1,2,3};
    vector<vector<int>>ans;
    permutation(arr,ans,0);
    for(auto it:ans)
    {
        for(auto i:it)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
}