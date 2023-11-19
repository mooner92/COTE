#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    string s;
    vector<string> vs;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        if (s.size() == 3)
        {
            vs.push_back(s);
        }
    }
    sort(vs.begin(), vs.end());
    cout << vs[0];
}