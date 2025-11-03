//Write a program which accept number from user and display all its non factors

#include<stdio.h>

void nonfact(int iNo)
{
    if(iNo<=0)
    {
        iNo = -iNo;
    }
    int ifrequency =0;
    

    for(ifrequency=1;ifrequency<=iNo;ifrequency++)
    {
        if(iNo%ifrequency != 0 ){
        printf("%d\t",ifrequency);
        
        }
        
    }
    
}

int main()
{
    int iValue = 0;

    printf("enter number \n");
    scanf("%d",&iValue);

    nonfact(iValue);

    return 0;
}