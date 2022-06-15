#include<bits/stdc++.h>
using namespace std;
void subsetsum(int arr[],int n,vector<int>&sum,int index,int sum1)
{
   if(index==n)
   {
     sum.push_back(sum1);
     return;
   }
   
   subsetsum(arr,n,sum,index+1,sum1+arr[index]);
   subsetsum(arr,n,sum,index+1,sum1);
   sort(sum.begin(),sum.end());

}
int main()
{
    int arr[]={3,2,1};
    int n=(sizeof(arr)/sizeof(arr[0]));
    vector<int>sum;
    subsetsum(arr,n,sum,0,0);
    for(auto it:sum)
    {
        cout<<it<<" ";
    }
}