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
    int pd=arr[1]-arr[0];
    int curr=2;
    int ans=2;
    for(int i=2;i<n;i++)
    {
        int diff=arr[i]-arr[i-1];
        if(pd==diff)
        {
            curr++;
        }
        else
        {
            pd=arr[i]-arr[i-1];
            curr=2;
        }
         ans=max(ans,curr);
    }

    cout<<ans;
}
