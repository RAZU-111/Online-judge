#include<iostream>
using namespace std;
int main()
{
    int a;
    long long b;
    cin>>a>>b;
    while(a !=0 && b !=0){
        long long ans = a*b;
        cout<<ans<<endl;
        cin>>a>>b;
    }

    return 0;
}
