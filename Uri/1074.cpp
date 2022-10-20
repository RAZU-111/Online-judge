#include<iostream>
using namespace std;
int main()
{
    int n,x;
    cin>>x;
    for(int i=1;i<=x;i++)
    {
        cin>>n;
        if (n%2==0 && n<0 )
        {
            cout<<"EVEN NEGATIVE"<<endl;
        }
        if (n%2==0 && n>0 )
        {
            cout<<"EVEN POSITIVE"<<endl;
        }
        if (n%2!=0 && n>0 )
        {
            cout<<"ODD POSITIVE"<<endl;
        }
         if (n%2!=0 && n<0 )
        {
            cout<<"ODD NEGATIVE"<<endl;
        }

        if (n==0 )
        {
            cout<<"NULL"<<endl;
        }

    }
    return 0;
}
