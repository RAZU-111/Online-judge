#include<iostream>
using namespace std;

int main()
{
    int t,n,sum=0;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        for(int i=1;i<=n;i++){
            if(n%i==0)
                sum+=i;

        }
           int a =sum-n;

        if(a==n)
            cout<<n<<" eh perfeito"<<endl;
        else
            cout<<n<<" nao eh perfeito"<<endl;
            sum=0;
    }

}




