//question find max till i
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
int maxim=arr[0];
    for(int i=0;i<n;i++)
    {

        maxim=max(maxim,arr[i]);
        cout<<maxim<<" ";
    }
}
