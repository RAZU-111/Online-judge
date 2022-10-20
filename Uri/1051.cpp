#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double n;
    cin>>n;

    if( n<=2000.00)
    {
       cout<<"Isento"<<endl;
    }
   else if(n>=2000.01 && n<=3000.00)
    {
    cout<<fixed <<setprecision(2)<<"R$ "<<(n-2000.00)*.08<<endl;
    }
   else if (n>=3000.01 && n<=4500.00)
    {
    cout<<fixed<<setprecision(2)<<"R$ "<<((n-3000.00))*.18+1000.00*.08<<endl;
    }
    else if(n >= 4500.01)

  cout<<fixed<<setprecision(2)<<"R$ "<< ((n - 4500.00)*0.28 + 1500.00*0.18 + 1000.00*0.08)<<endl;



return 0;


}


