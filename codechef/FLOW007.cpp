/*
    PROGRAM : FLOW007 (Reverse The Number)
*/

#include<iostream>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,rev=0;
        cin>>n;
        while(n!=0)
        {
            ll d=n%10;
            rev=rev*10+d;
            n=n/10;
        }
        cout<<rev<<endl;
    }
    return 0;
}
