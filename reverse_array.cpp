#include<bits/stdc++.h>
using namespace std;

int* f(int a[],int i,int j)
{
    if(i>j)
    {
        return a;
    }
    swap(a[i],a[j]);
    f(a,i+1,j-1);

}

int main()
{
    int n;
    cout<<"enter the value";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int *p=f(a,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<p[i];
    }
    
    
}