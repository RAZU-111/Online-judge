#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    int count=0;
    while(1){
        if(count==n)
            break;
        if(i%4==0){
           cout<<"PUM"<<endl;
            i++;
            count++;
           continue;
        }
        cout<<i<<" ";
           i++;
    }
}



