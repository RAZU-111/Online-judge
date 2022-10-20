#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int i,n;
    cin>>n;
    bool flag=0;
    for(i=2;i<=sqrt(n);i++)
    {
      if(n%i == 0)
       {
            flag =1;
        }
    }
       if(flag == 0)
     {
        cout<<"YES"<<endl;
     }
    else
        cout<<"NO"<<endl;
}
