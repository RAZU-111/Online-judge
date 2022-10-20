#include <iostream>
using namespace std;

int main()
{
  long long a,b,c;
  cin>>a>>b>>c;
  cout<<min(a,min(b,c));
  cout<<" ";
  cout<<max(a,max(b,c));

  return 0;
}
