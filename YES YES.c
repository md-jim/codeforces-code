#include<stdio.h>
#include<string.h>
int main()
{
   int n;
   scanf("%d",&n);
    char st[n][5];

    int i;
    for(i=0 ; i<n ; i++){
        scanf("%s",&st);
        if(strcmpi(st,"yes")==0)
            printf("YES\n");
        else printf("NO\n");
    }
}
