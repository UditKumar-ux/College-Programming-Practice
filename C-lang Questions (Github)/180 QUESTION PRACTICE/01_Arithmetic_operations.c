// ==================================================
// ARITHMETIC OPERATIONS
// ==================================================

// Q1. Sum of two integers

#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Sum = %d", a + b);

    return 0;
}


// Q2. Difference

#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Difference = %d", a - b);

    return 0;
}


// Q3. Product

#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Product = %d", a * b);

    return 0;
}


// Q4. Quotient

#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Quotient = %d", a / b);

    return 0;
}


// Q5. Remainder

#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Remainder = %d", a % b);

    return 0;
}


// Q6. Floor Division
#include <stdio.h>
#include <math.h>

int main()
{
    int a, b;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Floor Division = %d", (int)floor((double)a / b));

    return 0;
}
/*
========================================================
                    FLOOR DIVISION IN C - Hinglish
========================================================

FLOOR DIVISION:
Floor division ka matlab hai division ke result ko
NEECHE WAALE INTEGER par le jaana.

Example:

    7 / 2 = 3.5

Floor of 3.5 = 3

So:

    Floor Division = 3


IMPORTANT:
Negative numbers mein "neeche" ka matlab number line
par LEFT side jaana hota hai.

Example:

    -7 / 2 = -3.5

Number line:

    -5    -4    -3    -2
           ↑
         -3.5

-3.5 ka floor = -4

So:

    Floor Division = -4


C MEIN FLOOR DIVISION:
C mein floor division ke liye `floor()` function use
kar sakte hain.

`floor()` function ke liye:

    #include <math.h>

Syntax:

    floor(value)


Example:

    floor(7.0 / 2)      → 3
    floor(-7.0 / 2)     → -4


PROGRAM:

#include <stdio.h>
#include <math.h>

int main()
{
    int a, b;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Floor Division = %d", (int)floor((double)a / b));

    return 0;
}


IMPORTANT:
`floor()` decimal value ko neeche wale integer tak
le jaata hai.

    floor(3.7)  = 3
    floor(3.1)  = 3
    floor(-3.1) = -4
    floor(-3.7) = -4
========================================================
*/

/*
========================================================
                    FLOOR DIVISION IN C - English
========================================================

FLOOR DIVISION:
Floor division means taking the result of a division
to the LOWER INTEGER.

Example:

    7 / 2 = 3.5

Floor of 3.5 = 3

So:

    Floor Division = 3


IMPORTANT:
For negative numbers, "lower" means moving towards
the smaller value on the number line.

Example:

    -7 / 2 = -3.5

Number line:

    -5    -4    -3    -2
           ↑
         -3.5

The floor of -3.5 is -4.

So:

    Floor Division = -4


FLOOR DIVISION IN C:
C does not have a `//` floor division operator.

To perform true floor division, use the `floor()`
function from the <math.h> library.

Syntax:

    floor(value)


Example:

    floor(7.0 / 2)      → 3
    floor(-7.0 / 2)     → -4


PROGRAM:

#include <stdio.h>
#include <math.h>

int main()
{
    int a, b;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Floor Division = %d", (int)floor((double)a / b));

    return 0;
}


IMPORTANT:
The `floor()` function always moves the result towards
the lower integer.

    floor(3.7)  = 3
    floor(3.1)  = 3
    floor(-3.1) = -4
    floor(-3.7) = -4
========================================================
*/

// Q7. Rectangle Area

#include <stdio.h>

int main()
{
    float length, breadth;

    printf("Enter length: ");
    scanf("%f", &length);

    printf("Enter breadth: ");
    scanf("%f", &breadth);

    printf("Area = %.2f", length * breadth);

    return 0;
}


// Q8. Rectangle Perimeter

#include <stdio.h>

int main()
{
    float length, breadth;

    printf("Enter length: ");
    scanf("%f", &length);

    printf("Enter breadth: ");
    scanf("%f", &breadth);

    printf("Perimeter = %.2f", 2 * (length + breadth));

    return 0;
}


// Q9. Celsius to Fahrenheit

#include <stdio.h>

int main()
{
    float celsius, fahrenheit;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;

    printf("Fahrenheit = %.2f", fahrenheit);

    return 0;
}


// Q10. Gross Salary

#include <stdio.h>

int main()
{
    float salary, hra, da, gross;

    printf("Enter basic salary: ");
    scanf("%f", &salary);

    printf("Enter HRA: ");
    scanf("%f", &hra);

    printf("Enter DA: ");
    scanf("%f", &da);

    gross = salary + hra + da;

    printf("Gross Salary = %.2f", gross);

    return 0;
}  