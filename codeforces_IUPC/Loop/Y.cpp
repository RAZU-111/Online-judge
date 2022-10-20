#include<iostream>
using namespace std;
int main()
{
    int n;
       cin>>n;
       if(n==1){

        cout<<0<<" ";
        return 0;
      }
       if(n==2){

        cout<<0<<" "<<1<<" ";
        return 0;
       }
       cout<<0<<" "<<1<<" ";

       int n1=0;
       int n2=1;

       for(int i=3;i<=n;i++){
        int fib=n1+n2;

        cout<<fib<<" ";

        n1=n2;
        n2=fib;

       }

       return 0;
}

