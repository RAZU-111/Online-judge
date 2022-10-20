#include<iostream>
using namespace std;
int main()
{
    int a,b,def;
    cin >>a>>b;
    if (a>b)
    {
        def = 24 - (a-b);
        cout<<"O JOGO DUROU "<<def<<" HORA(S)"<<endl;
    }
    else if(b>a)
    {
        def = (b-a);
        cout<<"O JOGO DUROU "<<def<<" HORA(S)"<<endl;

    }
    else if (a==b)
    {
        def = 24 ;
            cout<<"O JOGO DUROU "<<def<<" HORA(S)"<<endl;
    }

    return 0;

}
