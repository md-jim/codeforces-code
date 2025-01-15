#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    

    
       vector<string>v;

       for(int i=0;i<t;i++){
        string x;
        cin>>x;
        v.push_back(x);

       }
       int count=0,tt;
       for(int i=0;i<1;i++){
        for(int j=0;j<t;j++){
      if(v[i]==v[j]){
      count++;
      }
      else t=j; 

       }

       }
       if(count>t/2){
        cout<<v[0];
       }
       else cout<<v[tt];

}
       