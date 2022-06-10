#include <iostream>
#include <cmath>
using namespace std;

double bmi(double a, double b)
{
    return b / pow((a / 100), 2);
}
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        double h, w;
        cin >> h >> w;
        if (h <= 140.0)
            cout << "6"
                 << "\n";
        else if (h > 140.0 && h < 146.0)
            cout << "5"
                 << "\n";
        else if (h >= 146.0 && h < 159.0)
            cout << "4"
                 << "\n";
        else if (h >= 159.0 && h < 161.0)
        {
            if (bmi(h, w) < 16.0 || bmi(h, w) >= 35.0)
                cout << "4"
                     << "\n";
            else
                cout << "3"
                     << "\n";
        }
        else if (h >= 161.0 && h < 204.0)
        {
            if (bmi(h, w) < 16.0 || bmi(h, w) >= 35.0)
                cout << "4"
                     << "\n";
            else if ((bmi(h, w) >= 16.0 && bmi(h, w) < 18.5) || (bmi(h, w) >= 30.0 && bmi(h, w) < 35.0))
                cout << "3"
                     << "\n";
            else if ((bmi(h, w) >= 18.5 && bmi(h, w) < 20.0) || (bmi(h, w) >= 25.0 && bmi(h, w) < 30.0))
                cout << "2"
                     << "\n";
            else
                cout << "1"
                     << "\n";
        }
        else
            cout << "4"
                 << "\n";
    }
}