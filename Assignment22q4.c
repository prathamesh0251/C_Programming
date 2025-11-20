// Accept N numbers from user and return frequency of 11 from it 
// input : 6
// element : 85 66 3 15 93 88
// output : 0

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int CountEven(int Arr[], int iLength)
{
    int iCnt=0,iCount;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]==11)
        {
           iCount++;
        }
     
    }
return iCount;
}

int main()
{
    int iSize =0,iCnt=0;
    int *p=NULL;
    int iRet=0;

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

    printf("frequency of 11 is : %d",iRet);
    free(p);
    return 0;
}