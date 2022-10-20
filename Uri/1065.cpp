#include<iostream>
using namespace std;
int main()
{
int n,i, even=0;

    for(i=1;i<6;i++)
    {
     cin>>n;
     if(n%2==0)
     even++;
    }
  cout<<even<<" valores pares"<<endl;
}
