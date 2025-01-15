
#include<stdio.h>
#include<string.h>
int main(){

 char s1[1000],s2[1000];
 int a,i,j;
 scanf("%s",&s1);
 scanf("%s",&s2);

a= strcmp(strrev(s1),s2);

  if(a==0)
    printf("YES");

else printf("NO");

}
