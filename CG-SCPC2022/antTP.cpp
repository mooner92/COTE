/*
You should use the standard input/output

in order to receive a score properly.

Do not use file input and output

Please be very careful.
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int Answer;
//줄바꿈 endl로 할 것
int main(int argc, char **argv)
{
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    int T, test_case;
    /*
       The freopen function below opens input.txt file in read only mode, and afterward,
       the program will read from input.txt file instead of standard(keyboard) input.
       To test your program, you may save input data in input.txt file,
       and use freopen function to read from the file when using cin function.
       You may remove the comment symbols(//) in the below statement and use it.
       Use #include<cstdio> or #include <stdio.h> to use the function in your program.
       But before submission, you must remove the freopen function or rewrite comment symbols(//).
     */

    // freopen("input.txt", "r", stdin);

    cin >> T;
    for (test_case = 0; test_case < T; test_case++)
    {

        Answer = 0;
        int ant = 0;
        cin >> ant;
        // vector<int> ants;
        // vector<int> values;
        int ants[300001];
        int values[300001];
        int dummy1[300001];
        for (int i = 0; i < ant; i++)
        {
            int h;
            cin >> h;
            ants[i] = h;
        }
        for (int i = 0; i < ant; i++)
        {
            int h;
            cin >> h;
            values[i] = h;
            dummy1[i] = h;
        }
        sort(values, values + ant); // values의 정렬배열 선언
        for (int j = 0; j < values)
        {
            for (int i = 0; i < ant; i++)
            {
                if (values[i] != dummy1[i])
                {
                    // find로 idx받아서 ans+ants[idx]해줘야 할 듯
                    auto it = find(begin(values), end(values), dummy1[i]);
                    int idx = distance(values, it); //인덱스 반환
                    int tmp = dummy1[i];
                    dummy1[i] = dummy1[idx];
                    dummy1[idx] = tmp;
                    Answer += (2 * abs(ants[idx] - ants[i]));
                }
            }
        }

        // Print the answer to standard output(screen).
        cout << "Case #" << test_case + 1 << endl;
        cout << Answer << endl;
    }

    return 0; // Your program should return 0 on normal termination.
}