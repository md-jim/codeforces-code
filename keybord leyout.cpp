#include<bits/stdc++.h>
using namespace std;
int main(){
    string a,b,c;
    cin>>a>>b>>c;
    for(int j=0;j<c.length();j++){
    for(int i=0;i<26;i++){
        
        if(c[j]==a[i]){
            cout<<b[i];
            break;
        }
        else  if(c[j]==a[i]-32){
            char s=b[i]-32;
            cout<<s;
            break;
        }
        else  if(c[j]>=48&&c[j]<=57){
            cout<<c[j];
            break;
        }
         
        
    }}
}