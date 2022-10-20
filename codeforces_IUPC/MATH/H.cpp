#include<iostream>
using namespace std;

long long  gcd(long long a ,long long b)
{
    while(b!=0){
        long long rem = a%b;
        a=b;
        b=rem;

    }
    return a;

}


int main()
{
    long long a,b,rem;
    cin>>a>>b;
    long long Lcm=(a*b)/gcd(a,b);

    cout<<gcd(a,b)<<" "<<Lcm<<endl;


}
