// Write a program  which  accepts total marks  & obtined marks from user and  calculate percentege.



#include<stdio.h>

float Percentage(float tMarks,float oMarks)
{
float Percent=(oMarks*100)/tMarks;
return Percent;
}

int main()
{
    int iValue1=0,iValue2=0;
    float fRet=0.0;

    printf("Please enter total marks ");
    scanf("%d",&iValue1);

    printf("Please enter obtined marks ");
    scanf("%d",&iValue2);

    fRet=Percentage(iValue1,iValue2);
    printf("Percentage= %f",fRet);

    return 0;

    
}