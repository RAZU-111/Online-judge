#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long  n;
    cin>>n;
    double x= log2(n)/log2(2);
    if(x - (long long )x == 0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
