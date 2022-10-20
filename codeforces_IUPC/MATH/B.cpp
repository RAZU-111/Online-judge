#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long long  n;
    cin>>n;
    bool flag=0;
    if(n==0 || n==1){
       flag =1;
    }

    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i == 0)
           {
            flag =1;
             break;
           }
    }
    if(flag == 0)
        {
           cout<<"YES"<<endl;
        }
        else
        {
            cout <<"NO"<<endl;
        }
    return 0;
}
