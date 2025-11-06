// Write a program which accepts three numbers and print its multiplication

#include<stdio.h>

int Multiply(int num1,int num2,int num3)
{
    int mult=(num1*num2)*num3;

    return mult;

}

int main()
{
    int iValue1,iValue2=0,iValue3=0,iRet=0;
    printf(" please enter three numbers");
    scanf("%d  %d  %d",&iValue1,&iValue2,&iValue3);

    iRet=Multiply(iValue1,iValue2,iValue3);
    printf("Multiplication is :%d",iRet);
    return 0;


}