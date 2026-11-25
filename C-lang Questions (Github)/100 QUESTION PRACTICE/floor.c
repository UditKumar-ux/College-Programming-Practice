#include <stdio.h>
int main()
{
    int a[100], b[100], n, m, i, equal = 1;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &m);

    for(i = 0; i < m; i++)
        scanf("%d", &b[i]);

    if(n != m)
        equal = 0;
    else
    {
        for(i = 0; i < n; i++)
        {
            if(a[i] != b[i])
            {
                equal = 0;
                break;
            }
        }
    }

    if(equal)
        printf("Arrays are Equal");
    else
        printf("Arrays are Not Equal");

    return 0;
}