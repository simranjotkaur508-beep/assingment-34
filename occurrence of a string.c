  #include<stdio.h>
int main()
{
    char str [10],ch;
    int count=0;
    printf("enter a string");
    scanf("&s",str);
    printf("enter a character");
    scanf("%c",&ch);
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]==ch)
        {
            count++;
        }
    }

    printf("occurrence %d",count);
    return 0;
}