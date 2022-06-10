#include<bits/stdc++.h>
using namespace std;
void sub(int i,int arr[],vector<int>&list ,int n)
{
    if(i==n)
    {
        for(auto it:list)
        {
            cout<<it<<" ";

        }
       cout<< endl;
        return;
    }
    list.push_back(arr[i]);//take or pick the particular index to the subsequence
    sub(i+1,arr,list,n);
    list.pop_back();
    sub(i+1,arr,list,n);//not to take or remove the index from the subsequence;

}
int main()
{
    int arr[7]={1,7,8,6,7,8,9};
    int i=0;
    int n=7;
    vector<int>list1;
    sub(0,arr,list1,n);
}