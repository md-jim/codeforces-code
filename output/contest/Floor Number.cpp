#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int n,x;
    cin>>n>>x;
    int temp=0,i=0,count=0;
    while(temp<n){
     
     temp=i*x+2;
     i++;
     count++;
}
cout<<count<<endl;
}
}