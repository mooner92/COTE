#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, k;
    string s, ds[101];
    string s1[101];
    vector<string> s2;
    cin >> n;
    int h = n;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        if (s == "?")
        {
            k = i;
        }
        else
        {
            s1[i] = s;
        }
    }
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        bool flag = false;
        for (int j = 0; j < 100; j++)
        {
            if (s == s1[j])
                flag = true;
        }
        if (!flag)
        {
            s2.push_back(s);
        }
    }
    cout << "----------\n";
    for (int p = 0; p < s2.size(); p++)
    {
        cout << s2[p] << "\n";
    }
    cout << "----------\n";
    if (k == 0)
    {
        for (int i = 0; i < n; i++)
        {
            if (s1[k + 1][0] == s2[i][s2[i].size() - 1])
            {
                cout << s2[i];
                break;
            }
        }
    }
    else if (k == h - 1)
    {
        for (int i = 0; i < n; i++)
        {
            if (s1[k - 1][s1[k - 1].size() - 1] == s2[i][0])
            {
                cout << s2[i];
                break;
            }
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (s1[k + 1][0] == s2[i][s2[i].size() - 1] && s1[k - 1][s1[k - 1].size() - 1] == s2[i][0])
            {
                cout << s2[i];
                break;
            }
        }
    }
}