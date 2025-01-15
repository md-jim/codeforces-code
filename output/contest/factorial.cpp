#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int temp=1;
   int a;
    cin>>a;
    for(int i=1;i<=a;i++){
     temp=i*temp;
    }
    cout<<temp<<endl;
}}