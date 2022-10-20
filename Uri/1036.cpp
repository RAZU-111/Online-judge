#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
    double a,b,c,r1,r2,x,y;
    cin>>a>>b>>c;
    x=(b*b)-(4*a*c);

    if(x>0 && a!=0)
    {
     y = sqrt(x);
     r1=(-b+y)/(2*a);
     r2=(-b-y)/(2*a);

     cout<<fixed<<setprecision(5)<<"R1"<<" = "<<r1<<endl<<"R2"<<" = "<<r2<<endl;

    }

    else
    {
        cout<<"Impossivel calcular"<<endl;
    }


   return 0;

}
