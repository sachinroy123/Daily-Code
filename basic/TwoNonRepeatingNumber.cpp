#include<bits/stdc++.h>
using namespace std;

void RepeatingNum(int a[],int n)
{
    map<int,int>m;

    for(int i=0;i<n;i++)
    {
        m[a[i]]++;
    }
    for(auto e : m)
    {
        if(e.second == 1)
        cout<<e.first<<" ";
    }
}

int main()
{
    // auto x = 's';
    // cout<<typeid(x).name()<<endl;
    int a[] = {1,2,3,4,5,6,3,5,2,1};
    int n = sizeof(a)/sizeof(a[0]);
    RepeatingNum(a,n);
}