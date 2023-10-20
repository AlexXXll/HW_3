#include <stdio.h>

int main()
{
    int a, a2, a4, a10;
    printf("a: ");scanf("%i", &a);
    a2 = a*a;
    printf("a^2 = %d\n", a2);
    a4 = a2*a2;
    a10 = a4*a4*a2;
    printf("a^10 = %d\n", a10);

    return 0;
}
