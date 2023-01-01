#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a, b, c, n, tc;
    cin >> tc;
    for (int i = 0; i < tc; i++)
    {
        cin >> a >> b >> c >> n;
        if ((a % n == 0 && b % n == 0) || (b % n == 0 && c % n == 0) || (c % n == 0 && a % n == 0))
            cout << 1 << "\n";
        else
            cout << 0 << "\n";
    }
}