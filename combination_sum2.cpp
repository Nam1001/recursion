#include<bits/stdc++.h>
using namespace std;
void findcombination(vector<int>&arr,vector<vector<int>>&ans,vector<int>&ds,int target,int index)
{
     if(index==arr.size())
     {
         if(target==0)
         {
            sort(ds.begin(),ds.end());
            ans.push_back(ds);
         }
         return;
     }
     if(arr[index<=target])
     {
     ds.push_back(arr[index]);
     findcombination(arr,ans,ds,target-arr[index],index+1);
     ds.pop_back();
     }
     findcombination(arr,ans,ds,target,index+1);
}
void combinationsum(vector<int> &arr,int target)
{
    vector<vector<int>>ans;
    vector<int>ds;
    findcombination(arr,ans,ds,target,0);
    sort(ans.begin(),ans.end());
    vector<vector<int>>::iterator it;
    it=unique(ans.begin(),ans.end());
    ans.resize(distance(ans.begin(),it));
    for(auto i:ans)
    {
        for(auto j:i)
        {
            cout<<j;
        }
        cout<<endl;
    }

}

int main()
{
    vector<int> arr={10,1,2,7,6,1,5};
   
    int target;
    cout<<"enter the target";
    cin>>target;
    combinationsum(arr,target);
   
}