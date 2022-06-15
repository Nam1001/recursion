#include<bits/stdc++.h>
using namespace std;
void subsetsum(int arr[],int n,vector<vector<int>>&sum,int index,vector<int>&ds)
{
    sum.push_back(ds);
    
    
   for(int i=index;i<n;i++)
   {
     if(i!= index && arr[i]==arr[i-1])
     {

        continue;
     }
     ds.push_back(arr[i]);
     subsetsum(arr,n,sum,i+1,ds);
     ds.pop_back();

   }


}
int main()
{
    int arr[]={1,2,2,2,3,3};
    int n=(sizeof(arr)/sizeof(arr[0]));
    vector<vector<int>>ans;
    vector<int>ds;
    subsetsum(arr,n,ans,0,ds);

    for(auto it:ans)
    {
        for(auto i:it)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    
}