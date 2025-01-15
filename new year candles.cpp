#include<bits/stdc++.h>
using namespace std;
int main(){
    double a,b;
    cin>>a>>b;
    int sum=a;
     double x=a,t=0;
    while(a>=b){
       
        a=x+t;
        x=(a/b);
        int x1=(a/b);
       
        t=x-x1;
        sum=sum+x1;
        
     }
    cout<<sum;
}