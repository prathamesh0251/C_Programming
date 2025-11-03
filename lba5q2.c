// find maximimum of two numbers 

#include<stdio.h>

void checkevenodd(int num1,int num2)
{
    if(num1>num2)
    {
        printf("number1 is max");
    }

    else if(num1<num2)
    {
        printf(" number2 is max");
    }
    else{
        printf("both are same ");
    }

}

int main()
{
    int number1,number2;

    printf("enter number1 :");
    scanf("%d",&number1);

    printf("enter number2 :");
    scanf("%d",&number2);

    checkevenodd(number1,number2);

    return 0;
}