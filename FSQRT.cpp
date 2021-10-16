/*
    PROBLEM : FSQRT (Finding Square Roots)
*/

#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll squareroot=sqrt(n);
        cout<<squareroot<<endl;
    }
    return 0;
}
