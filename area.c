#include <stdio.h>
int main()
{
    // Area of square.(side^2)
    printf("For find Area of square.");
    int square_side, square_area;
    printf("\nEnter square's side: ");
    scanf("%d", &square_side);
    square_area = square_side * square_side;
    printf("Area is: %d", square_area);
    if (square_side == 0)
    {
        printf("\nThis is invalid.");
    }
    else
    {
        printf("\nThank you.");
    }



    // Area of triangle.(1/2*base*height)
    printf("\nFor find Area of triangle.");
    int base, height, triangle_area;
    printf("\nEnter base: ");
    scanf("%d", &base);
    printf("Enter height: ");
    scanf("%d", &height);
    triangle_area = base * height * 1 / 2;
    printf("Area is: %d", triangle_area);
    if (base == 0)
    {
        printf("\nThis is invalid.");
    }
    else if (height == 0)
    {
        printf("\nThis is invalid.");
    }
    else
    {
        printf("\nThank you.");
    }



    // Area of circle.(pi*radius^2)
    printf("\nFor find Area of cicle.");
    float pi, radius, circle_area;
    pi = 3.14;
    printf("\nEnter radius: ");
    scanf("%f", &radius);
    circle_area = pi * radius * radius;
    printf("%f", circle_area);
    if (radius == 0)
    {
        printf("\nThis is Invalid.");
    }
    else
    {
        ("\nThank you.");
    }



    // Perimeter of circle.(2*pi*Radius)
    printf("\nFor find perimeter of circle.");
    float Radius, circle_perimeter;
    printf("\nEnter radius: ");
    scanf("%f", &Radius);
    circle_perimeter = 2 * pi * Radius;
    printf("Perimeter is: %f", circle_perimeter);
    if (Radius == 0)
    {
        printf("\nThis is invalid.");
    }
    else
    {
        printf("\nThank you.");
    }


    
    // Area of cube.(6*side^2)
    printf("\nFor find Area of cube.");
    int cube_side, cube_area;
    printf("\nEnter cube's side: ");
    scanf("%d", &cube_side);
    cube_area = 6 * cube_side * cube_side;
    printf("Area is: %d", cube_area);
    if (cube_side == 0)
    {
        printf("\nThis is invalid.");
    }
    else
    {
        printf("\nThank you.");
    }

    return 0;
}