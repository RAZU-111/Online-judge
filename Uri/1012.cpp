#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double A,B,C;
    double pi=3.14159;
    cin>>A>>B>>C;
    double RT=.5*A*C;
    double CR=pi*C*C;
    double TR=((A+B)/2)*C;
    double SQ=B*B;
    double RE=A*B;
    cout<<fixed<<setprecision(3)<<"TRIANGULO: "<<RT<<endl;
    cout<<fixed<<setprecision(3)<<"CIRCULO: "<<CR<<endl;
    cout<<fixed<<setprecision(3)<<"TRAPEZIO: "<<TR<<endl;
    cout<<fixed<<setprecision(3)<<"QUADRADO: "<<SQ<<endl;
    cout<<fixed<<setprecision(3)<<"RETANGULO: "<<RE<<endl;
     return 0;
}
