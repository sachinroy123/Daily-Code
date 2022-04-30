#include<bits/stdc++.h>
using namespace std;

bool IsPrime(int n)
{
    for(int i=0;i<=sqrt(n);i++)
    {
        if(n%i==0)
        return false;
    }
    return true;
}

int main()
{
    int n=77;

     (IsPrime(n)) ? cout<<"Prime " : cout<<"Not Prime";
     cout<<" working";

}