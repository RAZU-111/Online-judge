#include<iostream>
using namespace std;
int main()
{
    long long  a,b,x,maxx,minn,sum=0;

    cin>>a>>b>>x;
    maxx=max(a,b);
    minn=min(a,b);

    for(int i=minn;i<=maxx;i++){
        if(i%x==0)
            sum +=i;

    }

    cout<<sum<<endl;


    return 0;
}
