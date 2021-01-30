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
    int s;
    cout<<"Enter req. sum of subarray"<<endl;
    cin>>s;
    int  st=arr[0];
    int en=arr[0];
    int currSum=0;
    for(int i=0;i<n;i++)
    {
        currSum+=en;

    }
}
