#include<stdio.h>
int main(){

 int a[100],n,i,b,j,x=0;
 scanf("%d",&n);


 for(i=0;i<n;i++){
    scanf("%d",&a[i]);
 }

 b=a[0];
   for(i=1;i<n;i++){
    for(j=i-1;j>=0;j--){
             if(n==1){
    printf("0");
 }
        else if(a[i]==a[j])
        x=x+1;
    else if(a[i]!=a[j]) x=x;}



   if(x>=1)
    b=b;
    else if(x==0)
        b=b+a[i];
    }
if(n==1){
    printf("0");
 }
 else printf("%d",b);}
