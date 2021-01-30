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
    /*for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
            if(arr[j]>arr[i] && arr[j]>arr[j+1])
        {
            cout<<"Record breaking day ="<<arr[j]<<endl;
        }
    }*/
    int record=0;
    int maxm=arr[0];
    for(int i=1;i<=n;i++)
    {
         if(arr[i]>arr[i-1] && arr[i]>arr[i+1])
            {
            record++;
        }
        maxm=max(maxm,arr[i]);


    }
    if(arr[0]>arr[1] || arr[n]>maxm)
          {
              record++;
          }
    cout<<record;
}
