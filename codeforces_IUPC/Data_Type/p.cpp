
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  int n,first_digit,count;
    cin>>n;
    count=log10(n);
    first_digit=n/pow(10,count);
    if(first_digit%2==0){
        cout<<"EVEN"<<endl;
    }
    else
        cout<<"ODD"<<endl;

}
