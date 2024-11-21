#include <stdio.h>

extern int sum(int a, int b);

int main()
{
    int result = sum(10, 20);
    printf("Result: %d\n", result);
    return 0;
}