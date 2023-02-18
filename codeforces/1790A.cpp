#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string PI = "314159265358979323846264338327";
        string s;
        int ans=0;
        cin >> s;
        for (int i = 0; i < s.size(); i++)
        {
            if (PI[i] == s[i])
                ans++;
            else
                break;
        }
        cout<<ans<<endl;
    }

    return 0;
}