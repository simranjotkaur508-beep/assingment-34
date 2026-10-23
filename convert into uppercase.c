#include<stdio.h>
int main()
{
    char str[10];
   
    int count=0;
    printf("enter a string");
    scanf("%s",str);
    for(int i=0;str[i]!='\0';i++)
    {
       

        if(str[i]>='a' && str[i]<='z')
        {
           str[i]=32;
        }
    }
    printf("convert %d",count);
    return 0;
}