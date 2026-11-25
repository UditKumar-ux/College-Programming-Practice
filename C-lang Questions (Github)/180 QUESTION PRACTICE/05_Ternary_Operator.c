// Q63. Even/Odd
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    printf("%s", n % 2 == 0 ? "Even" : "Odd");
    return 0;
}

// Q64. Positive/Negative
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    printf("%s", n >= 0 ? "Positive" : "Negative");
    return 0;
}

// Q65. Greater of two numbers
#include <stdio.h>
int main()
{
    int a, b, greater;
    scanf("%d %d", &a, &b);
    greater = (a > b) ? a : b;
    printf("Greater = %d", greater);
    return 0;
}

// Q66. Equal/Not Equal
#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%s", a == b ? "Equal" : "Not equal");
    return 0;
}

// Q67. Pass/Fail
#include <stdio.h>
int main()
{
    int marks;
    scanf("%d", &marks);
    printf("%s", marks >= 40 ? "Pass" : "Fail");
    return 0;
}

// Q68. Voting Eligibility
#include <stdio.h>
int main()
{
    int age;
    scanf("%d", &age);
    printf("%s", age >= 18 ? "Eligible" : "Not eligible");
    return 0;
}

// Q69. Greatest of three numbers
#include <stdio.h>
int main()
{
    int a, b, c, greatest;
    scanf("%d %d %d", &a, &b, &c);
    greatest = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    printf("Greatest = %d", greatest);
    return 0;
}

// Q70. Positive/Negative/Zero
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    printf("%s", n > 0 ? "Positive" : (n < 0 ? "Negative" : "Zero"));
    return 0;
}

// Q71. Smaller of two numbers
#include <stdio.h>
int main()
{
    int a, b, smaller;
    scanf("%d %d", &a, &b);
    smaller = (a < b) ? a : b;
    printf("Smaller = %d", smaller);
    return 0;
}

// Q72. Check divisible by 5
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    printf("%s", n % 5 == 0 ? "Divisible" : "Not divisible");
    return 0;
}