#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
    double x1,y1,x2,y2,d;
    cin>>x1>>y1;
    cin>>x2>>y2;
    d =((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    cout<<fixed<<setprecision(4)<<sqrt(d)<<endl;

      return 0;

}
