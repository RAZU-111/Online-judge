#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
 double n;
 cin>>fixed>>setprecision(2)>>n;

 if(n>=0 && n<=400.00)
 {
cout<<fixed<<setprecision(2)<<"Novo salario: "<<n+((n*15)/100)<<endl;
cout<<fixed<<setprecision(2)<<"Reajuste ganho: "<<((n*15)/100)<<endl;
cout<<"Em percentual: 15 %"<<endl;

 }
  if(n>=400.01 && n<=800.00)
 {
cout<<fixed<<setprecision(2)<<"Novo salario: "<<n+((n*12)/100)<<endl;
cout<<fixed<<setprecision(2)<<"Reajuste ganho:"<<((n*12)/100)<<endl;
cout<<"Em percentual: 12%"<<endl;

 }

  if(n>=800.01 && n<=1200.00)
 {
cout<<fixed<<setprecision(2)<<"Novo salario: "<<n+((n*10)/100)<<endl;
cout<<fixed<<setprecision(2)<<"Reajuste ganho: "<<((n*10)/100)<<endl;
cout<<"Em percentual: 10 %"<<endl;

 }
  if(n>=1200.01 && n<=2000.00)
 {
cout<<fixed<<setprecision(2)<<"Novo salario: "<<n+((n*7)/100)<<endl;
cout<<fixed<<setprecision(2)<<"Reajuste ganho: "<<((n*7)/100)<<endl;
cout<<"Em percentual: 7 %"<<endl;

 }
  if(n>2000.00)
 {
cout<<fixed<<setprecision(2)<<"Novo salario: "<<n+((n*4)/100)<<endl;
cout<<fixed<<setprecision(2)<<"Reajuste ganho: "<<((n*4)/100)<<endl;
cout<<"Em percentual: 4 %"<<endl;

 }
    return 0;
}
