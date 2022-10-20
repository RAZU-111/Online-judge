#include<iostream>
using namespace std;
int main()
{
    int k,n,w,sum=0,i;
    cin>>k>>n>>w;
    for(i=1;i<=w;i++)
    {
       sum +=i*k;
    }
    int ans = sum -n;
      if (ans <0)
      cout<<"0";
      else
        cout<<ans<<endl;
}
