/*
    AUTHOR : SIDDHANT MANZE
    DATE   : 15/02/2021
*/

#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin>>t;
    ll arr[t];
    for(ll i=0;i<t;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+t);
    for(ll i=0;i<t;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}
