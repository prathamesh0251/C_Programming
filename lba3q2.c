// Write  a program which accept number from user and print even factors of that number 

#include<stdio.h>

void displayfactor(int iNo)
{
    if(iNo<=0)
    {
        iNo = -iNo;
    }
    int ifrequency =0;
    int evennum=2;

    for(ifrequency=1;ifrequency<=iNo;ifrequency++)
    {
        if(iNo%evennum==0){
        printf("%d\t",evennum);
        
        }
        evennum+=2;
    }
    
}

int main()
{
    int iValue = 0;

    printf("enter number \n");
    scanf("%d",&iValue);

    displayfactor(iValue);

    return 0;
}