#include<iostream>
using namespace std;

int main()
{

    int a,b;
    cin>>a>>b;
    int minn = min(a,b);
    int maxx = max(a,b);
    int sum=0;
    for(int i=minn+1;i<maxx;i++){
    if(i%2!=0)
    sum=sum+i;
   }
   cout<<sum<<endl;


}
