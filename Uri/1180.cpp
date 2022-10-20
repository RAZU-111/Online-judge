#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int  minn=1000;
    int  pos=0;

    for(int i=0;i<n;i++){
        cin>>a[i];

        if(a[i]<minn)
        {
           minn=a[i];
           pos=i;
        }

  }
        cout<<"Menor valor: "<<minn<<endl;
        cout<<"Posicao: "<<pos<<endl;


}
