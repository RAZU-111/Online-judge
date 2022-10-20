#include<iostream>
using namespace std;
int main()
{
    char x;
    cin>>x;
    int t1=(int)x;
    int t2=t1+1;
    if(x == 'z')
        cout<<'a';
    else
        cout<<(char)t2;
}
