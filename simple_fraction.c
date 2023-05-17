#include <stdio.h>
int main()
{
    int num1, num2, num3, num4;
    float result, Result;
    printf("Enter numerator: ");
    scanf("%d", &num1);
    printf("Enter denominator: ");
    scanf("%d", &num2);
    result = num1 / num2;
    printf("%f", result);

    return 0;
}