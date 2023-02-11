#include <iostream>
using namespace std;
int arr[102];
int main()
{

    int n, m;
    cin >> n >> m;
    int px, py;
    for (int i = 0; i < n + m - 1; i++)
    {
        cin >> arr[i];
    }
    int minx = 999, miny = 999;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < minx)
        {
            minx = arr[i];
            px = i;
        }
    }
    for (int i = n - 1; i < m + n - 1; i++)
    {
        if (arr[i] < miny)
        {
            miny = arr[i];
            py = i - (n - 1);
        }
    }
    cout << px + 1 << " " << py + 1;
}