#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=5741;
    int temp = n;
    int r=0;
    while(n>0)
    {
        int lastDigit = n%10;
        r = r*10 + lastDigit;
        n /=10;
    }
   cout<<r<<endl;
}