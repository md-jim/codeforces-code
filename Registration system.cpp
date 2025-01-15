#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   string s[n];
   for(int i=0;i<n;i++){
 
 cin>>s[i];
   }

   for(int i=0;i<n;i++){
    int count=0;
    for(int j=i;j>=0;j--){
        if(s[i]==s[j]){
       count++;
        }
    }
    if(count>1){
        cout<<s[i]<<count-1<<endl;
    }
    else cout<<"OK"<<endl;
   }
}