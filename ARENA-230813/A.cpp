#include <iostream>
using namespace std;
int main()
{
    long long q = 0, w = 0, e = 0;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        q += i;
        e += i * i * i;
    }
    cout << q << "\n"
         << q * q << "\n"
         << e;
}