// write a program which accepts n and print first 5 multiplication of n



#include<stdio.h>

void MultipleDisplay(int iNo)
{
    int i = 0;

    for(i = 1; i <= 5; i++)
    {
        printf("%d  ", iNo * i);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    MultipleDisplay(iValue);

    return 0;
}
