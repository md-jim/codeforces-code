#include<stdio.h>
int main()
{
   long long int w,k,n,i,a=0,b;
    scanf("%lld%lld%lld",&k,&n,&w);
    for(i=1 ; i<=w ; i++){

    b=k*i;
    a=a+b;

    }


    if(a<=n)
        printf("0");
    else printf("%lld",a-n);
}
