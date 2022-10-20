#include <iostream>
using namespace std;

int main()
{
int  l1,l2,r1,r2,x,y;
  cin>>l1>>r1>>l2>>r2;
  x=max(l1,l2);
  y=min(r1,r2);
  if(x > y)
    cout<<-1;
else
    cout<<x<<" "<<y;

  return 0;
}
