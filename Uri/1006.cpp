#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
  double A,B,C,avg;
  cin>>A>>B>>C;
  A=A*2;
  B=B*3;
  C=C*5;


  avg=(A+B+C)/(2+3+5);
  cout <<fixed<<setprecision(1)<<"MEDIA "<<"= " <<avg<<endl;

  return 0;


}
