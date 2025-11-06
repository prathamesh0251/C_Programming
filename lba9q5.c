

#include <stdio.h>

int FactorialDiff(int iNo)
{
    int i = 0;
    int EvenFact = 1, OddFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(i = 1; i <= iNo; i++)
    {
        if(i % 2 == 0)
        {
            EvenFact = EvenFact * i;
        }
        else
        {
            OddFact = OddFact * i;
        }
    }

    return (EvenFact - OddFact);
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial difference is: %d\n", iRet);

    return 0;
}
