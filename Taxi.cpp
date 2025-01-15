#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,c1=0,c2=0,c3=0,c4=0;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
  int sum1=0,sum2=0;
    for(int i=0;i<n;i++){
       if(ar[i]==1){
        c1++;
        sum1=sum1+ar[i];
       }
        if(ar[i]==2){
        c2++;
        sum2=sum2+ar[i];
       }
        if(ar[i]==3){
        c3++;
       }
        if(ar[i]==4){
        c4++;
       }
    }
    int t;
    if(c1>=c3){
    sum1=c1-c3;}
    int sum;
    if((sum1+sum2)%4==0||c3-c1==0){
    sum=c4+c3+(sum1+sum2)/4;
    }
    else  sum=c4+c3+1+(sum1+sum2)/4;

    cout<<sum;

   
}