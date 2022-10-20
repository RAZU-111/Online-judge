#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    /*cout<<"A "<<"= "<<a<<", ";
    cout<<"B "<<"= "<<b<<", ";
    cout<<"C "<<"= "<<c<<endl;
     cout<<"A "<<"=       "<<a<<", ";
     cout<<"B "<<"=         "<<b<<", ";
     cout<<"C "<<"=        "<<c<<endl;
    cout<<"A "<<"= 000000"<<a<<", ";
    cout<<"B "<<"= 00000000"<<b<<", ";
    cout<<"C "<<"= 0000000"<<c<<endl;
    cout<<"A "<<"= "<<a<<"      "<<", ";
    cout<<"B "<<"= "<<b<<"        "<<", ";
    cout<<"C "<<"= "<<c<<"       "<<endl;
    */
    printf("A = %d, B = %d, C = %d\n", a, b, c);
	printf("A = %10d, B = %10d, C = %10d\n", a, b, c);
	printf("A = %010d, B = %010d, C = %010d\n", a, b, c);
	printf("A = %-10d, B = %-10d, C = %-10d\n", a, b, c);


}
