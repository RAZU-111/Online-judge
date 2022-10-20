#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int i,n;
    cin>>n;

    for(i=2;i<=n;i++){
        bool flag=0;
        for(int j=2;j<i;j++){

            if(i%j==0)
                flag=1;

        }
        if(flag==0)
            cout<<i<<" ";

    }

   return 0;
}
