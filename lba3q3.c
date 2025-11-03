// Write a program which accept number from user
//  and print even factors of that number.

#include<stdio.h>

void displayevenfactor(int iNo)
{
    if(iNo<=0)
    {
        iNo = -iNo;
    }
    int ifrequency =0;
    

    for(ifrequency=1;ifrequency<=iNo;ifrequency++)
    {
        if((iNo%ifrequency == 0) && (ifrequency % 2 == 0)){
        printf("%d\t",ifrequency);
        
        }
        
    }
    
}

int main()
{
    int iValue = 0;

    printf("enter number \n");
    scanf("%d",&iValue);

    displayevenfactor(iValue);

    return 0;
}