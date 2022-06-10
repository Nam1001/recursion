#include<bits/stdc++.h>
using namespace std;
bool sum1(int arr[],int sum,int n,vector<int>&ds,int i)
{
   if(i==n)
   {
       if(sum==2)
       {
           for(auto it:ds)
           {
               cout<<it<<" ";
           }
           cout<<endl;
           return true;
           
       }
       return false;
      
   }
   ds.push_back(arr[i]);
   sum=sum+arr[i];
  if( sum1(arr,sum,n,ds,i+1)==true)
  {
      return true;
  }
    ds.pop_back();
    sum=sum-arr[i];
   if( sum1(arr,sum,n,ds,i+1)==true)
   {
       return true;
   }
   return false;

}
int main()
{
    int arr[3]={1,2,1};
    int sum=0;
    int n=3;
    int i=0;
    vector<int>ds;
    sum1(arr,sum,n,ds,i);
}