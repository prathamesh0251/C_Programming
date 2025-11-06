

#include <stdio.h>

void Display(int No)
{
    int i = 0;

    for(i = 1; i <= No; i++)
    {
        printf("%d  ", i);
    }

    printf("\n");
}

int main()
{
    int Value = 0;

    printf("Enter number: ");
    scanf("%d", &Value);

    Display(Value);

    return 0;
}
