#include<stdio.h>
int main()
{
    long long int n,m,a,x,y;
    scanf("%lld%lld%lld",&n,&m,&a);

    x=n/a;
    y=m/a;
    if(n%a!=0)
        x=x+1;
    else x=x;
    if(m%a!=0)
     y=y+1;
   else y=y;

    printf("%lld",x*y);
}
