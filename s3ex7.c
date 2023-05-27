#include <stdio.h>
int main()
{
    int fahrenheit, c, celsius;
    scanf("%d", &fahrenheit);
    c=fahrenheit-32;
    celsius= (c*5)/9;
    printf("%d", celsius);
    return 0;
}