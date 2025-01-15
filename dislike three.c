#include<stdio.h>
int main()
{
    int i,a=1,n,j;
    scanf("%d",&n);
    int ar[n];
    for(i=1;i<=n;i++){
        scanf("%d",&ar[i]);
    }
    for(i=1;i<=ar[i];i++){
        if(i==1){
            a=1;
            printf("%d\n",a);
        }
        else if(i==2){
            a=2;
        printf("%d\n",a);

        }
    else if(i%3==0){
        a=a+1;
        if(a%3==0)
            a=a+1;
            if(a%10==3) a=a+1;
            if(a%3==0)
            a=a+1;
    printf("%d\n",a);

    }
    else if(i%3!=0&&i!=1&&i!=2){
        a=a+1;
        if(a%3==0)
            a=a+1;
            if(a%10==3) a=a+1;
            if(a%3==0)
            a=a+1;
            printf("%d\n",a);

    }
    else if(i/10==3){
        a=a+1;
        if(a%3==0)
            a=a+1;
            if(a%10==3) a=a+1;
            if(a%3==0)
            a=a+1;
            printf("%d\n",a);

    }



}}

