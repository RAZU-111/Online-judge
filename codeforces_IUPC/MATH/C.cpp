#include<bits/stdc++.h>
using namespace std;
void sum_of_range(int a,int b){

    long long sum1=0,sum2=0,sum3=0;

     for(int i=a;i<=b;i++){

        sum1=sum1+i;
        if(i%2==0){

            sum2=sum2+i;

        }
        else if(i%2 !=0){

            sum3=sum3+i;
        }

    }

    cout<<sum1<<endl<<sum2<<endl<<sum3<<endl;


}
int main()
{
    long long a,b,maxx,minn;
    cin>>a>>b;

    maxx = max(a,b);
    minn=min(a,b);

     sum_of_range(minn,maxx);

    return 0;
}
