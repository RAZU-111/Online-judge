#include<iostream>
using namespace std;
int main()
{
    int n,i,p=0,N=0,odd=0,even=0;
    for(i=1;i<6;i++)
    {
        cin>>n;
    if(n%2==0)
         even++;
    if(n%2!=0)
        odd++;
    if(n>0 )
         p++;
    if(n<0)
         N++;
}
     cout<<even<<" valor(es) par(es)"<<endl;
     cout<<odd<<" valor(es) impar(es)"<<endl;
     cout<<p<<" valor(es) positivo(s)"<<endl;
     cout<<N<<" valor(es) negativo(s)"<<endl;

     return 0;
}

