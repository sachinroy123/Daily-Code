#include<bits/stdc++.h>
using namespace std;

bool palindrome(string s)
{
    int len = s.size();
    for(int i=0;i<len/2;i++)
    {
        if(s[i]!=s[len-i-1])
        return false;
    }
    return true;
}

int main()
{
    int n = 128721;
    string str = to_string(n);
    if(palindrome(str))
    {
        cout<<"palindrome number :"<<endl;
    }
    else{
        cout<<"Not Palindrome :"<<endl;
    }
}