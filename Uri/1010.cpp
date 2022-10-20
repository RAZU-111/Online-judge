#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int product1,num_of_product1,product2,num_of_product2;
    double price1,price2,total_price;
    cin>>product1 >>num_of_product1 >>price1;


    cin>>product2 >>num_of_product2 >>price2;


    total_price = ((num_of_product1*price1)+(num_of_product2*price2));
    cout<<fixed <<setprecision(2)<<"VALOR A PAGAR:"<<" "<<"R$ "<<total_price<<endl;
    return 0;

}
