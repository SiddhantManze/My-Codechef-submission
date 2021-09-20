/*
    PROBLEM : FLOW006
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
        ll n,sum=0;
        cin>>n;
        while(n!=0)
        {
            ll d=n%10;
            sum=sum+d;
            n=n/10;
        }
        cout<<sum<<endl;
    }
    return 0;
}
