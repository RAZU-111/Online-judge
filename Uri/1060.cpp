#include <iostream>
using namespace std;

 int main() {

  double n,i,sum=0;

    for(i=1;i<=6;i++)
    {
        cin>>n;
        if(n>0)
        sum++;
    }

     cout<<sum<<" valores positivos"<<endl;

    return 0;
}
