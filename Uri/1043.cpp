#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double a ,b ,c,area,Perimetro;
    cin >>a >> b>>c;
    if ((b+c)>a && (c+a)>b && (a+b)>c)
    {
        cout <<fixed << setprecision(1)<<"Perimetro"<<" = "<<a+b+c<<endl;
    }
    else
    {
        cout << fixed<<setprecision(1)<<"Area"<<" = "<<((a+b)/2)*c<<endl;
    }
    return 0;
}
