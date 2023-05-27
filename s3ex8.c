#include <stdio.h>
int main()
{
    float celsius, kelvin;
    scanf("%f", &kelvin);
    celsius=kelvin-273.15;
    printf("%f", celsius);
    return 0;
}