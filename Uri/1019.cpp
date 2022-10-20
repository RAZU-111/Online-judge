#include <iostream>
using namespace std;

int main() {

   int h,s,m,n;
    cin>>n;
    h=n/3600;
    n=n-(h*3600);
    m=n/60;
    s=n%60;


    cout<<h<<":"<<m<<":"<<s<<endl;

    return 0;
}
