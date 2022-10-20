#include<bits/stdc++.h>
using namespace std;
long long equation(int a,int b)
{
    long long result =0;
    for(int i=2;i<=b;i+=2){
        result += pow(a,i);
    }
    return result;
}
int main()
{
    int  a,b;

    cin>>a>>b;
    cout<<equation(a,b)<<endl;
}
