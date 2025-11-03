// Check even or odd 

#include<stdio.h>

void checkevenodd(int num)
{
    if(num%2==0)
    {
        printf("number is even");
    }

    else if(num%2!=0)
    {
        printf(" the number is odd");
    }
    else{
        printf("zero");
    }

}

int main()
{
    int number;

    printf("enter number :");
    scanf("%d",&number);

    checkevenodd(number);

    return 0;
}