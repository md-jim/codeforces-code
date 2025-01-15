#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int count=0;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]==s[i+1]){
      count++;
      if(count>=6){
      break;}
      if(s[i+1]!=s[i+2]){
        count=0;
      }
}}
      
        if(count>=6){
            cout<<"YES";
        }
        else cout<<"NO";

  
}