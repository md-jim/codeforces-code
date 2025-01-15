#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        string s;
        cin>>s;
        int a1=0,a2=0;
      for(int i=0;i<s.length();i++){
      if(x>0&&y>0){
        if(s[i]=='U'){
         a1++;
        }
        if(s[i]=='R'){
         a2++;
        }}
         if(x>0&&y<0){
        if(s[i]=='U'){
         a1++;
        }
        if(s[i]=='D'){
         a2--;
         y=0-y;
        }}
         if(x<0&&y>0){
        if(s[i]=='L'){
         a1--;
         x=0-x;
        }
        if(s[i]=='R'){
         a2++;
        }}
         if(x<0&&y<0){
        if(s[i]=='D'){
         a1--;
         y=0-y;
        }
        if(s[i]=='L'){
         a2--;
         x=0-x;
        }}
      }
      if(a1>=x&&a2>=y){
        cout<<"YES"<<endl;
      }
      else cout<<"NO"<<endl;
      }
    }