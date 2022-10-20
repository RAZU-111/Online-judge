#include<iostream>
using namespace std;
int main()
{
    int n,y,m,d;
    int x=365;
    cin>>n;

    y = n/x;
    m = (n-y*365)/30;
    d =(n-y*365-m*30);

    cout<<y<<" "<<"ano(s)"<<endl;
    cout<<m<<" "<<"mes(es)"<<endl;
    cout<<d<<" "<<"dia(s)"<<endl;

    return 0;

}
