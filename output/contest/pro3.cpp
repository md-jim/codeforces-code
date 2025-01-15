#include<iostream>
using namespace std;

int main(){
int n;
cin>>n;
int ar[n];
for(int i=0;i<n;i++){
    cin>>ar[n];
}
for(int i=0;i<n-2;i++){
    for(int j=i+1;j<n-1;j++){
        if(ar[i]<ar[j]+ar[j+1]&&ar[j+1]<ar[i]+ar[j]&&ar[j]<ar[j+1]+ar[i]){
           cout<<"YES"<<endl;
        }

    }
}

    
}