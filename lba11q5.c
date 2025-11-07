// write a program which accepts range from usrer and
//  display all numbers in between that range in reverse order

#include<stdio.h>

void RangeDisplay(int iStart,int iEnd)
{
int i=0;
    for(i=iEnd;i>=iStart;i--)
    {
        printf("%d \t",i);
    }

}

int main()
{
    int iValue1 =0,iValue2=0;
    printf("Enter a starting point :");
    scanf("%d",&iValue1);

    printf("enter a ending point :");
    scanf("%d",&iValue2);
     
    RangeDisplay(iValue1,iValue2);

    return 0;
}