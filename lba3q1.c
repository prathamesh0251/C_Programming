// Write a program whic accept  one number from user and print that number of even numbers on screen 

#include<stdio.h>

void printeven(int iNo)
{
    if(iNo<=0)
    {
        return;
    }
    int ifrequency =0;
    int evennum=2;

    for(ifrequency=1;ifrequency<=iNo;ifrequency++)
    {
        printf("%d\t",evennum);
        evennum+=2;
    }
    
}

int main()
{
    int iValue = 0;

    printf("enter number \n");
    scanf("%d",&iValue);

    printeven(iValue);

    return 0;
}