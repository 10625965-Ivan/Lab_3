#include <stdio.h>
#include "tasks.h"

void task6(void)
{
    double v_kmh = 90.0;
    double v_ms = 30.0;
    double v_ms_to_kmh = v_ms * 3.6;

    printf("First speed: %g km/h\n", v_kmh);
    printf("Second speed: %g m/s (which is %g km/h)\n", v_ms, v_ms_to_kmh);

    if (v_kmh > v_ms_to_kmh)
        printf("The speed in kilometers per hour is greater\n");
    else if (v_kmh < v_ms_to_kmh)
        printf("The speed in meters per second is greater\n");
    else
        printf("The speeds are equal\n");
}

void task9(void)
{
    double m1 = 15.0;
    double v1 = 3.0;
    double m2 = 20.0;
    double v2 = 5.0;

    double density1 = m1 / v1;
    double density2 = m2 / v2;

    printf("Density of the first body: %g\n", density1);
    printf("Density of the second body: %g\n", density2);

    if (density1 > density2)
        printf("The material of the first body has a greater density\n");
    else if (density2 > density1)
        printf("The material of the second body has a greater density\n");
    else
        printf("The densities of the materials are equal\n");
}

void task12(void)
{
    int number = 48;
    int digit1 = number / 10;
    int digit2 = number % 10;

    int square = number * number;
    int sumCubes = (digit1 * digit1 * digit1) + (digit2 * digit2 * digit2);
    int fourTimesSumCubes = 4 * sumCubes;

    printf("Two-digit number: %d\n", number);
    printf("Square of the number: %d\n", square);
    printf("Four times the sum of cubes of digits: %d\n", fourTimesSumCubes);

    if (square == fourTimesSumCubes)
        printf("The square of the number equals four times the sum of cubes of its digits\n");
    else
        printf("The square of the number does not equal four times the sum of cubes of its digits\n");
}

void task15(void)
{
    int a = 10;
    int b = 5;
    int c = 3;
    int d = 2;

    int count1 = (a / c) * (b / d);
    int count2 = (a / d) * (b / c);

    printf("Table size: %dx%d\n", a, b);
    printf("Cardboard size: %dx%d\n", c, d);
    printf("Count with long side along the long side: %d\n", count1);
    printf("Count with long side along the short side: %d\n", count2);

    if (count1 > count2)
        printf("More rectangles fit if the long side is along the long side of the table\n");
    else if (count2 > count1)
        printf("More rectangles fit if the long side is along the short side of the table\n");
    else
        printf("The number of rectangles is the same in both cases\n");
}

void task18(void)
{
    int number = 123;

    int d1 = number / 100;
    int d2 = (number / 10) % 10;
    int d3 = number % 10;

    int square = number * number;
    int sumCubes = (d1 * d1 * d1) + (d2 * d2 * d2) + (d3 * d3 * d3);

    printf("Three-digit number: %d\n", number);
    printf("Its square: %d\n", square);
    printf("Sum of cubes of its digits: %d\n", sumCubes);

    if (square == sumCubes)
        printf("The square of the number equals the sum of cubes of its digits\n");
    else
        printf("The square of the number does not equal the sum of cubes of its digits\n");
}

void task21(void)
{
    int number = 1234;
    int a = 3;

    int d1 = number / 1000;
    int d2 = (number / 100) % 10;
    int d3 = (number / 10) % 10;
    int d4 = number % 10;

    int sumFirstTwo = d1 + d2;
    int sumLastTwo = d3 + d4;
    int sumAll = d1 + d2 + d3 + d4;
    int productAll = d1 * d2 * d3 * d4;

    printf("Four-digit number: %d\n", number);

    printf("a) Is the sum of the first two digits equal to the sum of the last two? ");
    if (sumFirstTwo == sumLastTwo)
        printf("Yes\n");
    else
        printf("No\n");

    printf("b) Is the sum of the digits divisible by three? ");
    if (sumAll % 3 == 0)
        printf("Yes\n");
    else
        printf("No\n");

    printf("c) Is the product of the digits divisible by four? ");
    if (productAll % 4 == 0)
        printf("Yes\n");
    else
        printf("No\n");

    printf("d) Is the product of the digits divisible by %d? ", a);
    if (productAll % a == 0)
        printf("Yes\n");
    else
        printf("No\n");
}

void task24(void)
{
    double a = -2.5;
    double b = 3.0;
    double c = 0.0;

    if (a >= 0) a = a * a; else a = a * a * a * a;
    if (b >= 0) b = b * b; else b = b * b * b * b;
    if (c >= 0) c = c * c; else c = c * c * c * c;

    printf("Initial numbers: -2.5, 3.0, 0.0\n");
    printf("New values: %g, %g, %g\n", a, b, c);
}

void task27(void)
{
    double a = 4.0;
    double b = 10.0;

    printf("Initial numbers: a = %g, b = %g\n", a, b);

    double halfSum = (a + b) / 2.0;
    double doubleProduct = 2.0 * a * b;

    if (a < b) {
        a = halfSum;
        b = doubleProduct;
    }
    else {
        b = halfSum;
        a = doubleProduct;
    }

    printf("New values: a = %g, b = %g\n", a, b);
}

void task30(void)
{
    double a = -5.5;
    double b = 3.2;
    double c = -1.0;
    int count = 0;

    if (a < 0) count++;
    if (b < 0) count++;
    if (c < 0) count++;

    printf("Given numbers: a = %g, b = %g, c = %g\n", a, b, c);
    printf("Number of negative numbers: %d\n", count);
}

void task33(void)
{
    int k = 5;
    int a = 15;
    int b = 20;
    int c = 23;

    printf("Given numbers: k = %d, a = %d, b = %d, c = %d\n", k, a, b, c);

    printf("Is k a divisor of a? ");
    if (a % k == 0)
        printf("Yes\n");
    else
        printf("No\n");

    printf("Is k a divisor of b? ");
    if (b % k == 0)
        printf("Yes\n");
    else
        printf("No\n");

    printf("Is k a divisor of c? ");
    if (c % k == 0)
        printf("Yes\n");
    else
        printf("No\n");
}
