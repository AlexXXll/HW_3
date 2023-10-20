#include <stdio.h>

int main()
{
    int x, y;
    printf("x: ");scanf("%i", &x);
    printf("y: ");scanf("%i", &y);

    if (x>y){
        printf("x: %d\n", x);
    }
    else{
        printf("x: %d, y: %d\n", x, y);
    }
    return 0;
}
