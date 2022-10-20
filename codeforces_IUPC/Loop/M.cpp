#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,b;
      int count=0;
    cin>>a>>b;
    for(int i=a;i<=b;i++){
        bool flag=0;
        int n=i;

        while(n!=0)
        {
         int digit = n%10;
         n=n/10;
         if(digit !=4 && digit!=7)
         {
             flag =1;
         }
        }
        if(flag==0)
        {
          cout<<i<<" ";
          count++;
        }
    }
       if(count == 0)
        cout<<-1;

 return 0;
}
