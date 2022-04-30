#include<bits/stdc++.h>
using namespace std;

/// return odd number of times of a number
int missingNum(int a[],int s)
{
    int res=0;
    for(int i=0;i<s;i++)
    {
        res = res ^ a[i];
    }
    return res;
}

int main()
{
    int a[] ={2,3,3,3,2,2,2,8,8,9,3};
    int s = sizeof(a)/sizeof(a[0]);
    cout<<missingNum(a,s);
}