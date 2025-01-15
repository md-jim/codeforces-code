#include<stdio.h>
#include<string.h>
int main()
{
    char st[100];
    scanf("%s",&st);
    int i,a;
    a=strlen(st);
    for(i=0;i<a;i++){
        if(st[i]=='A'||st[i]=='O'||st[i]=='Y'||st[i]=='E'||st[i]=='U'||st[i]=='I'||st[i]=='a'||st[i]=='o'||st[i]=='y'||st[i]=='e'||st[i]=='u'||st[i]=='i')
        {
         printf("");}


        else if (st[i]>64&&st[i]<91)
            printf(".%c",st[i]+32);
        else if(st[i]>96&&st[i]<123)
            printf(".%c",st[i]);
    }

}

