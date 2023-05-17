#include<stdio.h>
int main(){
    //Calculator in C..
    int num1,num2,result;
    printf("Enter number: ");
    scanf("%d" ,&num1);
    printf("Enter number: ");
    scanf("%d" ,&num2);
    result = num1 + num2;
    printf("Sum is:  %d\n" ,result);
    result = num1 * num2;
    printf("Multiply is:  %d\n" ,result);
    result = num1 - num2;
    printf("Subtraction is:  %d\n" ,result);
    result = num1 / num2;
    printf("Division is:  %d\n" ,result);
    result = num1 % num2;
    printf("Remainder is:  %d\n" ,result);
    
    return 0;
}