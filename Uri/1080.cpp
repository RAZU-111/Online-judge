#include<iostream>
using namespace std;
int main()
{
   int n;
   int maxx=0;
   int pos=0;
   for(int i=0;i<=100;i++){
    cin>>n;
    if(n>maxx){
         maxx=n;
         pos=i;
    }

   }
   cout<<maxx<<endl<<pos+1<<endl;

   return 0;
}
