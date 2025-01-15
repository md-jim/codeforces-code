#include<stdio.h>
#include<string.h>
int main()
{
    char ch[150];
    int i,j,a,x=0;
    scanf("%s",&ch);
    a=strlen(ch);
    for(i=0;i<a;i++){
        for (j=i+1;j<a;j++)
            if(ch[j]==ch[i]){
            x=x+1;

            }

       else x=x;
       break;

    }

   if((a-x)%2!=0)
        printf("IGNORE HIM!");
       else printf("CHAT WITH HER!");
}
