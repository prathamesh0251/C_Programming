// write a program which accepts number from user and display its multiplication of factors

#include<stdio.h>

int multfact(int iNo)
{
    if(iNo<=0)
    {
        iNo = -iNo;
    }
    int ifrequency =0;
    
int mult=1;
    for(ifrequency=1;ifrequency<iNo;ifrequency++)
    {
        if(iNo%ifrequency == 0){
        //printf("%d\t",ifrequency);
        mult = mult*ifrequency;
        }

    }
    return mult;
}

int main()
{
    int iValue = 0;
   int iRet = 0;

    printf("enter number \n");
    scanf("%d",&iValue);

   iRet= multfact(iValue);

   printf("%d",iRet);

    return 0;
}