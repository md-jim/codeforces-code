#include<stdio.h>
#include<string.h>
int main(){

 char s[100];
 scanf("%s",&s);
 int i,a,n=0,m=0;
 a=strlen(s);
 for(i=0;i<a;i++){

    if(s[i]==s[i+1]&&s[i+1]=='0'){
        n=n+1;
}

    else if(s[i]==s[i+1]&&s[i+1]=='1'){
        m=m+1;
}}


if(n>=7||m>=7)
    printf("YES");

   else printf("NO");

}
