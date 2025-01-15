#include<iostream>
using namespace std;
int main()
{
    int n,t1,t2,c1=0,c2=0;
    cin>>n;

    for(int i=1;i<=n;i++){
        t1=n-i;
        t2=i;
         for(int j=1;j<=t1;j++){
          if(t1/j==0){
       c1++;
          }}
           for(int k=1;k<=t2;k++){
          if(t2/k==0){
       c2++;
          }}
          if(c1==1&&c2==1){
            break;
          }
         
        

    }
    cout<<t1<<" "<<t2<<endl;
}