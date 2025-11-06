#include <stdio.h>

int KMtoMeter(int iNo)
{
    int Meter = iNo * 1000;
    return Meter;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter distance in kilometres: ");
    scanf("%d", &iValue);

    iRet = KMtoMeter(iValue);

    printf("Distance in meters is: %d\n", iRet);
    return 0;
}
