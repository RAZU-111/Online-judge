#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<pair<int, int>> o, e;
        for (int i = 1; i <= n; i++)
        {
            int in;
            cin >> in;
            if (in % 2 == 0)
            {
                e.push_back({in, i});
            }
            else
                o.push_back({in, i});
        }

        if (o.size() >= 3)
        {
            cout << "YES"
                 << "\n";
            cout << o[0].second << " " << o[1].second << " " << o[2].second << "\n";
        }
        else if (o.size() >= 1 && e.size() >= 2)
        {
            cout << "YES"
                 << "\n";
            cout << o[0].second << " " << e[0].second << " " << e[1].second << "\n";
        }
        else
            cout << "NO" << endl;
    }

    return 0;
}





//  vector<int> odd, even;
//         for (int i = 1; i <= n; i++) {
//             int x;
//             cin >> x;
//             if (x % 2 == 0) {
//                 even.push_back(i);
//             } else {
//                 odd.push_back(i);
//             }
//         }
//         if (odd.size() >= 3) {
//             cout << "YES\n";
//             cout << odd[0] << " " << odd[1] << " " << odd[2] << '\n';
//         } else if (odd.size() >= 1 && even.size() >= 2) {
//             cout << "YES\n";
//             cout << odd[0] << " " << even[0] << " " << even[1] << '\n';
//         } else {
//             cout << "NO\n";
//         }