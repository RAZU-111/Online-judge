#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int i,n,m,gcd;
    cin>>n>>m;
    for(i=1;i<=n && i<=m;i++)
        if(n%i==0 && m%i==0)
        gcd=i;
        cout<<gcd<<endl;

}
