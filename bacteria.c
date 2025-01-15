#include<stdio.h>
int main()
{
   long int x,i;
    scanf("%ld",&x);

   while(x%2==0){
        x=x/2;
   }
        if(x==1)
            printf("1\n");
        else printf("2\n");

}
