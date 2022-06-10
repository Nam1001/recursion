#include<bits/stdc++.h>
using namespace std;
void findcombination(vector<int>&arr,vector<vector<int>>&ans,vector<int>&ds,int target,int index)
{
     if(index==arr.size())
     {
         if(target==0)
         {
            for(int i=0;i<ds.size();i++)
            {
                cout<<ds[i];
            }
            cout<<"\n";
         }
         return;
     }
     if(arr[index]<=target)
     {
     ds.push_back(arr[index]);
     findcombination(arr,ans,ds,target-arr[index],index);
     ds.pop_back();
     }
     findcombination(arr,ans,ds,target,index+1);
}
void combinationsum(vector<int> &arr,int target)
{
    vector<vector<int>>ans;
    vector<int>ds;
    findcombination(arr,ans,ds,target,0);
    
}

int main()
{
    vector<int> arr={1,2,2,3};
   
    int target;
    cout<<"enter the target";
    cin>>target;
    combinationsum(arr,target);
   
}