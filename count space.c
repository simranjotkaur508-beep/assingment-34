#include<stdio.h>
int main()
{
    char str[10];
    char ch=' ';
    int count=0;
    printf("enter a string");
    scanf("%s",str);
    for(int i=0;str[i];i++)
    {
       

        if(str[i]==ch)
        {
            count++;
            
        }
    }
    printf("space %d",count);
    return 0;
}