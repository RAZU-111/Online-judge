#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    long long n,sum=0;
    cin>>n;

    for(int i=1; i<= sqrt(n); i++)
    {
        if(n%i==0){
             sum +=i;
            if(i != sqrt(n)){

                sum +=n/i;

            }

        }

    }

      cout<<sum<<endl;

   return 0;
}
