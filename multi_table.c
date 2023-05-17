#include<stdio.h>
int main()
{
    int table;

    printf("Enter table what you want: ");
    scanf("%d" ,&table);
    int i;
    for (i = 1; i < 11; i++)
    {
       printf("%d\n" ,i*table);
    }
    
    
        return 0;
}
