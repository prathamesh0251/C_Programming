


#include <stdio.h>

void DisplayTable(int No)
{
    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", No, i, No * i);
    }
}

int main()
{
    int Value = 0;

    printf("Enter number: ");
    scanf("%d", &Value);

    DisplayTable(Value);

    return 0;
}
