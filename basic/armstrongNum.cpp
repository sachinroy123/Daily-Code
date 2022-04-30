#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n = 153;
    int temp = n;
    int ans =0;

    while(n>0)
    {
        int lastDigit = n%10;
        ans = ans+ (pow(lastDigit,3)+0.5);
        n = n/10;

    }
    if(ans==temp)
    cout<<"Number is armstrong :"<<endl;
    else{
        cout<<"Number is not armstrong :"<<endl;
    }

}