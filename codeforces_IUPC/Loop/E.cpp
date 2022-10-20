
#include <iostream>
using namespace std;

int main()
{
  int n,m=0;//m for max
  cin>>n;
  int num;
  for(int i=0;i<n;i++){
      cin>>num;
      if(num>m)
      m=num;

  }
 cout<<m<<endl;

 return 0;
}
