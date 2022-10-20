
#include<iostream>
using namespace std;
int main()
{
   char x,result ;
   cin >>x;
   if(x>='a'&& x<='z'){
    result = x-32;
    cout<<result<<endl;
   }
 else if(x>='A' && x<='Z'){
    result =x+32;
    cout<<result<<endl;
 }

}
