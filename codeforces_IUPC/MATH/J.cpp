#include<iostream>
#include<math.h>
using namespace std;
void primefact(int n)
{
	for(int i=2; i<=sqrt(n); i++)
	{
		if(n%i==0)
		{
		    int cnt=0;
			while(n%i == 0)
			{
                cnt++;
				n=n/i;
			}

			cout<<"("<<i<<"^"<<cnt<<")"<<"*";

		}
	}
	if(n>1)
        cout<<"("<<n<<"^"<<1<<")"<<endl;

	else
        cout<<endl;
}

  int main()
{
        long long n;
        cin>>n;

        primefact(n);

     return 0;
}
