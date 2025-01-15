#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,k,t;
    cin>>n>>k;
    if(n%2==0){
        if(k<=(n/2)){
            for(long long int i=0,j=1;i<k;i++,j=j+2){
               t=j;
            }
        }
        if(k>(n/2)){
            for(long long int i=0,j=2;i<k-(n/2);i++,j=j+2){
               t=j;
            }
        
    }
}
else if(n%2!=0){
        if(k<=(n/2)+1){
              for(long long int i=0,j=1;i<k;i++,j=j+2){
               t=j;
            }
        }
        if(k>(n/2)+1){
            for(long long int i=0,j=2;i<k-((n/2)+1);i++,j=j+2){
               t=j;
            }
        
    }


}
cout<<t;
}