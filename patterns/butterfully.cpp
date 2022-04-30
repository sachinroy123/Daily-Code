#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=5;

    for(int i=1;i<=n;i++)
    {
        int j;
        for( j=1;j<=i;j++)
        {
            cout<<"*";
        }
        for( j=1;j<=2*(n-i);j++)
        {
             cout<<" ";
        }
           for( j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
     for(int i=n;i>=1;i--)
    {
        int j;
        for( j=1;j<=i;j++)
        {
            cout<<"*";
        }
        for( j=1;j<=2*(n-i);j++)
        {
             cout<<" ";
        }
           for( j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}