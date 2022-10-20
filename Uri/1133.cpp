#include<iostream>
using namespace std;
int main()
{
   int a,b;
   cin>>a>>b;
   int maxx=max(a,b);
   int minn=min(a,b);
   for(int i=minn+1;i<maxx;i++){
    if(i%5==2 || i%5==3)

    cout<<i<<endl;
   }

}



