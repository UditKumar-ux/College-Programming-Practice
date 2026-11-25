// ============================================================
// FOR LOOP
// ============================================================

// Q73. 1 to 10
#include <stdio.h>
int main()
{
    for (int i = 1; i <= 10; i++)
        printf("%d ", i);
    return 0;
}

// Q74. 1 to n
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        printf("%d ", i);
    return 0;
}

// Q75. Even numbers 1 to n
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        if (i % 2 == 0)
            printf("%d ", i);
    return 0;
}

// Q76. Odd numbers 1 to n
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        if (i % 2 != 0)
            printf("%d ", i);
    return 0;
}

// Q77. Sum 1 to n
#include <stdio.h>
int main()
{
    int n, sum = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        sum += i;
    printf("Sum = %d", sum);
    return 0;
}

// Q78. Sum of even numbers
#include <stdio.h>
int main()
{
    int n, sum = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        if (i % 2 == 0)
            sum += i;
    printf("Even sum = %d", sum);
    return 0;
}

// Q79. Sum of odd numbers
#include <stdio.h>
int main()
{
    int n, sum = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        if (i % 2 != 0)
            sum += i;
    printf("Odd sum = %d", sum);
    return 0;
}

// Q80. Multiplication table
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= 10; i++)
        printf("%d x %d = %d\n", n, i, n * i);
    return 0;
}

// Q81. Reverse counting
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = n; i >= 1; i--)
        printf("%d ", i);
    return 0;
}

// Q82. Count even numbers between start and end
#include <stdio.h>

int main()
{
    // Variables declare karo
    int start, end, count = 0;

    // Starting aur ending number input lo
    scanf("%d %d", &start, &end);

    // Start se end tak har number par jao
    for (int i = start; i <= end; i++)

        // Check karo ki number even hai ya nahi
        if (i % 2 == 0)

            // Even milne par count mein 1 add karo
            count++;

    // Total even numbers print karo
    printf("Even count = %d", count);

    return 0;
}

// Q83. Count odd numbers between start and end
#include <stdio.h>
int main()
{
    int start, end, count = 0;
    scanf("%d %d", &start, &end);
    for (int i = start; i <= end; i++)
        if (i % 2 != 0)
            count++;
    printf("Odd count = %d", count);
    return 0;
}

// Q84. Even/odd count and sums
#include <stdio.h>
int main()
{
    int start, end, evenCount = 0, oddCount = 0;
    int evenSum = 0, oddSum = 0;
    scanf("%d %d", &start, &end);

    for (int i = start; i <= end; i++)
    {
        if (i % 2 == 0)
        {
            evenCount++;
            evenSum += i;
        }
        else
        {
            oddCount++;
            oddSum += i;
        }
    }

    printf("Even count = %d\n", evenCount);
    printf("Odd count = %d\n", oddCount);
    printf("Even sum = %d\n", evenSum);
    printf("Odd sum = %d\n", oddSum);
    return 0;
}

// ============================================================
// WHILE LOOP
// ============================================================

// Q85. 1 to 10
#include <stdio.h>
int main()
{
    int i = 1;
    while (i <= 10)
    {
        printf("%d ", i);
        i++;
    }
    return 0;
}

// Q86. 1 to n
#include <stdio.h>
int main()
{
    int n, i = 1;
    scanf("%d", &n);
    while (i <= n)
    {
        printf("%d ", i);
        i++;
    }
    return 0;
}

// Q87. Even numbers 1 to n
#include <stdio.h>
int main()
{
    int n, i = 1;
    scanf("%d", &n);
    while (i <= n)
    {
        if (i % 2 == 0)
        {
            printf("%d ", i);
        }
        i++;
    }
    return 0;
}

// Q88. Odd numbers 1 to n
#include <stdio.h>
int main()
{
    int n, i = 1;
    scanf("%d", &n);
    while (i <= n)
    {
        if (i % 2 != 0)
            printf("%d ", i);
        i++;
    }
    return 0;
}

// Q89. Sum 1 to n
#include <stdio.h>
int main()
{
    int n, i = 1, sum = 0;
    scanf("%d", &n);
    while (i <= n)
    {
        sum += i;
        i++;
    }
    printf("Sum = %d", sum);
    return 0;
}

// Q90. Multiplication table
#include <stdio.h>
int main()
{
    int n, i = 1;
    scanf("%d", &n);
    while (i <= 10)
    {
        printf("%d x %d = %d\n", n, i, n * i);
        i++;
    }
    return 0;
}

// Q91. Count even numbers between start and end
#include <stdio.h>
int main()
{
    int start, end, count = 0;
    scanf("%d %d", &start, &end);
    while (start <= end)
    {
        if (start % 2 == 0)
            count++;
        start++;
    }
    printf("Even count = %d", count);
    return 0;
}

// Q92. Sum of odd numbers between start and end
#include <stdio.h>
int main()
{
    int start, end, sum = 0;
    scanf("%d %d", &start, &end);
    while (start <= end)
    {
        if (start % 2 != 0)
            sum += start;
        start++;
    }
    printf("Odd sum = %d", sum);
    return 0;
}

// ============================================================
// DO-WHILE LOOP
// ============================================================

// Q93. 1 to 10
#include <stdio.h>
int main()
{
    int i = 1;
    do
    {
        printf("%d ", i);
        i++;
    } while (i <= 10);
    return 0;
}

// Q94. 1 to n
#include <stdio.h>
int main()
{
    int n, i = 1;
    scanf("%d", &n);
    do
    {
        printf("%d ", i);
        i++;
    } while (i <= n);
    return 0;
}

// Q95. Even numbers 1 to n
#include <stdio.h>
int main()
{
    int n, i = 1;
    scanf("%d", &n);
    do
    {
        if (i % 2 == 0)
            printf("%d ", i);
        i++;
    } while (i <= n);
    return 0;
}

// Q96. Odd numbers 1 to n
#include <stdio.h>
int main()
{
    int n, i = 1;
    scanf("%d", &n);
    do
    {
        if (i % 2 != 0)
            printf("%d ", i);
        i++;
    } while (i <= n);
    return 0;
}

// Q97. Sum 1 to n
#include <stdio.h>
int main()
{
    int n, i = 1, sum = 0;
    scanf("%d", &n);
    do
    {
        sum += i;
        i++;
    } while (i <= n);
    printf("Sum = %d", sum);
    return 0;
}

// Q98. Multiplication table
#include <stdio.h>
int main()
{
    int n, i = 1;
    scanf("%d", &n);
    do
    {
        printf("%d x %d = %d\n", n, i, n * i);
        i++;
    } while (i <= 10);
    return 0;
}

// Q99. ATM PIN Verification System

#include <stdio.h>

int main()
{
    int correctPin, pin, attempts = 0;

    printf("Set ATM PIN: ");
    scanf("%d", &correctPin);

    do
    {
        printf("Enter ATM PIN: ");
        scanf("%d", &pin);

        attempts++;

        if (pin == correctPin)
        {
            printf("Access Granted\n");
            break;
        }
        else
        {
            printf("Wrong PIN\n");
        }

    } while (attempts < 3);

    if (pin != correctPin)
    {
        printf("ATM Card Blocked\n");
    }

    return 0;
}

// Q100. Even/odd count and sums using do-while
#include <stdio.h>
int main()
{
    int start, end;
    int evenCount = 0, oddCount = 0;
    int evenSum = 0, oddSum = 0;

    scanf("%d %d", &start, &end);

    do
    {
        if (start % 2 == 0)
        {
            evenCount++;
            evenSum += start;
        }
        else
        {
            oddCount++;
            oddSum += start;
        }
        start++;
    } while (start <= end);

    printf("Even count = %d\n", evenCount);
    printf("Odd count = %d\n", oddCount);
    printf("Even sum = %d\n", evenSum);
    printf("Odd sum = %d\n", oddSum);

    return 0;
}
