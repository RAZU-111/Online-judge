#include<iostream>
#include<iomanip>
using namespace std;
double sum(int n)
{
    double sum;
    for(int i=0;i<n;i++){
        double value;
        cin>>value;
        sum +=value;
    }
    return sum;
}
int main()
{
    int n;
    cin>>n;

    cout<<fixed<<setprecision(6)<<sum(n)/n<<endl;

}
