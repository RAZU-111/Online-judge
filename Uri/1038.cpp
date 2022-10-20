#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
 int x,y;
  double a=4.00,b=4.50,c=5.00,d=2.00,e=1.50,ans=0;

    cin>>x>>y;
    if(x==1)
    {
     ans=a*y;
    }
 else if (x==2)
 {
 ans=b*y;
 }
 else if (x==3)
 {
  ans=c*y;
 }
  else if (x==4)
 {
  ans=d*y;
 }
 else if (x==5)
 {
  ans=e*y;
 }
 cout<<fixed<<setprecision(2)<<"Total: R$ "<<ans<<endl;

}
