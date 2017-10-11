#include <iostream>
#include <conio.h>
#include "math.h"

//Нахождение площади и периметра заданного прямоугольника

int main() {
    float a = 0.0, b = 0.0, s = 0.0, p = 0.0;

    printf("Enter the dimensions of the rectangle: "); //Делаем запрос 1
    scanf("%f", &a);                                   //Считываем данные с клаваиатуры 2
    scanf("%f", &b);

    s = a * b;                                          //Делаем расчёты 3
    p = 2.0 * (a + b);

    printf("\nArea of the rectangle = %f", s);
    printf("\nPerimeter of the rectangle = %f", p);     //Производим вывод результата


    getch();
    return 0;
}