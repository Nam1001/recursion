#include <bits/stdc++.h>
using namespace std;

//                                            BRUTE FORCE
// ---------------------------------------------------------------------------------------------------------------------
// void permutation(vector<int>&arr, int index,vector<vector<int>> &ds)
// {
//     if(index==arr.size())
//     {
//         ds.push_back(arr);
//         return;
//     }
//     for(int i=index;i<arr.size();i++)
//     {
//        swap(arr[index],arr[i]);
//        permutation(arr,index+1,ds);
//        swap(arr[index],arr[i]);
//     }

// }
// int main()
// {
//     vector<int>arr={1,2,3};
//     vector<vector<int>> ds;
//     permutation(arr,0,ds);
//     sort(ds.begin(),ds.end());
//     for(int i=0;i<ds[0].size();i++)
//     {
//         cout<<ds[4][i];
//     }
// }

//                                              EFFICIENT APPROCH
// ---------------------------------------------------------------------------------------------------------------
int main()
{
    vector<int>arr={1,2,3};
    string ans="";
    int k=2;
    int n=3;
    int fact=1;

    for(int i=1;i<n;i++)
    {
        fact=fact*i;
    }
    k=k-1;
    while(true)
    {
        ans=ans+to_string(arr[k/fact]);
        
        arr.erase(arr.begin()+k/fact);
        if(arr.size()==0)
        {
            break;
        }
        k=k%fact;
        fact=1;
        for(int i=1;i<arr.size();i++)
        {
            fact=fact*i;
        }
        
    }
    cout<<ans;

}