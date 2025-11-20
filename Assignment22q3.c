// Accept N Numbers from user and 
// check wether that number contains 11 in it or not


// input :  N : 6
//: 85 66 3 80 93 88 
// output : 11 is present 

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int CountEven(int Arr[], int iLength)
{
    int iCnt=0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]==11)
        {
            return true;
        }
      else{
        return false;
      }
    }


}

int main()
{
    int iSize =0,iCnt=0;
    int *p=NULL;
    bool bRet=false;

    printf("enter the number of elements :");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize*sizeof(int));

    if(NULL==p)
    {
        printf("Unable to allocate memmory ");
    }
    printf("enter %d elements ",iSize);
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        printf("Enter elements : ");
        scanf("%d",&p[iCnt]);
    }
    bRet = CountEven(p,iSize);

    if (bRet==true)
    {
        printf("11 is present");
    }
    else
    {
        printf("11 is not present");
    }
    free(p);
    return 0;
}