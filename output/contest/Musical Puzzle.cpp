
#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    string a;
    int count=0 ;
    cin>>a;
    for(int i=0;i<a.length()-2;i++){
       for(int j=i+1;j<a.length()-1;j++)
       if(a[i]!=a[j]&&a[i+1]!=a[j+1]){
          count++;
          
    }}
    cout<<count<<endl;
    }}