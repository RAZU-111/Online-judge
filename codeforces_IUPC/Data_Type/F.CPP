
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
  long long  a,b;
  cin>>a >>b;
  long long lastdigit1=a%10;
  long long lastdigit2=b%10;
  long long  sum=lastdigit1+lastdigit2;
  cout<<sum<<endl;
}
