#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
    int n,count=0;
    cin>>n;
    string a;
    cin>>a;
    for(int i=0 ;i<n;i++){
        if(a[i]!=a[n-1-i]){
            count++;
            if(count==n/2){
                break;
            }
        }
        else if(a[i]==a[n-1-i]){
            break;
        }

    }
    if(count==0){
        cout<<n<<endl;
    }
    else cout<<n-2*count<<endl;
}}