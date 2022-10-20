#include<iostream>
using namespace std;
int main()
{
    int a,n;
    int in=0;
    int out=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a;
         if (a>=10 && a<=20)
            in++;
        else out++;
    }

    cout<<in<<" in"<<endl<<out<<" out" << endl;
}


