#include<iostream>

using namespace std;
int main()
{
   double n1,n2,n3,lowest,middle,highest;
    cin>>n1>>n2>>n3;
   if (n1 <= n2 && n1 <= n3)
  {
    lowest = n1;


    if (n2 <= n3)
    {
      middle = n2;
      highest = n3;
    }
    else
    {
      middle = n3;
      highest = n2;
    }
  }

  else if (n2 <= n1 && n2 <= n3)
  {
    lowest = n2;


    if (n1 <= n3)
    {
      middle = n1;
      highest = n3;
    }
    else
    {
      middle = n3;
      highest = n1;
    }
  }

  else
  {
    lowest = n3;


    if (n1 <= n2)
    {
      middle = n1;
      highest = n2;
    }
    else
    {
      middle = n2;
      highest = n1;
    }
  }
   cout<<lowest<<endl<<middle<<endl<<highest<<endl<<endl;
   cout<<n1<<endl<<n2<<endl<<n3<<endl;
}

