#include<bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    if(n==0)
    return 1;
    return n*factorial(n-1);
}

int main()
{
    int n =5;
    // Using loop 

  int f = 1;
  for(int i=2;i<=n;i++)
  {
      f= f*i;
  }
  cout<<"foctorial of 5 :"<<f<<endl;


// Using Recursion 
cout<<"Using Recursion :"<<factorial(n)<<endl;


}