// write a program which accepts range from usrer and  
// return addition of all numbers in between that range (range should contins positive  numbers only)

#include<stdio.h>

int RangeDisplaySum(int iStart,int iEnd)
{
int i=0;
int iSum=0;
if(iStart<0&&iEnd<0){
    for(i=iStart;i<=iEnd;i++)
    {
        
        iSum=iSum+i;
 
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
     
    iRet=RangeDisplaySum(iValue1,iValue2);

    printf("%d",iRet);
    return 0;
}