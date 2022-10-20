#include<bits/stdc++.h>
using namespace std;
int main()
{
    double x,p,b_d,t;
    cin>>x>>p;

    t=(100-x)/100;
    b_d=p/t;  //before discount

    cout<<fixed<<setprecision(2)<<b_d<<endl;


    return 0;
}
