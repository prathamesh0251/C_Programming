/*
Accept on character from user and check wether that character is vowel
(a,e,i,o,u) or not*/
input : E    output : true
input : d    output : false

#include<stdio.h>
#include<stdbool.h>   
bool CheckVowel(char cValue)
{
    
    if(cValue >= 'A' && cValue <= 'Z')
    {
        cValue = cValue + 32; 
    }

    
    if(cValue == 'a' || cValue == 'e' || cValue == 'i' || cValue == 'o' || cValue == 'u')
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
    char cValue = '\0';
    bool bRet = false;

    printf("Enter character: ");
    scanf(" %c", &cValue);   
    bRet = CheckVowel(cValue);

    if(bRet == true)
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }

    return 0;
}
