// write a program which accept number from user and display its factors in decreasing order

#include<stdio.h>

void factrev(int iNo)
{
    if(iNo<=0)
    {
        iNo = -iNo;
    }
    int ifrequency =0;
    

    for(ifrequency=iNo;ifrequency>0;ifrequency--)
    {
        if(iNo%ifrequency == 0){
        printf("%d\t",ifrequency);
        
        }
        
    }
    
}

int main()
{
    int iValue = 0;

    printf("enter number \n");
    scanf("%d",&iValue);

    factrev(iValue);

    return 0;
}