#include<iostream>

using namespace std;
int main()
{
  long long x, year ,month,day,result1,result2;
  cin >>x;
   year = x/365;
   result1=year;
   month = (x-result1*365)/30;
   result2=month;
   day=(x-result1*365-result2*30);

  cout<<result1<<" years"<<endl<<result2<<" months"<<endl<<day<<" days"<<endl;


  }
