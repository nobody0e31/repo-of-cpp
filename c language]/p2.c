#include <stdio.h>

int main() 
{
    int a, b, i;

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    for(i = a; i <= b; i++) 
    {
        printf("%d ", i);
    }

    return 0;
}
