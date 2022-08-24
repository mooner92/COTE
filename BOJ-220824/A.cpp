#include <stdio.h>
#include <string.h>
int count = 0;
int recursion(const char *s, int l, int r)
{
    count++;
    if (l >= r)
        return 1;
    else if (s[l] != s[r])
        return 0;
    else
        return recursion(s, l + 1, r - 1);
}

int isPalindrome(const char *s)
{
    return recursion(s, 0, strlen(s) - 1);
}

int main()
{
    // printf("ABBA: %d\n", isPalindrome("ABBA")); // 1
    // printf("ABC: %d\n", isPalindrome("ABC"));   // 0

    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        char c[1001] = "";
        scanf("%s", c);
        printf("%d ", isPalindrome(c));
        printf("%d\n", count);
        count = 0;
    }
}