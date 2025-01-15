#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if((a==1&&b==1&&c==1)||(c==1&&a==1))
    {
        printf("%d",(b+c+a));

    }
    else if((a==1&&b==1))
        printf("%d",(a+b)*c);
        else if (b==1&&c==1)
        printf("%d",(b+c)*a);
    else if(a==1){
        if(b>=c||c>=b) printf("%d",(a+b)*c);}
    //else if(c>b) printf("%d",(a+b)*c);}


    else if(b==1){
        if(a>=c) printf("%d",(b+c)*a);
    else if(c>=a) printf("%d",(a+b)*c);}

    else if(c==1){
            if(b>=a)
        printf("%d",(b+c)*a);
        if(a>=b)
        printf("%d",(b+c)*a);

        }



            else printf("%d",a*b*c);

    }
