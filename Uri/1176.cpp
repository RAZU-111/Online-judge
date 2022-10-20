#include <iostream>
using namespace std;
int main()
{
    int n, f;
    long long fib[61];
    cin >> n;
    fib[0] = 0;
    fib[1] = 1;
    for(int i = 2; i<= 60; i++){
            fib[i] = fib[i-2] + fib[i-1];
    }

    for(int j = 0; j < n; j++){
            cin >> f;
            cout << "Fib(" << f << ") = " << fib[f] << "\n";
    }

    return 0;
}
