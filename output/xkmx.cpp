#include<iostream>
using namespace std;
int main()
{
    int n1,n2,count,count2,a=0;
    cin>>n1;
     cin>>n2;
     count=0;
    for(int i=1; i<=n2 ; i++){
           if(n2%i==0){
            count=count +1;
           }
    }

              if(count==2){
                for(int j=1;j<=(n2-n1)/2;j++){
                  n1=n1+2;
                  count2=0;
                  for(int i=1; i<=n1 ; i++){
           if(n1%i==0){
            count2=count2 +1;
           }
           
          
                  }
                if(count2==2&&n1!=n2){
                  a=a+1;
                }
                

              }cout<<a;
              if(a==0){
                cout<<"YES";
                
              }
              else if(a>0) cout<<"NO";
              }
              else cout<<"N.O";
          


               }
               