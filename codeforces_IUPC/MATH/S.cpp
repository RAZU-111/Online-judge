#include<bits/stdc++.h>
using namespace std;
  double  area(double a, double b, double c){

  double s =(a+b+c)/2;
  double x = sqrt (s *(s-a)*(s-b)*(s-c));


  return x;


}
int main()
{
    double a,b,c;
    cin>>a>>b>>c;

    if((a+b>c) && (b+c >a) && (c+a>b))
        {
            cout<<"Valid"<<endl;
            cout<<fixed<<setprecision(6)<<area(a,b,c);
        }
    else
        cout<<"Invalid"<<endl;


    return 0;

}
