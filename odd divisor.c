#include<stdio.h>
int main()
{
    int t,i,p=0,j;
    long long int n[1000];
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&n[i]);}


      for(i=0;i<t;i++){
        if(n[i]%2!=0){
            printf("YES\n");
        }

       else if(n[i]%2==0){
            for(j=3;j<n[i];j=j+2){
        if(n[i]%j==0)
        p=p+1;
        else if(n[i]%j!=0)
            p=p;
        }
        if(p>=1)
       {
           printf("YES\n");
       }
       else if(p==0) printf("NO\n");

        }



}
}
