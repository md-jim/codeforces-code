#include<bits/stdc++.h>
using namespace std;
int main(){
    int k[4],d;
    cin>>k[0]>>k[1]>>k[2]>>k[3]>>d;
    int a[d];

    for(int i=0;i<d;i++){
      a[i]=i+1;
    }

       for(int i=0;i<4;i++){
        int x=k[i];
      for(int j=x;j<=d;j=j+x){

         for(int k=0;k<d;k++){
     if(a[k]==j){
       a[k]=-1;
     }
          }}
}
    int count=0;

    for(int i=0;i<d;i++){
      if(a[i]==-1){
        count++;
      }
    }
    cout<<count;
}