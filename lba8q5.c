

#include <stdio.h>

void TableRev(int iNo)
{
    int i = 0;

    // Start from 10 and go down to 1
    for(i = 10; i >= 1; i--)
    {
        printf("%d  ", iNo * i);
    }

    printf("\n"); // for clean output
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    TableRev(iValue);

    return 0;
}
