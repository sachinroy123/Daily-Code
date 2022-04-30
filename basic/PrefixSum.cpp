#include<bits/stdc++.h>
using namespace std;

void prefixSum(int arr[],int prefix[],int n)
{
    prefix[0]=arr[0];
    for(int i=1;i<n;i++)
    {
        prefix[i]= prefix[i-1]+arr[i];
    }
}

int main()
{
    int arr[]={1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int prefix[n];

    prefixSum(arr,prefix,n);
    for(int i=0;i<n;i++)
    {
        cout<<prefix[i]<<" ";
    }


}