#include<stdio.h>
int main()
{
    int a[200],b[200],c[200],t,i,x;
    scanf("%d",&t);

    for(i=0;i<t;i++){
       scanf("%d%d%d",&a[i],&b[i],&c[i]);
        }
     for(i=0;i<t;i++){
            if(a[i]+b[i]==c[i]){
                x=1;
            }
         else x=0;


       if(x==1){
        printf("+");
       }
       else if(x==0)
                printf("-");}}

