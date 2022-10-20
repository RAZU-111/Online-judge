#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n,i;
    double a,b,c,avg;
    cin>>n;

    for(i=1;i<=n;i++)
    {
        cin>>a>>b>>c;
        avg = (a*2+ b*3+ c*5)/(10);
        cout<<fixed<<setprecision(1)<<avg<<endl;

    }


    return 0;
}
