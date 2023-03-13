#include <iostream>
using namespace std;

int arr[51][51];

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        if (i == n - 1)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> arr[i][j];
                if (!arr[i][j])
                {
                }
            }
        }
        else
        {
            cin >> arr[i][0];
            if (!arr[i][0])
            {
                cout << i << 1;
                return;
            }
        }
    }
}