#include<iostream>
using namespace std;
int main()
{
    int a[5],n1=1,n2=1;

    for(int i=0;i<5;i++){
        cin>>a[i];
    }

    for(int i=0;i<5;i++){

        if(a[i] > a[i-1])
            n1++;

       else if(a[i] < a[i-1])
                n2++;
    }

    if(n1==5)
      cout<<"C"<<"\n";

    else if(n2==5)
      cout<<"D"<<"\n";

   else
      cout<<"N"<<"\n";

}
