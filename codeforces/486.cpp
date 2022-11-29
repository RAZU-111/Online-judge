#include <iostream>
using namespace std;
int main()
{
    long long n, sum = 0;
    cin >> n;
    for (int i = 0; i < n; i += 2)
    {
        if (n % 2 == 0)
            sum = n / 2;
        else
            sum = -(n + 1) / 2;
    }

    cout << sum << endl;

    return 0;
}