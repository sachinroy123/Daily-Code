#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=5;

    for(int i=1;i<=n;i++)
    {
        int j;
        for( j=1;j<=n-i;j++)
        {
             cout<<" ";
        }
        for(j=i;j>=1;j--)
        {
            cout<<j;
        }

        for(j=2;j>1 && j<=i;j++)
        cout<<j;

        cout<<endl;
    }
}