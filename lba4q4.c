//write a program which accept number from user and return summation of all its non factors

#include<stdio.h>

int nonfact(int iNo)
{
    if(iNo<=0)
    {
        iNo = -iNo;
    }
    int ifrequency =0;
    
int sum=0;
    for(ifrequency=1;ifrequency<=iNo;ifrequency++)
    {
        if(iNo%ifrequency != 0 ){
        printf("%d\t",ifrequency);
        sum=sum+ifrequency;
        }
        
    }
    return sum;
}

int main()
{
    int iValue = 0;
    int iAns=0;
    printf("enter number \n");
    scanf("%d",&iValue);

  iAns=nonfact(iValue);

  printf("sum is : %d",iAns);

    return 0;
}