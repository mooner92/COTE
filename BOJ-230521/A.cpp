#include <iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int num = 0;
    char cs[5] = {'M', 'O', 'B', 'I', 'S'};
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < s.size(); j++)
        {
            if (cs[i] == s[j])
            {
                num++;
                break;
            }
        }
    }
    if (num == 5)
        cout << "YES";
    else
        cout << "NO";
}
///