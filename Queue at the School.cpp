#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    string s;
    cin>>s;
    string s1=s;
    for(int i=0;i<m;i++){
        s=s1;
         for(int i=0;i<s.size()-1;i++){
          if(s[i]=='B'&&s[i+1]=='G'){
            s1[i]='G';
            s1[i+1]='B';
            i++;
          }
          
          else s1[i]=s[i];}
    }
    cout<<s1;
}