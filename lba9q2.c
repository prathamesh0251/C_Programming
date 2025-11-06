#include <stdio.h>

int DollarToINR(int No)
{
    int Rupees = 0;

    Rupees = No * 70;

    return Rupees;
}

int main()
{
    int Value = 0;
    int Result = 0;

    printf("Enter number of USD: ");
    scanf("%d", &Value);

    Result = DollarToINR(Value);

    printf("Value in INR is: %d\n", Result);

    return 0;
}
