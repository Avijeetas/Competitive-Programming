#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
long long power(long long base,long long exp)
{

    if(exp==0)
        return 1;
    long long p=power(base,exp/2);
    p=(p*p)%mod;
    return exp%2==0?p:(base*p)%mod;


}


