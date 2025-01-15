#include<stdio.h>
long long int func(long long a){
if(a%2==0)
    return a/21;
else return -(a/2+1);

}
int main()
{
  long long int n;
  scanf("%lld",&n);
   printf("%lld",func(n));
}
