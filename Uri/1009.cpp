#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
   double salary,sell_product,total;
   char name[10] ;
   cin>>name;
   cin>>salary>>sell_product;

   total = salary +((sell_product *15)/100);
   cout<<fixed<<setprecision(2)<<"TOTAL "<<"= "<<"R$ "<<total<<endl;

      return 0;


}
