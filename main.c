#include <stdio.h>

int main(void)
{
    int input;
    scanf("%d", &input);
    if (0 <= input && input< 10)
    {
        printf("OK\n");
    }
    else
    {
        printf("NG\n");
    }
    return 0;
}
