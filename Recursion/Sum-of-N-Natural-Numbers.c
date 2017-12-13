#include <stdio.h>
int sum(int n);

int main()
{
    int n, result;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    result = sum(n);

    printf("sum=%d", result);
}

int sum(int num)
{
    if (num!=0)
        return num + sum(num-1); // sum() function calls itself
    else
        return num;
}
