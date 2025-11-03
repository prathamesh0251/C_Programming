// write a program which accept number from user and return difference between summation of all its factors and non factors

#include<stdio.h>

int nonfact(int iNo)
{
    if(iNo<=0)
    {
        iNo = -iNo;
    }
    int ifrequency =0;
    
int sum1=0;
    for(ifrequency=1;ifrequency<=iNo;ifrequency++)
    {
        if(iNo%ifrequency != 0 ){
        printf("%d\t",ifrequency);
        sum1=sum1+ifrequency;
        }
        
    }
    printf("\n");

    int sum2=0;
    for(ifrequency=1;ifrequency<=iNo;ifrequency++)
    {
        if(iNo%ifrequency == 0 ){
        printf("%d\t",ifrequency);
        sum2=sum2+ifrequency;
        }
        
    }
    return sum1-sum2;
}

int main()
{
    int iValue = 0;
    int iAns=0;
    printf("enter number \n");
    scanf("%d",&iValue);

  iAns=nonfact(iValue);

  printf("\n diff betw summation of fact and nonfact is : %d",iAns);

    return 0;
}