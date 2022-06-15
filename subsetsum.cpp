#include<bits/stdc++.h>

using namespace std;
class Solution {
  public:
    void solve(int ind, vector < int > & arr, int n, vector < int > & ans, int sum) {
      if (ind == n) {
        ans.push_back(sum);
        return;
      }
      //element is picked
      solve(ind + 1, arr, arr.size(), ans, sum + arr[ind]);
      //element is not picked
      solve(ind + 1, arr, arr.size(), ans, sum);
    }
  vector < int > subsetSums(vector < int > arr, int k1) {
    vector < int > ans;
    solve(0, arr, arr.size(), ans, 0);
    sort(ans.begin(), ans.end());
    reverse(ans.begin(),ans.end());
    vector<int>k;
    for(int  i=0;i<k1;i++)
    {
        k.push_back(ans[i]);
    }
    // reverse(k.begin(),k.end());
    return k;
  }
};


int main() {
  int t;
  cin>>t;
  while(t--)
  {
   int n;
   cin>>n;
  vector< int > popularity(n);
  for(int i=0;i<n;i++)
  {
     int j;
     cin>>j;
     popularity.push_back(j);
  }
  int k1;
  cin>>k1;
  Solution ob;
  vector < int > ans = ob.subsetSums(popularity,  k1);
//   sort(ans.begin(), ans.end());
  cout<<"The sum of each subset is "<<endl;
  for (auto sum: ans) {
    cout << sum << " ";
  }
  cout << endl;
  }
  return 0;
}