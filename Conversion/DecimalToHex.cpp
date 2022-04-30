#include<bits/stdc++.h>
using namespace std;

string DecToHex(int n)
{
    string s="";
    int x=1;
    while(x<=n)
    {
        x =x*16;
    }
    x = x/16;

  while(x>0)
  {
      int temp = n/x;
      n= n -temp*x;
      x = x/16;
      if(temp <=9)
      {
          s = s + to_string(temp);
      }else{
          char c = 'A'+temp-10;
           s.push_back(c);
      }
  }

    return s;
}

int main()
{
    int n = 754;
    cout<<DecToHex(n);
}