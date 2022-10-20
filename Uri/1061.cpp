#include<bits/stdc++.h>
using namespace std;
int main()
{
   string temp;
   int day_x,day_y,H1,M1,S1,H2,M2,S2;
   int day,H,M,S;
   cin>>temp>>day_x;

   cin >>H1>> temp>> M1>> temp>>S1;
   cin>>temp>>day_y;

   cin >>H2>> temp>> M2>> temp>>S2;
    S= S2 - S1;
    M= M2 - M1;
    H= H2 - H1;
    day = day_y - day_x;

     if (S<0)
     {
         S +=60;
         M--;
     }
     if(M<0)
     {
         M+=60;
         H--;
     }
        if(H<0)
     {
         H+=24;
         day--;
     }
     cout<< day <<" dia(s)"<<endl;
     cout<< H <<" hora(s)"<<endl;
     cout<< M <<" minuto(s)"<<endl;
    cout<< S <<" segundo(s)"<<endl;
}
