#include <stdio.h>
int main()
{
    int celsius, f, fahrenheit;
    scanf("%d", &celsius);
    f=(celsius*9)/5;
    fahrenheit=f+32;
    printf("%d", fahrenheit);

    return 0;
}