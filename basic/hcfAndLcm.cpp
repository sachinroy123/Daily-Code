#include<bits/stdc++.h>
using namespace std;

int findGcd(int a, int b)
{
    if(a==0)
    return b;
    findGcd(b%a,a);
}
int findLcm(int a,int b)
{
    return (a*b)/findGcd(a,b);
}


int main()
{
    int a=36;
    int b=48;
    cout<<findGcd(a,b)<<endl;
    cout<<findLcm(a,b);

}