#include <iostream>
#include <conio.h>
#include "math.h"

int main() {
    float a = 0.0, b = 0.0, s = 0.0;

    printf("Enter the dimensions of the rectangle: ");
    scanf("%f", &a);
    scanf("%f", &b);

    s = a * b;

    printf("\n\nArea of the rectangle = %f", s);

    getch();
    return 0;
}