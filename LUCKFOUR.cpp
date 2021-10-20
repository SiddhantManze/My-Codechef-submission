/*
    PROBLEM : LUCKFOUR (Lucky Four)
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
        ll a;
        cin>>a;
        ll count=0;
        while(a!=0)
        {
            ll d=a%10;
            if(d==4) {count++;}
            a=a/10;
        }
        cout<<count<<endl;
    }
    return 0;
}
