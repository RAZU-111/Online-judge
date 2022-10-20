#include<bits/stdc++.h>
using namespace std;
void sorting (int a[],int t)
{
   sort(a,a+t);

}

int main()
{
    int t;//t for size
    cin>>t;
    int a[t];

    for(int i=0; i<t;i++){

       cin>>a[i];
}
 sorting (a,t);

 cout<<a[0]<<" "<<a[t-1]<<endl;


}

