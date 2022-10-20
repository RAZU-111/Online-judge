#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long f=0;
    long long s=1;
    if(n==1)
    {
        cout<<f<<endl;
    }
    else if(n==1)
    {
        cout<<s<<endl;

    }
    else
    {
        for(int i=3;i<=n;i++){
            long long fib = f + s;
             f=s;
             s=fib;
        }
        cout<<s<<endl;
    }
}
