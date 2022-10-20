#include<iostream>
using namespace std;
const int s=10001;
void print(int s[s],int n)
{
    for(int i=0;i<n;i++){
        cout<<s[i]<<" ";
    }
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    int b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
     for(int i=0;i<n;i++){
        cin>>b[i];
    }
    print(b,n);
    print(a,n);

}
