// find largest among three numbers
#include<stdio.h>

void checkevenodd(int num1,int num2,int num3)
{
    if(num1>num2&&num1>num3)
    {
        printf("number1 is largest");
    }

    else if(num1<num2&&num2>num3)
    {
        printf(" number2 is largest");
    }
    else if(num3>num1&&num3>num2)
    {
        printf("number3 is largest");
    }
    else{
        printf("all are same ");
    }

}

int main()
{
    int number1,number2,number3;

    printf("enter number1 :");
    scanf("%d",&number1);

    printf("enter number2 :");
    scanf("%d",&number2);

    printf("enter number3 :");
    scanf("%d",&number3);

    checkevenodd(number1,number2,number3);

    return 0;
}