#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    vector<string> vn, vm;
    string s;
    int n, m, y, i;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> s;
        if (s == "?")
        {
            y = i;
        }
        else
        {
            vn.push_back(s);
        }
    }
    cin >> n;
    for (int j = 0; j < n; j++)
    {
        cin >> s;
        bool flag = false;
        for (int k = j; k < i - 1; k++)
        {
            if (s == vn[k])
                flag = true;
        }
        if (!flag)
        {
            vm.push_back(s);
            cout << s;
        }
    }
    for (int i = 0; i < vm.size(); i++)
    {
        if (vn[y - 1][vn[y - 1].size() - 1] == vm[i][0] && vn[y + 1][0] == vm[i][vm[i].size() - 1])
        {
            cout << vm[i];
        }
    }
}