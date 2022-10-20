#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n,digit;
    cin>>n;
    for(int i=2;i<=n;i++){

        digit += log10(i);
    }

    cout<<"Number of digits of "<<n<<"! is "<<(int)digit+1<<endl;

    return 0;
}
