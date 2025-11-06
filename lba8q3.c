


#include <stdio.h>

int Factorial(int No)
{
    int Fact = 1;

    for (int i = 1; i <= No; i++)
    {
        Fact = Fact * i;
    }

    return Fact;
}

int main()
{
    int Value = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d", &Value);

    iRet = Factorial(Value);

    printf("Factorial of number is %d\n", iRet);

    return 0;
}
