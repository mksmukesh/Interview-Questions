#include<iostream>
using namespace std;
int main()
{
    int rupee=15;
    int wc;//3 wrappers=1 chocolate
    for(int i=0;i<=rupee;i++)
    {
        if(i % 3==0)
        {
            wc=wc+1;
        }
    }
    int total_chocolate=rupee+wc;
    cout<<total_chocolate;
    return 0;
}
