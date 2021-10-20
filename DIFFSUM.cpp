/*
    PROBLEM : DIFFSUM (Sum OR Difference)
*/

#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll a,b;
    cin>>a>>b;
    if(a>b)
    {
        cout<<a-b;
    }
    else
    {
        cout<<a+b;
    }
    return 0;
}
