#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int temp,t;
    vector<int>c,a,b;
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i];
        
    }
    
    c[0]=b[0];
    for(int i=0;i<n;i++){
        temp=c[i]-a[i+1];
        c[i+1]=temp+b[i+1];
    }   
   
   sort(c.begin(),c.end());
   cout<<c[n];

}

