#include <stdio.h>

int EvenFactorial(int No)
{
    int i = 0;
    int Fact = 1;

    for(i = 1; i <= No; i++)
    {
        if(i % 2 == 0)   // only even numbers
        {
            Fact = Fact * i;
        }
    }

    return Fact;
}

int main()
{
    int Value = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d", &Value);

    iRet = EvenFactorial(Value);

    printf("Even Factorial of number is: %d\n", iRet);

    return 0;
}
