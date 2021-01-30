#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v = {0,0,1,1,1,0,1,1,0,0,1,1,1,1};
    int cnt=0;
    int maxim=0;

    for(auto it=v.begin();it<=v.end();it++)
    {
        if(v[it]==1)
        {
            cnt++;
        }
        else
        {
            cnt=0;
        }
        maxim=max(maxim,cnt);
    }
    cout<<"Maximum no of consecutive 1's is "<<maxim<<endl;

}
