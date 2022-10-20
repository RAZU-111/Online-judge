#include <iostream>
#include<iomanip>

using namespace std;

int main()
{
  double n , i,sum=0,count=0;

  for(i=1;i<=6;i++)
 {
    cin>>n;
     if(n>0)
     {
        sum = sum +n;
        count++;
     }
 }

double avg = sum / count ;

cout<<count<<" valores positivos"<<endl;
cout<< fixed<<setprecision(1)<< avg<<endl;

}


