#include<iostream>
using namespace std;
int main()
{
    int a,b,d;
    char c;
    cin>>a;
    cin>>b>>c>>d;
    if(c == '+' )
        if(b+d <=a )
        cout<<"OK"<<"\n";
      else
        cout<<"OVERFLOW"<<"\n";

   if(c == '*' )
         if(b*d <=a)
        cout<<"OK"<<"\n";
      else
        cout<<"OVERFLOW"<<"\n";

}
