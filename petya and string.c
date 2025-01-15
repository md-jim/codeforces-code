#include<stdio.h>
#include<string.h>
int main()
{
    char st1[100];
    char st2[100];
    int d,e;
    scanf("%s",&st1);
    scanf("%s",&st2);

   if(strcmpi(st1,st2)==0)
    printf("0");
    if(strcmpi(st1,st2)<0)
         printf("-1");
     if(strcmpi(st1,st2)>0)
    printf("1");
}
