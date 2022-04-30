#include<bits/stdc++.h>
using namespace std;

int DecToOct(int n)
{
    int ans=0;
    int x=1;

    while(x<=n)
    {
        x = x*8;
    }
    x = x/8;

    while(x>0)
    {
        int temp = n/x;
        n = n -temp*x;
        ans = ans *10 + temp;
        x = x/8;
    }
    return ans;
}

int main()
{
    int n=15;
    cout<<DecToOct(n);
}