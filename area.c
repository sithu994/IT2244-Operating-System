//Area calculate programm
/*
circle => C
triangle => T
square => S
Rectangle => R 
Enter your choice:c
Circle area calculation
Enter the radius: 20.9
Area is: 1371.58*/

#include <stdio.h> //include the standard input-output library

#define PI 3.14159

void calculate_circle_area() {
    float radius, area;
    printf("Enter the radius: ");
    scanf("%f", &radius);
    area = PI * radius * radius;
    printf("Area is: %.2f\n", area);
}

void calculate_rectangle_area() {
    float length, width, area;
    printf("Enter the length: ");
    scanf("%f", &length);
    printf("Enter the width: ");
    scanf("%f", &width);
    area = length * width;
    printf("Area is: %.2f\n", area);
}

void calculate_square_area() {
    float side, area;
    printf("Enter the side length: ");
    scanf("%f", &side);
    area = side * side;
    printf("Area is: %.2f\n", area);
}

void calculate_triangle_area() {
    float base, height, area;
    printf("Enter the base: ");
    scanf("%f", &base);
    printf("Enter the height: ");
    scanf("%f", &height);
    area = 0.5 * base * height;
    printf("Area is: %.2f\n", area);
}

int main() {
    char choice;
    printf("Choose shape (C for Circle, R for Rectangle, S for Square, T for Triangle): ");
    scanf(" %c", &choice);

    switch (choice) {
        case 'C':
        case 'c':
            calculate_circle_area();
            break;
        case 'R':
        case 'r':
            calculate_rectangle_area();
            break;
        case 'S':
        case 's':
            calculate_square_area();
            break;
        case 'T':
        case 't':
            calculate_triangle_area();
            break;
        default:
            printf("Invalid choice!\n");
            break;
    }

    return 0;
}
