// Write a program which accept two numbers and check wether numbers are equal or not 

#include<stdio.h>
#include<stdbool.h>

bool ChkEqual(int Num1, int Num2)
{


    if(Num1==Num2)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue1=0,iValue2=0;

    bool bRet = false;

    printf("Plsase enter two numbers");
    scanf("%d %d",&iValue1,&iValue2);

    bRet=ChkEqual(iValue1,iValue2);

    if(bRet==true)
    {
        printf("Numbers Are Equal");
    }
    else{
        printf("Numbers Are not Equal ");
    }
    return 0;
}