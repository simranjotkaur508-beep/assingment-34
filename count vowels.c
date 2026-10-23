#include<stdio.h>
int main()
{
    char str[10];
    char ch[5]={'a','e','i','o','u'};
    int count=0;
    printf("enter a string");
    scanf("%s",str);
    for(int i=0;str[i]!='\0';i++)
    {
        for(int j =0;j<5;j++)

        if(str[i]==ch[j])
        {
            count++;
            
        }
    }
    printf("vowels %d",count);
    return 0;
}