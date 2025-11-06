



#include <stdio.h>

int OddFactorial(int iNo)
{
    int i = 0;
    int Fact = 1;

    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(i = 1; i <= iNo; i++)
    {
        if(i % 2 != 0)  
        {
            Fact = Fact * i;
        }
    }

    return Fact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = OddFactorial(iValue);

    printf("Odd Factorial of number is: %d\n", iRet);

    return 0;
}
