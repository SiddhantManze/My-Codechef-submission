/*
    PROGRAM : HS08TEST (ATM)
*/

#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    float a,b;
    cin>>a>>b;
    if(remainder(a,5)==0 && b>=a+0.5)
    {
        cout<<b-(0.5+a);
    }
    else
    {
        cout<<b;
    }
    return 0;
}
