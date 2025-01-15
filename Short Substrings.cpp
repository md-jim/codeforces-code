#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s,s1;
        cin>>s;
        for(int i=0;i<s.length()-1;i++){
            if(s[i]!=s[i+1]){
                s[i]=s[i];
                s[i+1]=s[i+1];
            }
        }
         cout<<s;
    }
}