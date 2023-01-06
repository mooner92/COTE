#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

void main_building()
{
    int i, j, random = 0, f_time = 1, count = 0, x, y;

    char arr[6][19];
    bool check[6][19] = {
        false,
    };                             // f오 바로 바꾸게 되면 불이 계속 번지는 오류가 발생함 -> check 테이블을 만들어 현재 'f'인 칸을 검색하여 불이 어느칸으로 번질지 미리 체크해두었다가 한번에 바꿔줌
    int arrowX[4] = {-1, 1, 0, 0}; // 좌,우,상,하
    int arrowY[4] = {0, 0, 1, -1}; // 좌,우,상,하

    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 19; j++)
        {
            arr[i][j] = 'n';
        }
    }

    srand(time(NULL));

    random = (rand() % 4) + 1;

    x = random;

    random = (rand() % 17) + 1;

    y = random;

    arr[x][y] = 'F';

    while (f_time != 0)
    {
        f_time = rand() % 10;

        if (count == 0)
        {
            for (i = 1; i < 5; i++)
            {
                for (j = 1; j < 18; j++)
                {
                    if (arr[i][j] == 'F')
                    {
                        arr[i + 1][j] = 'f';
                        arr[i - 1][j] = 'f';
                        arr[i][j + 1] = 'f';
                        arr[i][j - 1] = 'f';
                    }
                }
            }
        }
        else if ((count != 0) && (count % 5 == 0))
        {
            for (i = 1; i < 5; i++)
            {
                for (j = 1; j < 18; j++)
                {
                    if (arr[i][j] == 'f')
                    {
                        for (int k = 0; k < 4; k++) // 이 부분의 이해가 조금 어려울 수 있는데 이중배열에서 상하좌우 or 대각선 인덱스 계산할때 자주 쓰이니 알아두면 좋음
                        {
                            check[i + arrowX[k]][j + arrowY[k]] = true;
                        }
                    }
                }
            }
            for (i = 1; i < 5; i++)
            {
                for (j = 1; j < 18; j++)
                {
                    if (check[i][j])
                    {
                        arr[i][j] = 'f';
                    }
                }
            }
            // 불이 꺼진다는 조건이 없으므로 check테이블을 원상태로 돌려놓을 필요가 없음 (All-false로 초기화 할 필요 X)
        }
        count++;
    }

    arr[x][y] = 'F';

    printf("%d\n", count);

    for (i = 1; i < 5; i++)
    {
        printf("\n");
        printf("%dth floor\n", 4 - i);
        for (j = 1; j < 18; j++)
        {
            printf("%c ", arr[i][j]);
        }
        printf("\n");
    }

    printf("\n%d분 전에 %d층에서 화재가 발생하였습니다.\n학생들은 신속하게 대피하여 주시기 바랍니다.\a", count, 4 - x);
}

void experiment_building()
{
}

int main()
{
    int n;

    printf("화재발생구역은 어디인가요? (1. 본동, 2. 실험동) : ");

    scanf("%d", &n);

    if (n == 1)
    {
        main_building();
    }
    else if (n == 2)
    {
        experiment_building();
    }
    else
        printf("1과 2중 하나를 입력해주세요.");

    return 0;
} //