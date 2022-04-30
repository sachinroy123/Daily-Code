#include<bits/stdc++.h>
using namespace std;

int DecToBinary(int n)
{
    int ans=0;
    int x=1;

    while(x<=n)
    {
        x = x*2;
    }
    x= x/2;

    while(x>0)
    {
        int temp = n/x;
        n = n - temp*x;
        ans = ans *10 + temp;
        x = x/2;
    }
    return ans;
}

int main()
{
    int n=11;
    cout<<DecToBinary(n);
}