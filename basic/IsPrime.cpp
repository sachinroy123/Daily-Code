#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
   for(int i=2;i<=sqrt(n);i++)
   {
       if(n%i==0)
       return false;
   }
   return true;

}

int main()
{
    int n=97;
    if(isPrime(n))
    {
        cout<<"Prime :"<<endl;
    }
    else{
        cout<<"not prime "<<endl;
    }
}