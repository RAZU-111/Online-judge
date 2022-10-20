#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
   int t;
   double x,y,r;
   cin>>t;
   while(t--){
    cin>>x>>y;
    if(x!=0 && y!=0){
        r=x/y;
        cout<<fixed<<setprecision(1)<<r<<endl;
    }
    else if(x==0 && y!=0){
        r=x/y;
        cout<<fixed<<setprecision(1)<<r<<endl;
    }
    else if(x!=0 && y==0 ){
        cout<<"divisao impossivel"<<endl;
    }
   }

}
