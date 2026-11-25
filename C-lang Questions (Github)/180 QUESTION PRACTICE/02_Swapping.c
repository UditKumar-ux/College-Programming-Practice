// ==================================================
// SWAPPING PRACTICE
// ==================================================

// Q11. Swap using third variable

#include <stdio.h>

int main()
{
    int a, b, temp;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    temp = a;
    a = b;
    b = temp;

    printf("After swapping: a = %d, b = %d", a, b);

    return 0;
}


// Q12. Swap without third variable

#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swapping: a = %d, b = %d", a, b);

    return 0;
}


// Q13. Swap using multiplication and division

#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    a = a * b;
    b = a / b;
    a = a / b;

    printf("After swapping: a = %d, b = %d", a, b);

    return 0;
}


// Q14. Swap using XOR operator

#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    printf("After swapping: a = %d, b = %d", a, b);

    return 0;
}
// XOR Swapping Working
// Example: a = 5, b = 3

// Binary values:
//
// a = 5 = 101
// b = 3 = 011


// Step 1:
// a = a ^ b

//       101   (a = 5)
//     ^ 011   (b = 3)
//     -------
//       110   (a = 6)
//
// Now: a = 6, b = 3


// Step 2:
// b = a ^ b

//       110   (a = 6)
//     ^ 011   (b = 3)
//     -------
//       101   (b = 5)
//
// Now: a = 6, b = 5
// Original value of a is now stored in b


// Step 3:
// a = a ^ b

//       110   (a = 6)
//     ^ 101   (b = 5)
//     -------
//       011   (a = 3)
//
// Now: a = 3, b = 5
// Original value of b is now stored in a


// Final:
// Before swapping: a = 5, b = 3
// After swapping:  a = 3, b = 5

// Q15. Swap two floating-point numbers

#include <stdio.h>

int main()
{
    float a, b, temp;

    printf("Enter first number: ");
    scanf("%f", &a);

    printf("Enter second number: ");
    scanf("%f", &b);

    temp = a;
    a = b;
    b = temp;

    printf("After swapping: a = %.2f, b = %.2f", a, b);

    return 0;
}


// Q16. Swap two characters

#include <stdio.h>

int main()
{
    char a, b, temp;

    printf("Enter first character: ");
    scanf(" %c", &a);

    printf("Enter second character: ");
    scanf(" %c", &b);

    temp = a;
    a = b;
    b = temp;

    printf("After swapping: a = %c, b = %c", a, b);

    return 0;
}
// CHAR SWAPPING SUMMARY

// char variable stores only ONE character.
// Example: R, H, A, Z

char a, b, temp;

// So this can swap:
a = 'R';
b = 'H';

// Result:
// a = H
// b = R


// A complete word/string cannot be stored in a single char.
// Example: Raman, Ankush ❌

// For words/strings, use a character array:
// char a[20], b[20];
//
// This can store:
// a = "Raman"
// b = "Ankush"

// Q17. Swap the first and last digits of a number
   
#include <stdio.h>

int main()
{
    int n, first, last, temp, divisor = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    // Find the last digit
    last = n % 10;

    // Find the divisor to get the first digit
    while (temp >= 10)
    {
        temp = temp / 10;
        divisor = divisor * 10;
    }

    first = temp;

    // Remove first and last digits
    n = n % divisor;
    n = n / 10;

    // Form the new number
    n = last * divisor + n * 10 + first;

    printf("After swapping first and last digits: %d", n);

    return 0;
}

// Q18. Swap three numbers cyclically
// a -> b, b -> c, c -> a

#include <stdio.h>

int main()
{
    int a, b, c, temp;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Enter third number: ");
    scanf("%d", &c);

    temp = a;
    a = b;
    b = c;
    c = temp;

    printf("After swapping: a = %d, b = %d, c = %d", a, b, c);

    return 0;
}  