#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str[3];
    for (int i = 0; i < 3; ++i)
    {
        cin >> str[i];
    }

    // 마지막 문자열에서 숫자 부분을 추출
    int num = stoi(str[2]);

    // 주어진 세 문자열에 따라 다음 문자열을 예측
    if (num % 3 == 0 && num % 5 == 0)
    {
        cout << "FizzBuzz" << endl;
    }
    else if (num % 3 == 0)
    {
        cout << "Fizz" << endl;
    }
    else if (num % 5 == 0)
    {
        cout << "Buzz" << endl;
    }
    else
    {
        cout << num + 1 << endl;
    }

    return 0;
}
