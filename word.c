#include<stdio.h>
#include<string.h>
int main()
{
    char w[100];
    scanf("%s",&w);
    int i,a,x=0,y=0;
    a=strlen(w);
    for(i=0;i<a;i++){
        if(w[i]>=65&&w[i]<=90){
         x=x+1 ;
        }

       else if(w[i]>=95&&w[i]<=122){
         y=y+1 ;
        }}

        for(i=0;i<a;i++){
        if(x>y){
            if(w[i]>64&&w[i]<91){
         printf("%c",w[i]);
        }

       else if(w[i]>96&&w[i]<123){
          printf("%c",w[i]-32);}}
          else if(y>=x){
            if(w[i]>64&&w[i]<91){
         printf("%c",w[i]+32);
        }

       else if(w[i]>96&&w[i]<123){
          printf("%c",w[i]);} }}

}
