#include <stdio.h>

int main (void)
{
    int m, n, o, x, y;
    printf("please input n & x:\n");
    scanf("%d%d", &n, &x);
    for(y = 0; y < x; y++)
    {
        for (m = 0; m < n; m++)
        {
            for(o = 0; o < n - m; o++)
                putchar(' ');

            for (o = 0; o < 2 * m + 1; o++)
                putchar('*');

            putchar('\n');
        }

        for (m = 0; m < n; m++)
        {
            for (o = 0; o < m; o++)
                putchar(' ');

            for(o = 0; o < 2 * (n - m) + 1; o++)
                putchar('*');
            putchar('\n');
        }
    }

    for(m = 0; m < n; m++)
        putchar(' ');

    putchar('*');

    putchar('\n');

    return 0;
}
