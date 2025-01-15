#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
   
    getline(cin,s);
int count=0;
    sort(s.begin(),s.end());
    for(int i=0;i<s.size();i++){
       
        if(s[i]!=s[i+1]){
            count++;
        }

    }
    if(s.size()>3){
    cout<<count-4;}
    else if(s.size()==3){cout<<1;}
    else cout<<0;
   
}