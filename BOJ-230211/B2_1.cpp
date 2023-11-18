#include <iostream>
#include <queue>
using namespace std;
int main()
{
    int n, m;
    queue<char> st;
    string s;
    cin >> n >> m;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'A')
        {
            if (st.size() < 2)
            {
                st.push(s[i]);
            }
        }
        else if (s[i] != 'A' && s[i] != 'E' && s[i] != 'I' && s[i] != 'O' && s[i] != 'U')
        {
            if (st.size() == 2)
            {
                st.push(s[i]);
            }
        }
    }
    if (st.size() == 3)
    {
        cout << "YES\n";
        for (int i = 0; i < 3; i++)
        {
            cout << st.front();
            st.pop();
        }
    }
    else
        cout << "NO";
}
/////