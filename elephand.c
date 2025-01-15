#include<stdio.h>
int main()
{
   long long int x,a,b;
    scanf("%lld",&x);


    a=x/5;

    b=a+1;
     if(x==1||x==2||x==3||x==4||x==5)
    printf("1");
   else if(x%5==0)
        printf("%lld",a);
    else if(x%5!=0)
        printf("%lld",b);
}
