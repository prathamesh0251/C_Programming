// write a program which accepts range from usrer and  
// return addition of all even numbers in between that range (range should contins positive  numbers only)

#include<stdio.h>

int RangeSumEven(int iStart,int iEnd)
{
int i=0;
int iSum=0;
if((iStart>0&&iEnd>0)&&(iEnd>iStart)){
    for(i=iStart;i<=iEnd;i++)
    {
        if(i%2==0){
        iSum=iSum+i;
        }

 
            }
        }else
        {
            printf("invalide range");
        }

        return iSum;
}

int main()
{
    int iValue1 =0,iValue2=0,iRet=0;
    printf("Enter a starting point :");
    scanf("%d",&iValue1);

    printf("enter a ending point :");
    scanf("%d",&iValue2);
     
    iRet=RangeSumEven(iValue1,iValue2);

    printf("%d",iRet);
    return 0;
}