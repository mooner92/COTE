#include <iostream>
using namespace std;

bool Pyear(int n)
{
    if (n % 400 == 0 || (n % 4 == 0 && n % 100 != 0))
        return true;
    return false;
}

int main()
{
    int n, y, m;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> y >> m;
        if (Pyear(y))
        {
            if (m == 3)
            {
                cout << y << " 2"
                     << " 29"
                     << "\n";
            }
            else if (m == 2 || m == 4 || m == 6 || m == 8 || m == 9 || m == 11)
            {
                cout << y << " " << m - 1 << " " << 31;
            }
            else if (m == 1)
                cout << y - 1 << " "
                     << "12"
                     << " " << 31;
            else
                cout << y << " " << m - 1 << " " << 30;
        }

        else
        {
            if (m == 3)
                cout << y << " 2"
                     << " 28"
                     << "\n";
            else if (m == 2 || m == 4 || m == 6 || m == 8 || m == 9 || m == 11)
            {
                cout << y << " " << m - 1 << " " << 31;
            }
            else if (m == 1)
                cout << y - 1 << " "
                     << "12"
                     << " " << 31;
            else
                cout << y << " " << m - 1 << " " << 30;
        }
    }
}