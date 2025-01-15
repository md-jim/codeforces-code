#include<stdio.h>
int main()
{
    int ar[100],i,n,b=0;
    scanf("%d",&n);

    for(i=0;i<n;i++){
     scanf("%d",&ar[i]);}

    for(i=0;i<n;i++){

        if(ar[i]==1){
          b=b+1;
        }
        if(ar[i]==0){
          b=b;
        }

    }

    if(b>=1){printf("HARD");}
    else if (b==0)   {printf("EASY");}}
