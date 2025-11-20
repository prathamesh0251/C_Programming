// Accept N Numbers from user and return frequency of even numbers 

// input :  N : 6
//: 85 66 3 80 93 88 
// output : 3

#include<stdio.h>
#include<stdlib.h>


int CountEven(int Arr[], int iLength)
{
    int iCnt=0,iCount=0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if((Arr[iCnt]%2)==0)
        {
            iCount++;
        }
    }
return iCount;
}

int main()
{
    int iSize =0,iRet=0,iCnt=0;
    int *p=NULL;

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
    iRet = CountEven(p,iSize);

    printf(" result is %d",iRet);
    free(p);
    return 0;
}