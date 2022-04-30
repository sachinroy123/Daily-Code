#include<bits/stdc++.h>
using namespace std;

int OctalToDecimal(int n)
{
    int ans=0;
    int x=1;

    while(n>0)
    {
        int lastDigit = n%10;
        ans = ans+ lastDigit*x;
        x= x*8;
        n = n/10;
    }
    return ans;
}

int main()
{
    int n=137;
    cout<<OctalToDecimal(n);
}