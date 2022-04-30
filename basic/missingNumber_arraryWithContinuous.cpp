#include<bits/stdc++.h>
using namespace std;

int missingNumber(int a[],int n)
{
    int x1=1;
    int x2=a[0];

    for(int i=2;i<=n+1;i++)
    {
        x1= x1^i;
    }
    for(int i=1;i<n;i++)
    {
        x2 = x2^a[i];
    }
    return (x1^x2);
}

int main()
{
    int a[]={1,2,3,4,5,6,8};
    int n = sizeof(a)/sizeof(a[0]);
    cout<<missingNumber(a,n);
}