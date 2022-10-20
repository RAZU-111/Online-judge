 #include <bits/stdc++.h>
using namespace std;

int main()
{
  long long a,b,c,x;
  char s,q;
  cin>>a>>s>>b>>q>>x;
  if(s=='+'){
   if(x==(a+b))
      cout<<"Yes";
   else
      cout<<a+b<<endl;
  }
   else if(s=='-'){
    if(x==(a-b))
      cout<<"Yes"<<endl;
    else
      cout<<a-b<<endl;
  }
   else if(s=='*'){
    if(x==(a*b))
       cout<<"Yes"<<endl;
    else
       cout<<a*b<<endl;
 }

  return 0;
}
