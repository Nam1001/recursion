#include<bits/stdc++.h>
using namespace std;

int f(int n,int sum)
{
   if(n<1)
   {
       return sum;
   }
   f(n-1,(sum+n));
}
int main()
{
    int n;
    cout<<"enter the value";
    cin>>n;
    int a=f(n,0);
    cout<<a;
    
}