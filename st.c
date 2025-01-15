#include<stdio.h>
int main()
{
   int ar[1001],i,j=1;
   for(i=0;i<=1666;i++)
   {
       if(i%3!=0){
        if(i%10!=3)
         ar[j]=i;
        j=j+1;


       }

       printf("%d\n",ar[j]);}


}
