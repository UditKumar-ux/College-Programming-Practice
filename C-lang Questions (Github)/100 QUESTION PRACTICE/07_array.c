
// ==================================================
// EASY LEVEL (1-10)
// Basic understanding of arrays
// ==================================================

// 1. Input 5 numbers and print all array elements.

#include <stdio.h>
int main()
{
    int a[5], i;

    for (i = 0; i < 5; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < 5; i++)
        printf("%d ", a[i]);

    return 0;
}

// 2. Input n elements and print their indexes.

#include <stdio.h>
int main()
{
    int a[100], n, i;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n; i++)
        printf("Index %d = %d\n", i, a[i]);

    return 0;
}

// 3. Find the sum of all array elements.

#include <stdio.h>
int main()
{
    int a[100], n, i, sum = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n; i++)
        sum += a[i];

    printf("Sum = %d", sum);

    return 0;
}

// 4. Find the average of array elements.

#include <stdio.h>
int main()
{
    int a[100], n, i, sum = 0;
    float avg;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        sum += a[i];
    }

    avg = (float)sum / n;

    printf("Average = %.2f", avg);

    return 0;
}

// 5. Print all even and odd elements separately.

#include <stdio.h>
int main()
{
    int a[100], n, i;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Even: ");

    for (i = 0; i < n; i++)
        if (a[i] % 2 == 0)
            printf("%d ", a[i]);

    printf("\nOdd: ");

    for (i = 0; i < n; i++)
        if (a[i] % 2 != 0)
            printf("%d ", a[i]);

    return 0;
}

// 6. Find the maximum element in an array.

#include <stdio.h>
int main()
{
    int a[100], n, i, max;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    max = a[0];

    for (i = 1; i < n; i++)
        if (a[i] > max)
            max = a[i];

    printf("Maximum = %d", max);

    return 0;
}

// 7. Find the minimum element in an array.

#include <stdio.h>
int main()
{
    int a[100], n, i, min;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    min = a[0];

    for (i = 1; i < n; i++)
        if (a[i] < min)
            min = a[i];

    printf("Minimum = %d", min);

    return 0;
}

// 8. Print array elements in reverse order.

#include <stdio.h>
int main()
{
    int a[100], n, i;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = n - 1; i >= 0; i--)
        printf("%d ", a[i]);

    return 0;
}

// 9. Count positive, negative and zero elements.

#include <stdio.h>
int main()
{
    int a[100], n, i;
    int p = 0, neg = 0, zero = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n; i++)
    {
        if (a[i] > 0)
            p++;
        else if (a[i] < 0)
            neg++;
        else
            zero++;
    }

    printf("Positive = %d\n", p);
    printf("Negative = %d\n", neg);
    printf("Zero = %d", zero);

    return 0;
}

// 10. Search for a given element in an array.

#include <stdio.h>
int main()
{
    int a[100], n, i, x, found = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &x);

    for (i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            found = 1;
            break;
        }
    }

    if (found)
        printf("Element Found");
    else
        printf("Element Not Found");

    return 0;
}

// ==================================================
// MEDIUM LEVEL (11-20)
// Array + Conditions + Searching + Logic
// ==================================================

// 11. Find the second largest distinct element.

#include <stdio.h>
int main()
{
    int a[100], n, i, max, second, found = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    max = a[0];

    for (i = 1; i < n; i++)
        if (a[i] > max)
            max = a[i];

    for (i = 0; i < n; i++)
    {
        if (a[i] < max && (!found || a[i] > second))
        {
            second = a[i];
            found = 1;
        }
    }

    if (found)
        printf("Second Largest = %d", second);
    else
        printf("Not Found");

    return 0;
}

// 12. Count how many times a given element occurs.

#include <stdio.h>
int main()
{
    int a[100], n, i, x, count = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &x);

    for (i = 0; i < n; i++)
        if (a[i] == x)
            count++;

    printf("Frequency = %d", count);

    return 0;
}

// 13. Copy all elements of one array into another.

#include <stdio.h>
int main()
{
    int a[100], b[100], n, i;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n; i++)
        b[i] = a[i];

    for (i = 0; i < n; i++)
        printf("%d ", b[i]);

    return 0;
}

// 14. Find the sum of elements at even and odd indexes.

#include <stdio.h>
int main()
{
    int a[100], n, i, even = 0, odd = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            even += a[i];
        else
            odd += a[i];
    }

    printf("Even Index Sum = %d\n", even);
    printf("Odd Index Sum = %d", odd);

    return 0;
}

// 15. Print all duplicate elements without repeating them.

#include <stdio.h>
int main()
{
    int a[100], n, i, j, found;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n; i++)
    {
        found = 0;

        for (j = 0; j < i; j++)
            if (a[i] == a[j])
                found = 1;

        if (!found)
        {
            for (j = i + 1; j < n; j++)
                if (a[i] == a[j])
                {
                    printf("%d ", a[i]);
                    break;
                }
        }
    }

    return 0;
}

// 16. Merge two arrays into a third array.

#include <stdio.h>
int main()
{
    int a[100], b[100], c[200];
    int n, m, i;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &m);

    for (i = 0; i < m; i++)
        scanf("%d", &b[i]);

    for (i = 0; i < n; i++)
        c[i] = a[i];

    for (i = 0; i < m; i++)
        c[n + i] = b[i];

    for (i = 0; i < n + m; i++)
        printf("%d ", c[i]);

    return 0;
}

// 17. Insert an element at a given index.

#include <stdio.h>
int main()
{
    int a[100], n, i, x, pos;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d%d", &x, &pos);

    if (pos < 0 || pos > n || n >= 100)
        printf("Invalid Position");
    else
    {
        for (i = n; i > pos; i--)
            a[i] = a[i - 1];

        a[pos] = x;
        n++;

        for (i = 0; i < n; i++)
            printf("%d ", a[i]);
    }

    return 0;
}

// 18. Delete an element from a given index.

#include <stdio.h>
int main()
{
    int a[100], n, i, pos;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &pos);

    if (pos < 0 || pos >= n)
        printf("Invalid Position");
    else
    {
        for (i = pos; i < n - 1; i++)
            a[i] = a[i + 1];

        n--;

        for (i = 0; i < n; i++)
            printf("%d ", a[i]);
    }

    return 0;
}

// 19. Sort array elements in ascending order.

#include <stdio.h>
int main()
{
    int a[100], n, i, j, temp;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}

// 20. Compare two arrays and check whether they are equal.

#include <stdio.h>
int main()
{
    int a[100], b[100], n, m, i, equal = 1;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &m);

    for (i = 0; i < m; i++)
        scanf("%d", &b[i]);

    if (n != m)
        equal = 0;
    else
    {
        for (i = 0; i < n; i++)
        {
            if (a[i] != b[i])
            {
                equal = 0;
                break;
            }
        }
    }

    if (equal)
        printf("Arrays are Equal");
    else
        printf("Arrays are Not Equal");

    return 0;
}

// ==================================================
// HARD LEVEL (21-30)
// Nested Loops + Advanced Array Logic
// ==================================================

// 21. Find all pairs whose sum equals a target number.

#include <stdio.h>
int main()
{
    int a[100], n, i, j, target;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &target);

    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] + a[j] == target)
                printf("%d + %d\n", a[i], a[j]);
        }
    }

    return 0;
}

// 22. Remove duplicate elements from an array.

#include <stdio.h>
int main()
{
    int a[100], n, i, j, k;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                for (k = j; k < n - 1; k++)
                    a[k] = a[k + 1];

                n--;
                j--;
            }
        }
    }

    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}

// 23. Rotate an array by k positions to the right.

#include <stdio.h>
int main()
{
    int a[100], b[100], n, k, i;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &k);

    if (n <= 0)
        return 0;

    k = k % n;

    for (i = 0; i < n; i++)
        b[(i + k) % n] = a[i];

    for (i = 0; i < n; i++)
        printf("%d ", b[i]);

    return 0;
}

// 24. Find the frequency of every distinct element.

#include <stdio.h>
int main()
{
    int a[100], n, i, j, count, found;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n; i++)
    {
        found = 0;

        for (j = 0; j < i; j++)
            if (a[i] == a[j])
                found = 1;

        if (!found)
        {
            count = 0;

            for (j = 0; j < n; j++)
                if (a[i] == a[j])
                    count++;

            printf("%d occurs %d times\n", a[i], count);
        }
    }

    return 0;
}

// 25. Find the maximum sum of a continuous subarray.

#include <stdio.h>
int main()
{
    int a[100], n, i, sum, max;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    sum = max = a[0];

    for (i = 1; i < n; i++)
    {
        if (sum + a[i] < a[i])
            sum = a[i];
        else
            sum += a[i];

        if (sum > max)
            max = sum;
    }

    printf("Maximum Subarray Sum = %d", max);

    return 0;
}

// 26. Find the equilibrium index of an array.

#include <stdio.h>
int main()
{
    int a[100], n, i, total = 0, left = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        total += a[i];
    }

    for (i = 0; i < n; i++)
    {
        total -= a[i];

        if (left == total)
        {
            printf("Equilibrium Index = %d", i);
            return 0;
        }

        left += a[i];
    }

    printf("No Equilibrium Index");

    return 0;
}

// 27. Find leaders in an array.
// A leader is greater than or equal to all elements on its right.

#include <stdio.h>
int main()
{
    int a[100], n, i, max;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    max = a[n - 1];

    printf("%d ", max);

    for (i = n - 2; i >= 0; i--)
    {
        if (a[i] >= max)
        {
            max = a[i];
            printf("%d ", max);
        }
    }

    return 0;
}

// 28. Move all zeros to the end without changing
// the relative order of non-zero elements.

#include <stdio.h>
int main()
{
    int a[100], n, i, j = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n; i++)
    {
        if (a[i] != 0)
        {
            a[j] = a[i];
            j++;
        }
    }

    while (j < n)
    {
        a[j] = 0;
        j++;
    }

    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}

// 29. Find the smallest missing positive number.

#include <stdio.h>
int main()
{
    int a[100], n, i, j, found, ans = 1;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    while (1)
    {
        found = 0;

        for (j = 0; j < n; j++)
        {
            if (a[j] == ans)
            {
                found = 1;
                break;
            }
        }

        if (!found)
            break;

        ans++;
    }

    printf("Smallest Missing Positive = %d", ans);

    return 0;
}

// 30. Find the longest continuous increasing subarray
// and print its length and elements.

#include <stdio.h>
int main()
{
    int a[100], n, i;
    int count = 1, max = 1;
    int start = 0, best = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 1; i < n; i++)
    {
        if (a[i] > a[i - 1])
            count++;
        else
        {
            count = 1;
            start = i;
        }

        if (count > max)
        {
            max = count;
            best = start;
        }
    }

    printf("Length = %d\n", max);
    printf("Subarray = ");

    for (i = best; i < best + max; i++)
        printf("%d ", a[i]);

    return 0;
}
