/*
    PROGRAM : SNCKYEAR (Chef and SnackDown)
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
        int n;
        cin>>n;
        if(n==2010 || n==2015 || n==2016 || n==2017 || n== 2019)
        {
            cout<<"HOSTED"<<endl;
        }
        else
        {
            cout<<"NOT HOSTED"<<endl;
        }
    }
    return 0;
}