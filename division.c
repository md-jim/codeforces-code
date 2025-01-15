#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    float r[t];
    for(i=0;i<t;i++){
        scanf("%f",&r[i]);
    }
    for(i=0;i<t;i++){
     if(r[i]>=1900){
        printf("Division 1\n");
     }
     else if(1600<=r[i]&&r[i]<=1899){
        printf("Division 2\n");}
        else if(1400<=r[i]&&r[i]<=1599){
        printf("Division 3\n");}
        else if(r[i]<=1399){
        printf("Division 4\n");}



}}
