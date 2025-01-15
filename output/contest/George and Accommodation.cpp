#include<iostream>
using namespace std;
int main(){
  
  int n,count=0;
  cin>>n;
  int a,b;
for(int i=0;i<n;i++){
    cin>>a>>b;
    if(a==b){
    count=count;}
    else if(b-a>=2){
       count=count+1;
    }
}

cout<<count<<endl;

}