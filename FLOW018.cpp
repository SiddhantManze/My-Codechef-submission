/*
    PROGRAM : FLOW018 (Small Factorial)
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
        ll n,fact=1;
        cin>>n;   
        for(ll i=1;i<=n;i++)    
        {
            fact=fact*i;
        }
        cout<<fact<<endl; 
    }
    return 0;
}
  
