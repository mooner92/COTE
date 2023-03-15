#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int e[200001] = {0}; // long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<int> ch;
    int n, q, d, s, cmd, sto;
    cin >> n >> q;
    for (int i = 1; i <= n; i++)
    {
        cin >> e[i];
        e[i] += e[i - 1];
    }
    for (int i = 0; i < q; i++)
    {
        cin >> cmd;
        if (cmd == 1)
        {
            cin >> d;
            ch.push_back(d);
            for (int j = ch.size() - 2; j >= 0; j--)
            {
                if (ch[j] >= d)
                {
                    ch[j + 1] = d;
                    break;
                }
                else
                {
                    ch[j + 1] = ch[j];
                    ch[j] = d;
                }
            }
        }
        else
        {
            cin >> s >> d;
            sto = s - 1;
            for (int j = 0, k = ch.size(); j < k; j++)
            {
                if (ch[j] < d)
                {
                    if (ch[j] >= s)
                    {
                        sto = ch[j];
                        break;
                    }
                }
            }
            cout << e[d] - e[sto] << '\n';
        }
    }
} //