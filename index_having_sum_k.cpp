#include<bits/stdc++.h>
using namespace std;
void sum1(int arr[],int sum,int n,vector<int>&ds,int i)
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
           
       }
       return;
      
   }
   ds.push_back(arr[i]);
   sum=sum+arr[i];
   sum1(arr,sum,n,ds,i+1);
    ds.pop_back();
    sum=sum-arr[i];
    sum1(arr,sum,n,ds,i+1);

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