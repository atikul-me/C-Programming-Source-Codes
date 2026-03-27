#include <stdio.h>
int main()
{
    int a;
    printf("What do you have buy from the store?\n\n");
    printf("1. Oil\n2. Rice\n3. Rice and Oil\n\n2");
    scanf("%d",&a);

    if (a == 1)
    {
        printf("You need a Bottle to carry. Here is one.");
    }

    else if(a == 2)
    {
        printf("You need a Bag to carry. Here is one.");
    }

    else if(a == 3)
    {
        printf("You need one Bottle and one Bag to carry. Here are those.");
    }

    else
    {
        printf("403 error. Try again");
    }

    printf("\n\n");
    printf("Have a Good Day. Please come again.");

    return 0;
}
