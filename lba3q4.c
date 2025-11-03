/*Accept one character from user and convert case of character 
input : a   output : A
input : b   output : B
*/
#include<stdio.h>
void Displayconvert(char cValue)
{
if(cValue>='a'&& cValue <='z')
{
printf("%c",cValue-32);
}
else if(cValue>='A'&& cValue <='Z')
{
printf("%c",cValue+32);
}
}
int main()
{
char cValue =' \0';
printf("enter character \n");
scanf("%C",&cValue);

Displayconvert(cValue);

return 0;
}