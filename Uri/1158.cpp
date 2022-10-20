#include<iostream>
using namespace std;
int main()
{
    int t,a,b,sum=0;
    cin>>t;
    while(t--){
        cin>>a>>b;
        if(a%2==0)
            a++;
        for(int i=0;i<b;i++){
            sum+=a;
            a+=2;
        }
        cout<<sum<<endl;
        sum=0;
    }

}
