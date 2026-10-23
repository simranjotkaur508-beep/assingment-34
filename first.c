#include<stdio.h>
#include<string.h>
int p1()
{
    char str[10]={'B','H','O','P','A','L'};
    int i;
    for(i=0;i<=9;i++)
    printf("%c",str[i]);
    return 0;
}

int p2()
{
    char str[10]={'B','H','O','P','A','L'};
    int i;
    for(i=0;i<=5;i++)
    printf("%c",str[i]);
    return 0;
}

int p3()
{
    char str[10]={'B','H','O','P','A','L'};
    int i;
    for(i=0;str[i]!='\0';i++)
    printf("%c",str[i]);
    return 0;
}

int p4()
{
  char str[10]={'B','H','O','P','A','L'};
    int i;
    for(i=0;str[i]!=0;i++)
    printf("%c",str[i]);
    return 0;
}
 int p5()
 {
    char str[10]={'B','H','O','P','A','L'};
    int i;
    for(i=0;str[i];i++)
    printf("%c",str[i]);
    return 0;
 }

 int p6()
 {
    char str[10]={'B','H','O','P','A','L'};
    printf("%s",str);//with %s we print all string in one time//
    return 0;
 }

 int p7()
 {
    char str[10]="BHOPAL";
    
    printf("%c",str);
    return 0;
 }

 /*
 Write a program to calculate length of the string
 */
int p8()
{
     char str[10]="BHOPAL";
     int i;
     for(i=0;str[i];i++)
    
    printf("length of %s is  %d",str,i);
    return 0;
}

// taking input from user//

int p9()
{
    
    char str[30];
    
    printf("enter your name");
    scanf("%s",str);
    printf("%s",str);
    return 0;
} 

int p10()
{
     char str[10];
    int i;
    printf("enter your name");
     fgets(str,10,stdin);
     for (i=0;str[i];i++)
     if(str[i-1]=='\n')
        str[i-1]=='\0';
    // printf("\n%c %d",str[i],str[i]);//
    //printf("%s",str);//
    return 0;
}

int main()
{
    char str[10]="BHOPAL";
    int len;
    len = strlen(str);
    printf("%s - %d", str,len);
    return 0;
}