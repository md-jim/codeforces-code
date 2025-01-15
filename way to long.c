#include<stdio.h>
#include<string.h>
int main()
{ int a,n,i;
 scanf("%d",&n);
    char str[n][101];


    for(i=0 ; i<n ; i++){
scanf("%s",&str[i]);
a=strlen(str[i]);
if(a>10)
    {printf("%c%d%c\n",str[i][0],a-2,str[i][a-1]);}
else {printf("%s\n",str[i]);}

}

    return 0;
}
