#include<stdio.h>
#include<string.h>
int main(){
char s[100000];
int n,i,a=0,b=0;
scanf("%d",&n);
scanf("%s",&s);
for(i=0;i<n;i++){

    if(s[i]=='A'){
      a=a+1 ;
    }
   else if(s[i]=='D'){
      b=b+1 ;
    }}
    if(a==b){
        printf("Friendship");}
  else if(a>b){
        printf("Anton");}
     else if(a<b)
        {printf("Danik");}

}
