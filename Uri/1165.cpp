#include<iostream>
#include<cmath>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--){
     int i,n;
    cin>>n;
    bool flag=0;
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i == 0)
           {
            cout<<n<<" nao eh primo"<<endl;
            flag =1;
            break;
           }
    }
    if(flag == 0)
        {
            cout<<n<<" eh primo"<<endl;
        }
   }
}
