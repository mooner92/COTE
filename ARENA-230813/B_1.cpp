#include <iostream>
using namespace std;
int main()
{
    int h = 0;
    string s;
    bool flag = false;
    for (int i = 0; i < 3; i++)
    {
        cin >> s;
        if (s[0] >= 48 && s[0] <= 57 && !flag)
        {
            h = stoi(s);
            if ((h + (3 - i)) % 3 == 0 && (h + (3 - i)) % 5 == 0)
            {
                cout << "FizzBuzz";
            }
            else if ((h + (3 - i)) % 3 == 0 && (h + (3 - i)) % 5 != 0)
            {
                cout << "Fizz";
            }
            else if ((h + (3 - i)) % 3 != 0 && (h + (3 - i)) % 5 == 0)
            {
                cout << "Buzz";
            }
            else
            {
                cout << (h + (3 - i));
            }
            flag = true;
        }
    }
}