#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<char> qk, qy;
    qk.push('K');
    qk.push('O');
    qk.push('R');
    qk.push('E');
    qk.push('A');
    qy.push('Y');
    qy.push('O');
    qy.push('N');
    qy.push('S');
    qy.push('E');
    qy.push('I');
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == qk.front())
        {
            qk.pop();
            if (qk.empty())
            {
                cout << "KOREA";
                break;
            }
        }
        if (s[i] == qy.front())
        {
            qy.pop();
            if (qy.empty())
            {
                cout << "YONSEI";
                break;
            }
        }
    }
}