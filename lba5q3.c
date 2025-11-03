// check leap year

#include<stdio.h>

void checkleapyear(int year)
{
    if(year%4==0)
    {
        printf("year is leap year");
    }
    else{
        printf("year is not leap year");
    }
}

int main()
{
    int yr;
    printf("enter year :");
    scanf("%d",&yr);
    checkleapyear(yr);
    return 0;
}