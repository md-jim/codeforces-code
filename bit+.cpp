#include<bits/stdc++.h>
using namespace std;
void chck(int n){
    string s;
     int count=0;
    for(int i=0;i<n;i++){
        cin>>s;
    

    if(s=="++X"||s=="X++"){
    
count++;
    }
    else count--;}
    cout<<count;
    

}

int main(){
   int n;
   cin>>n;
   chck(n);
}