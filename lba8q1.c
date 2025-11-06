

#include <stdio.h>

void Number(int No)
{
    if (No < 50)
    {
        printf("Small\n");
    }
    else if (No >= 50 && No <= 100)
    {
        printf("Medium\n");
    }
    else if (No > 100)
    {
        printf("Large\n");
    }
}

int main()
{
    int Value = 0;

    printf("Enter number: ");
    scanf("%d", &Value);

    Number(Value);

    return 0;
}
