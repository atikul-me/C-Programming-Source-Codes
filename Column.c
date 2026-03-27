#include <stdio.h>
int main()
{
int n, row, col;

printf ("Enter N = ");
scanf ("%d",&n);

for (col = n; col >= 1; col--)
{
    for (row = 1; row <= col; row++)
    {
        printf ("%d", col);
    }
    printf("\n");
}
    return 0;
}