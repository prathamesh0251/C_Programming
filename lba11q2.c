// write a program which accepts range from usrer and display all the even numbers in between

#include<stdio.h>

void RangeDisplayEven(int iStart,int iEnd)
{
int i=0;
    for(i=iStart;i<=iEnd;i++)
    {
        if(i%2==0){
        printf("%d \t",i);
  
          }  }

}

int main()
{
    int iValue1 =0,iValue2=0;
    printf("Enter a starting point :");
    scanf("%d",&iValue1);

    printf("enter a ending point :");
    scanf("%d",&iValue2);
     
    RangeDisplayEven(iValue1,iValue2);

    return 0;
}