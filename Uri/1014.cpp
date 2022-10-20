#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int x;
    double y,t;
    cin>>x>>y;
    t = x/y;
    cout<<fixed<<setprecision(3)<<t<<" km/l"<<endl;

}
