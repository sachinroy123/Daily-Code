#include<bits/stdc++.h>
using namespace std;

int DigitCount(int n)
{
    if(n/10==0)
    return 1;
    return 1+DigitCount(n/10);
}

int main()
{
    int n= 12345;
    int m=n;
    int c=0;
   // while loop 
   while(n)
   {
     c++;
     n /= 10;
   }
   cout<<"Using while loop :"<<c<<endl;
   c=0;
   n=m;

   // Using string method
   string str = to_string(n);
   cout<<"Using String Method :"<<str.size()<<endl;

  // Using recursion
     cout<<"using recursion :"<<DigitCount(n)<<endl;

  // Using log10
  cout<<"Using log method :"<<floor(log10(n))+1<<endl;

}