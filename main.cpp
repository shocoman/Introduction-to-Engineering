#include <iostream>
#include <conio.h>
#include "math.h"

int main() {
    float a = 0.0, b = 0.0, s = 0.0, p = 0.0;

    printf("Enter the dimensions of the rectangle: ");
    scanf("%f", &a);
    scanf("%f", &b);

    s = a * b;
    p = 2.0 * (a + b);

    printf("\nArea of the rectangle = %f", s);
    printf("\nPerimeter of the rectangle = %f", p);

    getch();
    return 0;
}