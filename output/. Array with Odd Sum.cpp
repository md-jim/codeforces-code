#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
    int n,sum=0,c1=0,c2=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        sum=sum+a[i];
        if(a[i]%2==0){
            c1++;
        }
        if(a[i]%2!=0){
            c2++;
        }
    }
    if((sum%2!=0)||(c1>=1&&c2>=1)){
        cout<<"YES"<<endl;
    }
    else  cout<<"NO"<<endl;

}}